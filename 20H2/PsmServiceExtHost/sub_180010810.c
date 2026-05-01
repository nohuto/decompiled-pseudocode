/*
 * XREFs of sub_180010810 @ 0x180010810
 * Callers:
 *     sub_180001EF8 @ 0x180001EF8 (sub_180001EF8.c)
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 *     sub_180010560 @ 0x180010560 (sub_180010560.c)
 *     sub_180073CD0 @ 0x180073CD0 (sub_180073CD0.c)
 * Callees:
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180067614 @ 0x180067614 (sub_180067614.c)
 */

void __fastcall sub_180010810(__int64 a1)
{
  int v1; // eax
  int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD *i; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v1 = *(_DWORD *)(a1 + 1280);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = 1LL;
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)(a1 + v5 + 80);
        if ( v6 )
        {
          if ( (v4 & *(_QWORD *)(a1 + 1272)) == 0 )
          {
            if ( v3 == 2 )
              sub_180067614(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + v5 + 80));
            else
              *(_QWORD *)(*(_QWORD *)(a1 + 64) + v5 + 80) += v6;
          }
          *(_QWORD *)(a1 + v5 + 80) = 0LL;
        }
        ++v3;
        v4 = __ROL8__(v4, 1);
        v5 += 24LL;
      }
      while ( v3 < 50 );
    }
    *(_DWORD *)(a1 + 1280) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = a1;
    v8 = *(_QWORD *)(a1 + 64) + 40LL;
    for ( i = *(_QWORD **)v8; i != (_QWORD *)v8; i = v10 )
    {
      v10 = (_QWORD *)*i;
      if ( i[2] == v7 )
      {
        v13 = (_QWORD *)i[1];
        *v13 = v10;
        v10[1] = v13;
        v14 = i[2];
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        j_j_free(i);
        --*(_QWORD *)(v8 + 16);
        v7 = a1;
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v11 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      v12 = *(_DWORD *)(v11 + 160);
      if ( (v12 & 3) == 0 )
      {
        *(_DWORD *)(v11 + 160) = v12 | 1;
        TpPostWork(*(_QWORD *)(v11 + 144));
      }
    }
    else if ( (*(_BYTE *)(v11 + 160) & 2) == 0 )
    {
      TpPostWork(*(_QWORD *)(v11 + 152));
    }
  }
}
