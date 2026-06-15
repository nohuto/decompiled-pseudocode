/*
 * XREFs of sub_180067AA4 @ 0x180067AA4
 * Callers:
 *     sub_1800667A8 @ 0x1800667A8 (sub_1800667A8.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180055FFC @ 0x180055FFC (sub_180055FFC.c)
 *     sub_1800564F8 @ 0x1800564F8 (sub_1800564F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180067AA4(__int64 a1, _QWORD *a2)
{
  LPVOID *v4; // rbx
  LPVOID v5; // rax
  int v6; // edi
  int v7; // eax

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v5 = sub_180055F40(0xE8uLL);
    if ( v5 )
      v4 = (LPVOID *)sub_1800564F8((__int64)v5);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v6 = sub_180055FFC(v4, a1);
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(LPVOID *, __int64 *, _QWORD *))*v4)(v4, &qword_18015D210, a2);
        v6 = 0;
        if ( v7 < 0 )
          v6 = v7;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v4 )
    (*((void (__fastcall **)(LPVOID *))*v4 + 2))(v4);
  return (unsigned int)v6;
}
