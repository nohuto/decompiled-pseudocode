/*
 * XREFs of ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x180184698
 * Callers:
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1800ECB6C (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F47CF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

const void *__fastcall CDirectFlipInfo::UpdateHDRMetaData(CDirectFlipInfo *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // xmm1_8
  const void *result; // rax
  int v6; // ecx
  __int128 Buf2; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]

  v2 = *((_QWORD *)this + 2);
  Buf2 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v3 = (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 288LL))(v2, &Buf2) != 0;
  if ( *((_DWORD *)this + 16) == v3 && (v3 != 1 || !memcmp_0((char *)this + 68, &Buf2, 0x1CuLL)) )
    return 0LL;
  v4 = v8;
  result = (char *)this + 68;
  v6 = v9;
  *((_DWORD *)this + 16) = v3;
  *(_OWORD *)((char *)this + 68) = Buf2;
  *(_QWORD *)((char *)this + 84) = v4;
  *((_DWORD *)this + 23) = v6;
  if ( v3 != 1 )
    return 0LL;
  return result;
}
