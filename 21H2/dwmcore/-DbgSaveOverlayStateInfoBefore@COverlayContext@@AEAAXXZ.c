/*
 * XREFs of ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x180050318
 * Callers:
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18004FA7C (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoBefore(COverlayContext *this)
{
  unsigned int v2; // r8d
  _QWORD *v3; // rsi
  unsigned int i; // ebp
  __int64 v5; // r9
  __int64 v6; // xmm1_8
  __int64 v7; // rbx
  __int64 v8; // r8
  _OWORD *v9; // rdx
  __int128 v10; // xmm1
  __int64 v11; // rcx

  v2 = (*((_DWORD *)this + 4490) + 1) % 6u;
  *((_DWORD *)this + 4490) = v2;
  v3 = (_QWORD *)((char *)this + 1104 * (int)v2 + 11336);
  memset_0(v3, 0, 0x450uLL);
  *v3 = GetCurrentFrameId();
  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 913);
    if ( i >= -1227133513 * (unsigned int)((*((_QWORD *)this + 914) - v5) >> 5) || i >= 2 )
      break;
    v7 = 60LL * i;
    v8 = 224LL * i;
    v9 = &v3[v7 + 1];
    *v9 = *(_OWORD *)(v8 + v5);
    v9[1] = *(_OWORD *)(v8 + v5 + 16);
    v9[2] = *(_OWORD *)(v8 + v5 + 32);
    v9[3] = *(_OWORD *)(v8 + v5 + 48);
    v9[4] = *(_OWORD *)(v8 + v5 + 64);
    v9[5] = *(_OWORD *)(v8 + v5 + 80);
    v9[6] = *(_OWORD *)(v8 + v5 + 96);
    v9[7] = *(_OWORD *)(v8 + v5 + 112);
    v9[8] = *(_OWORD *)(v8 + v5 + 128);
    v9[9] = *(_OWORD *)(v8 + v5 + 144);
    v9[10] = *(_OWORD *)(v8 + v5 + 160);
    v9[11] = *(_OWORD *)(v8 + v5 + 176);
    v9[12] = *(_OWORD *)(v8 + v5 + 192);
    v10 = *(_OWORD *)(v8 + v5 + 208);
    v3[v7 + 57] = v9;
    v9[13] = v10;
    v11 = *(_QWORD *)(v8 + *((_QWORD *)this + 913) + 16);
    LODWORD(v3[v7 + 59]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 328LL))(v11);
    ++*((_DWORD *)v3 + 242);
  }
  if ( *((_BYTE *)this + 11024) )
  {
    *((_OWORD *)v3 + 61) = *((_OWORD *)this + 682);
    *((_OWORD *)v3 + 62) = *((_OWORD *)this + 683);
    *((_OWORD *)v3 + 63) = *((_OWORD *)this + 684);
    *((_OWORD *)v3 + 64) = *((_OWORD *)this + 685);
    *((_OWORD *)v3 + 65) = *((_OWORD *)this + 686);
    *((_OWORD *)v3 + 66) = *((_OWORD *)this + 687);
    *((_OWORD *)v3 + 67) = *((_OWORD *)this + 688);
    v6 = *((_QWORD *)this + 1378);
    ++*((_DWORD *)v3 + 274);
    v3[136] = v6;
  }
}
