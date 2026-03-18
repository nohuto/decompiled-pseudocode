/*
 * XREFs of IopIrpHasValidCombinationOfExtensionTypes @ 0x1405021E0
 * Callers:
 *     IoSetAdapterCryptoEngineExtension @ 0x140502070 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1405020D0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140502170 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x140502428 (IopPerfCallDriver.c)
 * Callees:
 *     <none>
 */

char __fastcall IopIrpHasValidCombinationOfExtensionTypes(__int64 a1, int a2)
{
  __int64 v3; // r8
  int v4; // edx
  __int16 v5; // cx

  if ( *(char *)(a1 + 71) < 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 200);
  if ( !v3 )
    return 1;
  v4 = 1 << a2;
  if ( (v4 & 0xB2) == 0 )
    return 1;
  v5 = *(_WORD *)(v3 + 2);
  if ( (v5 & 0xB2) == 0 || (v5 & 0xB2) == v4 )
    return 1;
  if ( a2 != 1 && (v5 & 2) != 0 )
  {
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_WORD *)(v3 + 2) = v5 & 0xFFFE;
    return 1;
  }
  return 0;
}
