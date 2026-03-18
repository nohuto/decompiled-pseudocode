/*
 * XREFs of ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x1800500BC
 * Callers:
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18004FA7C (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoAfter(COverlayContext *this)
{
  char *v2; // rbp
  unsigned int i; // esi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r8
  char *v7; // rdx
  __int128 v8; // xmm1
  __int64 v9; // rcx

  v2 = (char *)this + 1104 * *((int *)this + 4490);
  for ( i = 0; ; ++i )
  {
    v4 = *((_QWORD *)this + 913);
    if ( i >= -1227133513 * (unsigned int)((*((_QWORD *)this + 914) - v4) >> 5) || i >= 2 )
      break;
    v5 = 480LL * i;
    v6 = 224LL * i;
    v7 = &v2[v5 + 11568];
    *(_OWORD *)v7 = *(_OWORD *)(v6 + v4);
    *((_OWORD *)v7 + 1) = *(_OWORD *)(v6 + v4 + 16);
    *((_OWORD *)v7 + 2) = *(_OWORD *)(v6 + v4 + 32);
    *((_OWORD *)v7 + 3) = *(_OWORD *)(v6 + v4 + 48);
    *((_OWORD *)v7 + 4) = *(_OWORD *)(v6 + v4 + 64);
    *((_OWORD *)v7 + 5) = *(_OWORD *)(v6 + v4 + 80);
    *((_OWORD *)v7 + 6) = *(_OWORD *)(v6 + v4 + 96);
    *((_OWORD *)v7 + 7) = *(_OWORD *)(v6 + v4 + 112);
    *((_OWORD *)v7 + 8) = *(_OWORD *)(v6 + v4 + 128);
    *((_OWORD *)v7 + 9) = *(_OWORD *)(v6 + v4 + 144);
    *((_OWORD *)v7 + 10) = *(_OWORD *)(v6 + v4 + 160);
    *((_OWORD *)v7 + 11) = *(_OWORD *)(v6 + v4 + 176);
    *((_OWORD *)v7 + 12) = *(_OWORD *)(v6 + v4 + 192);
    v8 = *(_OWORD *)(v6 + v4 + 208);
    *(_QWORD *)&v2[v5 + 11800] = v7;
    *((_OWORD *)v7 + 13) = v8;
    v9 = *(_QWORD *)(*((_QWORD *)this + 913) + v6 + 16);
    *(_DWORD *)&v2[v5 + 11812] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 328LL))(v9);
  }
}
