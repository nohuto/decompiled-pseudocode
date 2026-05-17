/*
 * XREFs of EtwpRegisterProvider @ 0x180042ECC
 * Callers:
 *     EtwNotificationRegister @ 0x180043040 (EtwNotificationRegister.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0ED0 (NtTraceControl.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  char v6; // bp
  _BYTE *v7; // rbx
  int v8; // esi
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Heap; // rax
  unsigned int v17; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v18[160]; // [rsp+38h] [rbp-C0h] BYREF

  v6 = 0;
  memset(v18, 0, sizeof(v18));
  v7 = v18;
  v8 = 160;
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
    *((_QWORD *)v7 + 4) = a2;
    v11 = NtTraceControl(15LL, v7, 160LL, v7, v8, &v17);
    if ( v11 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7);
    v6 = 1;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v17);
    v8 = v17;
    v7 = (_BYTE *)Heap;
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
    *(_QWORD *)(a1 + 88) = *((_QWORD *)v7 + 3);
    if ( (unsigned int)(a3 - 2) <= 1 )
      EtwpUpdateEnableInfoAndCallback(a1, v7 + 40);
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
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7);
  }
  return v12;
}
