/*
 * XREFs of sub_1800667A8 @ 0x1800667A8
 * Callers:
 *     sub_1800644EC @ 0x1800644EC (sub_1800644EC.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_180057B1C @ 0x180057B1C (sub_180057B1C.c)
 *     sub_180066884 @ 0x180066884 (sub_180066884.c)
 *     sub_1800669B4 @ 0x1800669B4 (sub_1800669B4.c)
 *     sub_180067AA4 @ 0x180067AA4 (sub_180067AA4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800667A8(_QWORD *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // rdi
  LPVOID v5; // rax
  int v6; // ebp
  int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h]
  LPVOID v11; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v5 = sub_180055F40(0xA0uLL);
    v11 = v5;
    if ( v5 )
      v3 = sub_180057B1C((__int64)v5);
    else
      v3 = 0LL;
    v10 = v3;
    if ( v3 )
    {
      v6 = 0;
      v7 = sub_180067AA4(v3, v3 + 48);
      if ( v7 < 0 || (v7 = sub_1800669B4(v3, v3 + 80, v3 + 56), v7 < 0) )
        v6 = v7;
      else
        sub_180066884(v3);
      if ( v6 < 0 )
      {
        v2 = v6;
      }
      else
      {
        if ( v3 != -8 )
        {
          sub_1800579A4(&v9, v3 + 8);
          v4 = v9;
        }
        *a1 = v4;
      }
    }
    else
    {
      v2 = -2147024882;
    }
  }
  else
  {
    v2 = -2147467261;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
