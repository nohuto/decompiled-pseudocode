/*
 * XREFs of sub_1800565B4 @ 0x1800565B4
 * Callers:
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 * Callees:
 *     sub_180056794 @ 0x180056794 (sub_180056794.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800565B4(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // edi
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  v10 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      sub_180056794(a2, a2, a3, &v10);
      v6 = v10;
      if ( v10 )
      {
        v9 = *(_QWORD *)(a1 + 72);
        LOBYTE(v7) = v9 == 0;
        if ( v9 )
        {
          *(_QWORD *)(a1 + 72) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( *(_QWORD *)(a1 + 72) != v6 )
          sub_1800579A4(a1 + 72);
      }
      *a3 = v7;
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v5;
}
