/*
 * XREFs of _RtlpHpHeapUnlock@12 @ 0x4B379185
 * Callers:
 *     _RtlUnlockProcessHeapOnProcessTerminate@0 @ 0x4B2DD99E (_RtlUnlockProcessHeapOnProcessTerminate@0.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlpHpUnlockHeapForCloning@8 @ 0x4B379A6D (_RtlpHpUnlockHeapForCloning@8.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpHpHeapUnlock(int a1, int a2, int a3)
{
  volatile signed __int32 *v4; // ecx
  int v6; // eax

  if ( (*(_BYTE *)(a1 + 12) & 1) == 0 )
  {
    v4 = (volatile signed __int32 *)(a1 + 64);
    if ( a2 )
    {
      *(_DWORD *)(a1 + 176) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 172) = 1;
      *(_DWORD *)(a1 + 772) = 1;
      *(_DWORD *)(a1 + 512) = 1;
      *(_DWORD *)(a1 + 320) = 1;
      *(_DWORD *)(a1 + 448) = 1;
      *v4 = 1;
    }
    if ( (*(_WORD *)(a1 + 172))-- == 1 )
    {
      *(_DWORD *)(a1 + 176) = 0;
      v6 = *(_DWORD *)(a1 + 12);
      if ( (v6 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(v4);
        v6 = *(_DWORD *)(a1 + 12);
        if ( (v6 & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 320));
          v6 = *(_DWORD *)(a1 + 12);
          if ( (v6 & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 448));
            v6 = *(_DWORD *)(a1 + 12);
          }
        }
      }
      if ( (v6 & 1) == 0 )
        RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 512));
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 772));
    }
  }
}
