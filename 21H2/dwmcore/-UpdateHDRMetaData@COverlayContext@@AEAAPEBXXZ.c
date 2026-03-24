/*
 * XREFs of ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x18017D064
 * Callers:
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EC2B8 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F47CF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall COverlayContext::UpdateHDRMetaData(COverlayContext *this)
{
  char v1; // di
  unsigned int i; // esi
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // xmm1_8
  __int128 Buf1; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v10 = 0LL;
  Buf1 = 0LL;
  v11 = 0;
  for ( i = 0; ; ++i )
  {
    v4 = *((_QWORD *)this + 914);
    if ( i >= (unsigned __int64)((*((_QWORD *)this + 915) - v4) / 224) )
      break;
    v5 = *(_QWORD *)(224LL * i + v4 + 16);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 288LL))(v5, &Buf1) )
    {
      if ( v1 && memcmp_0(&Buf1, (char *)this + 20, 0x1CuLL) )
      {
        *((_DWORD *)this + 4) = 0;
        v1 = 0;
        break;
      }
      v1 = 1;
      v6 = v11;
      v7 = v10;
      *(_OWORD *)((char *)this + 20) = Buf1;
      *((_DWORD *)this + 4) = 1;
      *(_QWORD *)((char *)this + 36) = v7;
      *((_DWORD *)this + 11) = v6;
    }
  }
  if ( v1 )
    return (char *)this + 20;
  else
    return 0LL;
}
