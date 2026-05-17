/*
 * XREFs of _SbAtomicCaptureContextGuid@12 @ 0x4B2B8650
 * Callers:
 *     _SbpUpdateCache@16 @ 0x4B2B8498 (_SbpUpdateCache@16.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 */

int __fastcall SbAtomicCaptureContextGuid(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *pShimData; // eax
  _DWORD *v5; // ebx
  int v6; // eax

  v3 = 0;
  pShimData = NtCurrentPeb()->pShimData;
  v5 = 0;
  if ( pShimData )
  {
    v5 = pShimData + 504;
    if ( pShimData == (_DWORD *)-2016 || !pShimData[516] )
      v5 = 0;
  }
  if ( a2 && a3 && v5 )
  {
    if ( !a1 )
    {
      *a3 = *v5;
      a3[1] = v5[1];
      *a2 = v5[12];
      a2[1] = v5[13];
      a2[2] = v5[14];
      a2[3] = v5[15];
      return 1;
    }
    if ( a1 == 1 )
    {
      RtlAcquireSRWLockShared(&SbpContextLock);
      v6 = *v5;
      *a2 = v5[16];
      *a3 = v6;
      a3[1] = v5[1];
      a2[1] = v5[17];
      a2[2] = v5[18];
      a2[3] = v5[19];
      RtlReleaseSRWLockShared(&SbpContextLock);
      return 1;
    }
  }
  return v3;
}
