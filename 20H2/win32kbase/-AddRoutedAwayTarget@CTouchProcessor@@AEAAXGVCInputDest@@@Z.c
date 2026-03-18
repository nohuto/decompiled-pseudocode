/*
 * XREFs of ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C018580C
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018D968 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::AddRoutedAwayTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  __int64 v4; // rdx
  struct CInputPointerNode *NodeById; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v8 = Win32AllocPoolZInit(0x88uLL, 0x6E616D55u);
    v9 = v8;
    if ( v8 )
    {
      CInputDest::operator=((__int64)(v8 + 2), (__int64)a3, v6, v7);
      v10 = (_QWORD *)((char *)NodeById + 264);
      v11 = *((_QWORD *)NodeById + 33);
      if ( *(struct CInputPointerNode **)(v11 + 8) != (struct CInputPointerNode *)((char *)NodeById + 264) )
        __fastfail(3u);
      *v9 = v11;
      v9[1] = v10;
      *(_QWORD *)(v11 + 8) = v9;
      *v10 = v9;
    }
  }
  CInputDest::SetEmpty(a3, v4, v6, v7);
}
