/*
 * XREFs of RtlCheckCurrentPatchesApplied @ 0x140917830
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CA038 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlpCheckFunctionPatchApplied @ 0x1409AFC88 (RtlpCheckFunctionPatchApplied.c)
 */

__int64 __fastcall RtlCheckCurrentPatchesApplied(__int64 a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int *v5; // r11
  __int64 v8; // rax
  __int64 v9; // rax

  LODWORD(v4) = 0;
  v5 = a3;
  if ( !a4 )
    return 1LL;
  while ( 1 )
  {
    v8 = *v5;
    if ( (_DWORD)v8 )
    {
      v9 = RtlpCheckFunctionPatchApplied(a1 + v8);
      if ( v9 != a2 + 8 * v4 )
        break;
    }
    LODWORD(v4) = v4 + 1;
    v5 = (unsigned int *)((char *)v5 + 6);
    if ( (unsigned int)v4 >= a4 )
      return 1LL;
  }
  return 0LL;
}
