/*
 * XREFs of ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C018DA4C
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0195B88 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::AddRoutedAwayTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v5 = Win32AllocPoolZInit(0x88uLL, 0x6E616D55u);
    v6 = v5;
    if ( v5 )
    {
      CInputDest::operator=((__int64)(v5 + 2), (__int64)a3);
      v7 = (_QWORD *)((char *)NodeById + 264);
      v8 = *((_QWORD *)NodeById + 33);
      if ( *(struct CInputPointerNode **)(v8 + 8) != (struct CInputPointerNode *)((char *)NodeById + 264) )
        __fastfail(3u);
      *v6 = v8;
      v6[1] = v7;
      *(_QWORD *)(v8 + 8) = v6;
      *v7 = v6;
    }
  }
  CInputDest::SetEmpty(a3);
}
