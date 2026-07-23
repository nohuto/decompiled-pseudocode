/*
 * XREFs of _EtwpTrackProviderBinary@8 @ 0x4B3808C0
 * Callers:
 *     _EtwEventSetInformation@20 @ 0x4B2B0A60 (_EtwEventSetInformation@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     _EtwpTrackRegBinaryInfo@4 @ 0x4B381980 (_EtwpTrackRegBinaryInfo@4.c)
 */

LONG __stdcall EtwpTrackProviderBinary(int a1, __int16 a2)
{
  NTSTATUS v2; // eax
  LONG v3; // edi
  _DWORD InputBuffer[3]; // [esp+10h] [ebp-10h] BYREF
  ULONG ReturnLength; // [esp+1Ch] [ebp-4h] BYREF

  if ( !a2 || (a1 & 1) != 0 || a2 != *(_WORD *)(a1 + 52) )
  {
    v3 = 6;
    goto LABEL_9;
  }
  InputBuffer[0] = *(_DWORD *)(a1 + 48);
  InputBuffer[1] = 0;
  v2 = ZwTraceControl(EtwTrackBinaryCode, InputBuffer, 8u, 0, 0, &ReturnLength);
  if ( v2 )
  {
    v3 = RtlNtStatusToDosError(v2);
    if ( !v3 )
      goto LABEL_7;
LABEL_9:
    RtlSetLastWin32Error(v3);
    return v3;
  }
  v3 = 0;
LABEL_7:
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 36));
  *(_DWORD *)(a1 + 44) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(a1 + 54) |= 0x8000u;
  EtwpTrackRegBinaryInfo(a1);
  *(_DWORD *)(a1 + 44) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 36));
  return v3;
}
