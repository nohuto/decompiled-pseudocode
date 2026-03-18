/*
 * XREFs of RtlpApplyGenericRetpolineFixup @ 0x14032B090
 * Callers:
 *     RtlApplyImportRelocationToPage @ 0x14032AE34 (RtlApplyImportRelocationToPage.c)
 *     MiApplyRetpolineFixups @ 0x14032AEEC (MiApplyRetpolineFixups.c)
 *     RtlApplyImportRelocationToImage @ 0x1403B2F0C (RtlApplyImportRelocationToImage.c)
 *     RtlApplyIndirectRelocationToPage @ 0x14058A8E4 (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToPage @ 0x14058A990 (RtlApplySwitchJumpRelocationToPage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14058AA7C (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall RtlpApplyGenericRetpolineFixup(unsigned __int64 a1, unsigned int a2, _WORD *a3, int a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rbx
  _BYTE *v6; // r9
  _BYTE *result; // rax
  int v8; // edx

  v4 = 0;
  v5 = a1 + a2;
  v6 = (_BYTE *)(a1 + a4);
  result = v6;
  v8 = 1;
  do
  {
    if ( (unsigned __int64)result >= a1 )
    {
      if ( (unsigned __int64)result >= v5 )
        return result;
      if ( (*a3 & (unsigned __int16)v8) != 0 )
        *result = *((_BYTE *)a3 + result - v6 + 2);
    }
    ++v4;
    v8 = __ROL4__(v8, 1);
    ++result;
  }
  while ( v4 < 0xC );
  return result;
}
