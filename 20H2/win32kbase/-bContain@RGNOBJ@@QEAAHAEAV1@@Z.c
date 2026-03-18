/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0037F1C
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0037C30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
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
