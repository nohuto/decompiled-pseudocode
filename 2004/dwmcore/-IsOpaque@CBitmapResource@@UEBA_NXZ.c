/*
 * XREFs of ?IsOpaque@CBitmapResource@@UEBA_NXZ @ 0x1800C9D28
 * Callers:
 *     ?IsOpaque@CBitmapResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EF6C0 (-IsOpaque@CBitmapResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CBitmapResource::IsOpaque(CBitmapResource *this)
{
  char *v1; // rcx
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + *(int *)(*((_QWORD *)this - 5) + 8LL) - 40;
  return *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v1)(v1, v3) + 4) == 3;
}
