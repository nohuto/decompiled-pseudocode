/*
 * XREFs of EtwpRegisterProvider @ 0x180042F0C
 * Callers:
 *     EtwNotificationRegister @ 0x180043080 (EtwNotificationRegister.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043594 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlRunOnceExecuteOnce @ 0x180043870 (RtlRunOnceExecuteOnce.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0900 (NtTraceControl.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  char v6; // bp
  _QWORD *v7; // rbx
  ULONG OutputBufferLength; // esi
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *Heap; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE InputBuffer[160]; // [rsp+38h] [rbp-C0h] BYREF

  v6 = 0;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v7 = InputBuffer;
  OutputBufferLength = 160;
  if ( !byte_18016C508 )
  {
    v9 = RtlRunOnceExecuteOnce(&EtwpRegisterTpInitOnce, EtwpRegisterTpNotificationOnce, 0LL, 0LL);
    if ( v9 )
      return RtlNtStatusToDosError(v9);
  }
  while ( 1 )
  {
    v10 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)v7 + 4) = a3;
    *(_OWORD *)v7 = v10;
    *((_DWORD *)v7 + 5) = *(unsigned __int16 *)(a1 + 96);
    v7[4] = a2;
    v11 = NtTraceControl(EtwRegisterGuidsCode, v7, 0xA0u, v7, OutputBufferLength, &ReturnLength);
    if ( v11 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v6 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v7 = Heap;
    if ( !Heap )
    {
      v11 = -1073741801;
      break;
    }
  }
  if ( !v11 )
  {
    v12 = 0;
LABEL_6:
    *(_QWORD *)(a1 + 88) = v7[3];
    if ( (unsigned int)(a3 - 2) <= 1 )
      EtwpUpdateEnableInfoAndCallback(a1, v7 + 5);
    v13 = *(_QWORD *)(a1 + 32) - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( !v13 )
      v13 = *(_QWORD *)(a1 + 40) - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    v14 = PrivateLoggerNotificationEntry;
    if ( !v13 )
      v14 = a1;
    PrivateLoggerNotificationEntry = v14;
    goto LABEL_13;
  }
  v12 = RtlNtStatusToDosError(v11);
  if ( !v12 )
    goto LABEL_6;
LABEL_13:
  if ( v6 )
  {
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return v12;
}
