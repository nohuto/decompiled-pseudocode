/*
 * XREFs of sub_180062F10 @ 0x180062F10
 * Callers:
 *     sub_180062CD0 @ 0x180062CD0 (sub_180062CD0.c)
 * Callees:
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_1800633D0 @ 0x1800633D0 (sub_1800633D0.c)
 *     sub_180078194 @ 0x180078194 (sub_180078194.c)
 */

__int64 __fastcall sub_180062F10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        wchar_t *a5,
        PSID Sid,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        _DWORD *a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v25; // [rsp+60h] [rbp-1D8h] BYREF
  int v26[96]; // [rsp+70h] [rbp-1C8h] BYREF

  sub_180011EE0((__int64)v26);
  if ( !Sid || (unsigned __int8)sub_1800633D0(v18, Sid, a7) )
  {
    sub_180078194(a3, v26);
    v20 = sub_180027784(1);
    if ( a4 )
    {
      v21 = sub_180046098(0x20uLL);
      if ( v21 )
      {
        v22 = *(_QWORD *)(a1 + 16);
        v21[1] = -1LL;
        *v21 = off_180093E70;
        v21[2] = v22;
        *((_DWORD *)v21 + 6) = 1;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v21 )
      {
        v21[1] = v20;
        v23 = *(_QWORD *)(a1 + 16);
        v25 = 0;
        v19 = sub_180013210(
                v23,
                (__int64)v26,
                (__int64)v21,
                0LL,
                a5,
                Sid,
                a8,
                a9,
                a10,
                v20,
                a2,
                (unsigned __int64)&v25 & -(__int64)(a12 != 0LL));
        if ( v19 >= 0 )
        {
          if ( a12 )
            *a12 = v25;
          *a14 = v20;
          v19 = 0;
        }
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-805306127;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v19;
}
