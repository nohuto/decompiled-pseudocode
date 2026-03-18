/*
 * XREFs of ExpAtsDereferenceDevice @ 0x14063EEB0
 * Callers:
 *     ExUninitializeDeviceAts @ 0x14063EC3C (ExUninitializeDeviceAts.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpAtsDereferenceDevice(__int64 *a1)
{
  int v1; // edi
  void (__fastcall *v4)(__int64, int *); // rax
  __int64 v5; // rcx
  __int64 *v6; // rcx
  __int64 **v7; // rdx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+24h] [rbp-24h]

  v10 = 0LL;
  v1 = 0;
  if ( (*((_DWORD *)a1 + 8))-- == 1 )
  {
    v4 = (void (__fastcall *)(__int64, int *))a1[11];
    v5 = a1[6];
    v9 = 1;
    v4(v5, &v9);
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 168))(a1[23], 0LL);
    if ( v1 >= 0 )
    {
      v6 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 || (v7 = (__int64 **)a1[1], *v7 != a1) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = (__int64)v7;
      ((void (__fastcall *)(__int64))a1[8])(a1[6]);
      ((void (__fastcall *)(__int64))a1[19])(a1[17]);
    }
  }
  return (unsigned int)v1;
}
