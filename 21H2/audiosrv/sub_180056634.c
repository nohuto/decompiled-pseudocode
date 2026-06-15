/*
 * XREFs of sub_180056634 @ 0x180056634
 * Callers:
 *     sub_180055FFC @ 0x180055FFC (sub_180055FFC.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056734 @ 0x180056734 (sub_180056734.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180056634(_QWORD *a1)
{
  __int64 v2; // rbx
  LPVOID v3; // rax
  int v4; // eax
  unsigned int v5; // edi

  v2 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v3 = sub_180055F40(0x70uLL);
    if ( v3 )
      v2 = sub_180056734(v3);
    else
      v2 = 0LL;
    if ( v2 )
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, __int64 *, _QWORD *))v2)(v2, &qword_18015BB18, a1);
      v5 = 0;
      if ( v4 < 0 )
        v5 = v4;
    }
    else
    {
      v5 = -2147024882;
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v5;
}
