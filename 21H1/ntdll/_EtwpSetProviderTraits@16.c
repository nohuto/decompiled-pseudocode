/*
 * XREFs of _EtwpSetProviderTraits@16 @ 0x4B2B0AAD
 * Callers:
 *     _EtwEventSetInformation@20 @ 0x4B2B0A60 (_EtwEventSetInformation@20.c)
 * Callees:
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

LONG __fastcall EtwpSetProviderTraits(int a1, __int16 a2, int a3, __int16 a4)
{
  ULONG v4; // esi
  _BYTE *Heap; // edi
  NTSTATUS v6; // eax
  LONG v7; // esi
  size_t v9; // [esp-4h] [ebp-B4h]
  SIZE_T v10; // [esp-4h] [ebp-B4h]
  ULONG ReturnLength; // [esp+10h] [ebp-A0h] BYREF
  int v13; // [esp+14h] [ebp-9Ch]
  _BYTE OutputBuffer[120]; // [esp+18h] [ebp-98h] BYREF
  _DWORD InputBuffer[4]; // [esp+90h] [ebp-20h] BYREF
  __int16 v16; // [esp+A0h] [ebp-10h]

  HIWORD(v13) = a2;
  if ( !a4 || (a3 & 1) != 0 || a4 != *(_WORD *)(a3 + 52) )
  {
    v7 = 6;
LABEL_14:
    RtlSetLastWin32Error(v7);
    return v7;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 36));
  v4 = 120;
  LODWORD(v9) = 120;
  *(_DWORD *)(a3 + 44) = NtCurrentTeb()->ClientId.UniqueThread;
  memset(OutputBuffer, 0, v9);
  Heap = OutputBuffer;
  InputBuffer[0] = *(_DWORD *)(a3 + 48);
  InputBuffer[2] = a1;
  InputBuffer[1] = 0;
  InputBuffer[3] = 0;
  v16 = HIWORD(v13);
  v13 = 0;
  while ( 1 )
  {
    v6 = ZwTraceControl(EtwSetProviderTraitsCode, InputBuffer, 0x18u, Heap, v4, &ReturnLength);
    v7 = v6;
    if ( v6 != -1073741789 )
      break;
    if ( Heap != OutputBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    LODWORD(v10) = ReturnLength;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
    if ( !Heap )
    {
      v7 = -1073741801;
      goto LABEL_21;
    }
    if ( (unsigned int)++v13 >= 0x10 )
      goto LABEL_21;
    v4 = ReturnLength;
  }
  if ( !v6 )
    goto LABEL_7;
LABEL_21:
  v7 = RtlNtStatusToDosError(v7);
  if ( v7 )
    goto LABEL_9;
LABEL_7:
  *(_WORD *)(a3 + 54) |= 0x4000u;
  if ( ReturnLength )
    EtwpUpdateEnableInfoAndCallback(a3, Heap);
LABEL_9:
  *(_DWORD *)(a3 + 44) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a3 + 36));
  if ( Heap && Heap != OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v7 )
    goto LABEL_14;
  return v7;
}
