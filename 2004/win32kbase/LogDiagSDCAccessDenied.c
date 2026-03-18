/*
 * XREFs of LogDiagSDCAccessDenied @ 0x1C014BFC8
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall LogDiagSDCAccessDenied(unsigned __int16 *a1, unsigned __int16 *a2)
{
  size_t v4; // rbx
  const void *v5; // rdx
  size_t v6; // r8
  const void *v7; // rdx
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = 0x700000002BLL;
  v4 = 32LL;
  memset(&v9[1], 0, 36);
  if ( a1 )
  {
    v5 = (const void *)*((_QWORD *)a1 + 1);
    if ( v5 )
    {
      v6 = 32LL;
      if ( 2 * (unsigned __int64)*a1 < 0x20 )
        v6 = 2LL * *a1;
      memmove(&v9[6], v5, v6);
    }
  }
  if ( a2 )
  {
    v7 = (const void *)*((_QWORD *)a2 + 1);
    if ( v7 )
    {
      if ( 2 * (unsigned __int64)*a2 < 0x20 )
        v4 = 2LL * *a2;
      memmove(&v9[10], v7, v4);
    }
  }
  return ((__int64 (__fastcall *)(_QWORD *))qword_1C024C950)(v9);
}
