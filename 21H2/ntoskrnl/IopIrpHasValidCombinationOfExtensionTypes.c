/*
 * XREFs of IopIrpHasValidCombinationOfExtensionTypes @ 0x140459D9C
 * Callers:
 *     IopSetCopyInformationExtension @ 0x140417D50 (IopSetCopyInformationExtension.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x140559350 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1405593B0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140559460 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 * Callees:
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 */

bool __fastcall IopIrpHasValidCombinationOfExtensionTypes(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  __int16 v8; // cx
  __int16 v10; // ax

  v3 = a2;
  if ( *(char *)(a1 + 71) < 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 1;
  v5 = EnableFeatureServicing_40851744;
  if ( (unsigned int)EnableFeatureServicing_40851744 >= 2 )
    v5 = (unsigned __int8)FeatureServicing_40851744_EnableKey(a1, a2, a3);
  v6 = 1 << v3;
  v7 = (1 << v3) & 0xB2;
  if ( v5 )
  {
    if ( !v7 )
    {
      if ( (v6 & 0x200) == 0 )
        return 1;
      v10 = *(_WORD *)(v4 + 2);
      return (v10 & 0x200) == 0 || (v10 & 0x200) == v6;
    }
  }
  else if ( !v7 )
  {
    return 1;
  }
  v8 = *(_WORD *)(v4 + 2);
  if ( (v8 & 0xB2) == 0 || (v8 & 0xB2) == v6 )
    return 1;
  if ( v3 != 1 && (v8 & 2) != 0 )
  {
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_WORD *)(v4 + 2) = v8 & 0xFFFE;
    return 1;
  }
  return 0;
}
