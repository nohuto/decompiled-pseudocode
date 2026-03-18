/*
 * XREFs of ?IsOpaque@CCachedVisualImage@@UEBA_NXZ @ 0x1800D2534
 * Callers:
 *     ?IsOpaque@CCachedVisualImage@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801061D0 (-IsOpaque@CCachedVisualImage@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsOpaque@CCachedVisualImage@@$4PPPPPPPM@NA@EBA_NXZ @ 0x180107430 (-IsOpaque@CCachedVisualImage@@$4PPPPPPPM@NA@EBA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::IsOpaque(CCachedVisualImage *this)
{
  char *v1; // rcx
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + *(int *)(*((_QWORD *)this - 218) + 8LL) - 1744;
  return *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v1)(v1, v3) + 4) == 3;
}
