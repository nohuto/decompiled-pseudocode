/*
 * XREFs of _EtwpRegisterProvider@12 @ 0x4B2B0C39
 * Callers:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 * Callees:
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

ULONG __fastcall EtwpRegisterProvider(int a1, int a2, int a3)
{
  _DWORD *v4; // ebx
  ULONG v5; // ecx
  NTSTATUS v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  NTSTATUS v9; // eax
  ULONG v10; // edi
  _DWORD *Heap; // eax
  size_t v13; // [esp-4h] [ebp-D0h]
  SIZE_T v14; // [esp-4h] [ebp-D0h]
  ULONG ReturnLength; // [esp+18h] [ebp-B4h] BYREF
  char v18; // [esp+1Fh] [ebp-ADh]
  _BYTE InputBuffer[164]; // [esp+20h] [ebp-ACh] BYREF

  LODWORD(v13) = 160;
  v18 = 0;
  memset(InputBuffer, 0, v13);
  v4 = InputBuffer;
  v5 = 160;
  if ( !byte_4B3A5DA8 )
  {
    v6 = RtlRunOnceExecuteOnce(&EtwpRegisterTpInitOnce, EtwpRegisterTpNotificationOnce, 0, 0);
    if ( v6 )
      return RtlNtStatusToDosError(v6);
    v5 = 160;
  }
  v7 = (_DWORD *)(a1 + 12);
  while ( 1 )
  {
    *v4 = *v7;
    v4[1] = v7[1];
    v4[2] = v7[2];
    v4[3] = v7[3];
    v4[4] = a3;
    v8 = *(unsigned __int16 *)(a1 + 52);
    v4[9] = 0;
    v4[5] = v8;
    v4[8] = a2;
    v9 = ZwTraceControl(EtwRegisterGuidsCode, v4, 0xA0u, v4, v5, &ReturnLength);
    if ( v9 != -1073741789 )
      break;
    if ( v18 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    LODWORD(v14) = ReturnLength;
    v18 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
    v5 = ReturnLength;
    v4 = Heap;
    v7 = (_DWORD *)(a1 + 12);
    if ( !v4 )
    {
      v9 = -1073741801;
      break;
    }
  }
  if ( !v9 )
  {
    v10 = 0;
    goto LABEL_8;
  }
  v10 = RtlNtStatusToDosError(v9);
  if ( !v10 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 48) = v4[6];
    if ( a3 == 3 || a3 == 2 )
      EtwpUpdateEnableInfoAndCallback(a1, v4 + 10);
    LODWORD(v14) = 16;
    if ( !memcmp((const void *)(a1 + 12), &PrivateLoggerNotificationGuid, v14) )
      PrivateLoggerNotificationEntry = a1;
  }
  if ( v18 )
  {
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v10;
}
