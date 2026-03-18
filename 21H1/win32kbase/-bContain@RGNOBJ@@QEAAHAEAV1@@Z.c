/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0075D5C
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0075A70 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct RGNOBJ *a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rdx

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD **)this;
  return *(_DWORD *)(*(_QWORD *)this + 96LL) <= v2[24] && v3[26] >= v2[26] && v3[25] <= v2[25] && v3[27] >= v2[27];
}
