/*
 * XREFs of ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0195F54
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0198698 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C018EA44 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::PopRoutedAwayTarget(struct _KTHREAD **a1, __int64 a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget ****v6; // rax
  struct tagCPointerRoutedAwayTarget ***v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v17[8]; // [rsp+20h] [rbp-49h] BYREF

  memset(v17, 0, 120);
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( NodeById )
  {
    v6 = (struct tagCPointerRoutedAwayTarget ****)((char *)NodeById + 264);
    v7 = *v6;
    if ( *v6 != (struct tagCPointerRoutedAwayTarget ***)v6 )
    {
      CInputDest::operator=((__int64)v17, (__int64)(v7 + 2));
      CTouchProcessor::FreeRoutedAwayTarget(a1, v7, v8, v9);
    }
  }
  v10 = v17[1];
  *(_OWORD *)a2 = v17[0];
  *(_BYTE *)(a2 + 112) = 0;
  v11 = v17[2];
  *(_OWORD *)(a2 + 16) = v10;
  v12 = v17[3];
  *(_OWORD *)(a2 + 32) = v11;
  v13 = v17[4];
  *(_OWORD *)(a2 + 48) = v12;
  v14 = v17[5];
  *(_OWORD *)(a2 + 64) = v13;
  v15 = v17[6];
  *(_OWORD *)(a2 + 80) = v14;
  *(_OWORD *)(a2 + 96) = v15;
  memset(v17, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v17);
  return a2;
}
