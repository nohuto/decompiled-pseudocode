/*
 * XREFs of __except1 @ 0x4B2FD7DF
 * Callers:
 *     _fabs @ 0x4B2F83F0 (_fabs.c)
 *     __ceil_default @ 0x4B2FD662 (__ceil_default.c)
 *     __floor_default @ 0x4B2FE05F (__floor_default.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __errcode @ 0x4B2FD7AB (__errcode.c)
 *     __handle_exc @ 0x4B2FD8A9 (__handle_exc.c)
 *     __raise_exc_ex @ 0x4B2FDB09 (__raise_exc_ex.c)
 *     __set_errno_from_matherr @ 0x4B2FDD8F (__set_errno_from_matherr.c)
 *     __umatherr @ 0x4B2FDDBE (__umatherr.c)
 *     __ctrlfp @ 0x4B2FDFCC (__ctrlfp.c)
 */

double __usercall _except1@<st0>(int a1@<ebp>, int a2, int a3, double a4, double a5, int a6)
{
  int v6; // esi
  int v7; // eax
  double result; // st7
  ULONG_PTR v9; // [esp+0h] [ebp-B8h]
  int v10; // [esp+2Ch] [ebp-8Ch] BYREF
  int v11; // [esp+6Ch] [ebp-4Ch]
  int v12; // [esp+ACh] [ebp-Ch]
  void *v13; // [esp+B0h] [ebp-8h]
  void *retaddr; // [esp+B8h] [ebp+0h]

  v12 = a1;
  v13 = retaddr;
  v6 = a6;
  if ( !_handle_exc(a2, &a5, a6) )
  {
    v11 &= ~1u;
    HIDWORD(v9) = &a6;
    LODWORD(v9) = &v10;
    _raise_exc_ex(v9, a2, a3, (int)&a4, (int)&a5, 0);
  }
  v7 = _errcode(a2);
  if ( _matherr_flag || !v7 )
  {
    _set_errno_from_matherr(v7);
    _ctrlfp(v6, 0xFFFF);
    return a5;
  }
  else
  {
    result = a4;
    _umatherr(
      v7,
      a3,
      SLODWORD(a4),
      SHIDWORD(a4),
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      a5,
      v6);
  }
  return result;
}
