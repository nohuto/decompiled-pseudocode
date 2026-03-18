/*
 * XREFs of PpmParkClearForcedMask @ 0x1408F5FE4
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x1403BFDB4 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C0178 (PpmCheckApplyParkConstraints.c)
 *     PpmParkParkingAvailable @ 0x1407A7D90 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(_WORD *a1)
{
  unsigned int v2; // ebx
  unsigned int v4; // r9d
  char v5; // r8
  unsigned __int16 i; // cx
  __int64 v7; // rdx
  char v8; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *a1 < 0x14u )
  {
    v4 = PpmParkNumNodes;
    v2 = 0;
    v5 = 0;
    for ( i = 0; i < v4; ++i )
    {
      v7 = PpmParkNodes + 272LL * i;
      if ( *(_WORD *)(v7 + 4) == *a1 )
      {
        v8 = *(_BYTE *)(v7 + 146);
        if ( (v8 & 1) != 0 )
        {
          v5 = 1;
          *(_BYTE *)(v7 + 146) = v8 & 0xFE;
        }
      }
    }
    if ( v5 )
    {
      PpmParkApplyPolicy();
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v2;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v2;
}
