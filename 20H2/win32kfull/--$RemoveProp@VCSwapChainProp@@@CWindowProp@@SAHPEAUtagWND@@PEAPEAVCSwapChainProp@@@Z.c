/*
 * XREFs of ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C023D068
 * Callers:
 *     UserRemoveWindowedSwapChain @ 0x1C0156010 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::RemoveProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 144);
  v4 = *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2);
  v5 = 0;
  if ( *((_WORD *)&WPP_MAIN_CB.AlignmentRequirement + 2) == word_1C0339F54 )
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  v6 = RealInternalRemoveProp(v2, v4, 1LL);
  *a2 = v6;
  if ( v6 )
    *(_QWORD *)(v6 + 8) = 0LL;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
