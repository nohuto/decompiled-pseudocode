/*
 * XREFs of sub_180033820 @ 0x180033820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E6B0 @ 0x18000E6B0 (sub_18000E6B0.c)
 *     sub_18000F818 @ 0x18000F818 (sub_18000F818.c)
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     sub_180033994 @ 0x180033994 (sub_180033994.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033820(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        PSID Sid,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v13; // rdx
  int v14; // ebx
  _DWORD *v15; // rdi
  __int64 v16; // rsi
  int v17; // ebx
  bool v18; // cf
  unsigned int v19; // ebx
  __int64 v21; // [rsp+60h] [rbp-1D8h] BYREF
  int v22[96]; // [rsp+70h] [rbp-1C8h] BYREF

  sub_180011EE0((__int64)v22);
  if ( sub_18000F818(v13 + 40, 0LL) )
  {
    v14 = sub_18000E6B0(Sid, a6);
    if ( v14 < 0 )
    {
      return (unsigned int)(v14 + 4);
    }
    else
    {
      sub_180033994(a2, v22);
      v15 = operator new(0x10uLL, (const struct std::nothrow_t *)&unk_1800967D8);
      if ( v15 )
      {
        *(_QWORD *)v15 = &off_180093E38;
        v15[2] = 1;
      }
      else
      {
        v15 = 0LL;
      }
      if ( v15 )
      {
        v16 = sub_180027784(1);
        v17 = sub_180013210(*a1, (__int64)v22, (__int64)v15, 0LL, a4, Sid, a7, a8, a9, v16, (__int64)a1, (__int64)&v21);
        if ( v17 < 0 )
        {
          v19 = v17 & 0xEFFFFFFF;
        }
        else
        {
          v18 = (_BYTE)v21 != 0;
          *a10 = v16;
          v19 = v18 ? 0x103 : 0;
        }
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v19;
}
