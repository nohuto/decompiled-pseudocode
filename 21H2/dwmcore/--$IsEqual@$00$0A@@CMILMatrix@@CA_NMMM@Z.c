/*
 * XREFs of ??$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z @ 0x180016AB0
 * Callers:
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180081D20 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsEqual<1,0>(float a1, float a2, float a3)
{
  return a3 > COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - a2) & _xmm);
}
