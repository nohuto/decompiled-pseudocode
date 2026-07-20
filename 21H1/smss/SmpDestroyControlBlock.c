/*
 * XREFs of SmpDestroyControlBlock @ 0x140003BE4
 * Callers:
 *     SmpStartCsr @ 0x1400020F0 (SmpStartCsr.c)
 *     SmpFinalizeClientContext @ 0x140002F20 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003020 (SmpHandleConnectionRequest.c)
 *     SmpStopCsr @ 0x1400059C0 (SmpStopCsr.c)
 * Callees:
 *     SmpSessionIdToInitialSessionIndex @ 0x140002704 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpReleaseControlBlock @ 0x140003C7C (SmpReleaseControlBlock.c)
 *     SmpTerminateCSR @ 0x1400058B4 (SmpTerminateCSR.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140015498 (SmpTerminate.c)
 */

__int64 __fastcall SmpDestroyControlBlock(HANDLE *BaseAddress, int a2)
{
  unsigned int v2; // esi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // rdi
  int v9; // ecx
  unsigned __int64 v10; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)BaseAddress & 2) == 0 )
  {
    _m_prefetchw(BaseAddress);
    v5 = *(_DWORD *)BaseAddress;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)BaseAddress, v5 | 2, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 2) == 0 )
    {
      v7 = *((unsigned int *)BaseAddress + 2);
      SmpReleaseControlBlock(BaseAddress);
      if ( a2 )
      {
        if ( (unsigned int)SmpSessionIdToInitialSessionIndex(v7) != -1
          && !*(_DWORD *)(SmpCoreProcessIds + 40LL * (unsigned int)SmpSessionIdToInitialSessionIndex(v9) + 4) )
        {
          v10 = (unsigned __int64)BaseAddress[2];
          RtlInitUnicodeString(&DestinationString, L"initial session process or");
          Parameters[0] = (unsigned __int64)&DestinationString;
          Parameters[1] = *(int *)(v10 + 4);
          Parameters[2] = v7;
          Parameters[3] = v10;
          SmpTerminate(Parameters, 1u, 4u);
          __debugbreak();
        }
        NtTerminateProcess(BaseAddress[6], -1073741823);
        v2 = SmpTerminateCSR((unsigned int)v7);
      }
    }
  }
  NtWaitForSingleObject(BaseAddress[6], 0, 0LL);
  return v2;
}
