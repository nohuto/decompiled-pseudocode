/*
 * XREFs of ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01990CC
 * Callers:
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01902E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007471C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C018EA44 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveRoutedAwayTarget(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagCPointerRoutedAwayTarget **v8; // rdi
  struct tagCPointerRoutedAwayTarget **i; // rbx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v8 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 264);
    for ( i = (struct tagCPointerRoutedAwayTarget **)*((_QWORD *)NodeById + 33);
          i != v8;
          i = (struct tagCPointerRoutedAwayTarget **)*i )
    {
      if ( CInputDest::operator==((unsigned int *)i + 4, (__int64)a3, v6, v7) )
      {
        CTouchProcessor::FreeRoutedAwayTarget(a1, (struct tagCPointerRoutedAwayTarget ***)i, v6, v7);
        break;
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
