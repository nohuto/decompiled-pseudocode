/*
 * XREFs of ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0193A24
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0196168 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C018C524 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::PopRoutedAwayTarget(struct _KTHREAD **a1, __int64 a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagCPointerRoutedAwayTarget ****v8; // rax
  struct tagCPointerRoutedAwayTarget ***v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _OWORD v22[8]; // [rsp+20h] [rbp-49h] BYREF

  memset(v22, 0, 120);
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( NodeById )
  {
    v8 = (struct tagCPointerRoutedAwayTarget ****)((char *)NodeById + 264);
    v9 = *v8;
    if ( *v8 != (struct tagCPointerRoutedAwayTarget ***)v8 )
    {
      CInputDest::operator=((__int64)v22, (__int64)(v9 + 2), v6, v7);
      CTouchProcessor::FreeRoutedAwayTarget(a1, v9, v10, v11);
    }
  }
  v12 = v22[1];
  *(_OWORD *)a2 = v22[0];
  *(_BYTE *)(a2 + 112) = 0;
  v13 = v22[2];
  *(_OWORD *)(a2 + 16) = v12;
  v14 = v22[3];
  *(_OWORD *)(a2 + 32) = v13;
  v15 = v22[4];
  *(_OWORD *)(a2 + 48) = v14;
  v16 = v22[5];
  *(_OWORD *)(a2 + 64) = v15;
  v17 = v22[6];
  *(_OWORD *)(a2 + 80) = v16;
  *(_OWORD *)(a2 + 96) = v17;
  memset(v22, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v22, v18, v19, v20);
  return a2;
}
