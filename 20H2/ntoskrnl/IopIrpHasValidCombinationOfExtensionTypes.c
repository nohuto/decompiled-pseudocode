/*
 * XREFs of IopIrpHasValidCombinationOfExtensionTypes @ 0x1405061F0
 * Callers:
 *     IopSetCopyInformationExtension @ 0x1403F086C (IopSetCopyInformationExtension.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x140506070 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1405060D0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140506180 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x140506488 (IopPerfCallDriver.c)
 * Callees:
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 */

bool __fastcall IopIrpHasValidCombinationOfExtensionTypes(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  __int16 v7; // cx
  __int16 v9; // ax

  if ( *(char *)(a1 + 71) < 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 200);
  if ( !v3 )
    return 1;
  v4 = EnableFeatureServicing_40524482;
  if ( (unsigned int)EnableFeatureServicing_40524482 >= 2 )
    v4 = (unsigned __int8)FeatureServicing_40524482_EnableKey();
  v5 = 1 << a2;
  v6 = (1 << a2) & 0xB2;
  if ( v4 )
  {
    if ( !v6 )
    {
      if ( (v5 & 0x200) == 0 )
        return 1;
      v9 = *(_WORD *)(v3 + 2);
      return (v9 & 0x200) == 0 || (v9 & 0x200) == v5;
    }
  }
  else if ( !v6 )
  {
    return 1;
  }
  v7 = *(_WORD *)(v3 + 2);
  if ( (v7 & 0xB2) == 0 || (v7 & 0xB2) == v5 )
    return 1;
  if ( a2 != 1 && (v7 & 2) != 0 )
  {
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_WORD *)(v3 + 2) = v7 & 0xFFFE;
    return 1;
  }
  return 0;
}
