/*
 * XREFs of ?CopyPixels@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802191F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::CopyPixels(__int64 a1, _DWORD *a2)
{
  int v2; // r10d
  int v3; // eax
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  v6[0] = *a2;
  v2 = a2[1];
  v6[2] = a2[2] - v6[0];
  v3 = a2[3] - v2;
  v6[1] = v2;
  v6[3] = v3;
  v4 = (a1 - 216) & -(__int64)(a1 != 232);
  return (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 24LL))(v4, v6);
}
