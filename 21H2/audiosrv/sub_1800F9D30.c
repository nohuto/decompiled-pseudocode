/*
 * XREFs of sub_1800F9D30 @ 0x1800F9D30
 * Callers:
 *     sub_1800FEC00 @ 0x1800FEC00 (sub_1800FEC00.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180074180 @ 0x180074180 (sub_180074180.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800F9D30(__int64 a1)
{
  struct _TP_WAIT *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  *(_QWORD *)a1 = &off_180155740;
  v2 = *(struct _TP_WAIT **)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 200);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 272) = 0LL;
      v2 = *(struct _TP_WAIT **)(a1 + 16);
    }
    CloseThreadpoolWait(v2);
  }
  v4 = *(_QWORD *)(a1 + 200);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 >= 8 )
    sub_1800472E0(*(_QWORD *)(a1 + 160), 2 * v5 + 2);
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 7LL;
  *(_WORD *)(a1 + 160) = 0;
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 >= 8 )
    sub_1800472E0(*(_QWORD *)(a1 + 128), 2 * v6 + 2);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 7LL;
  *(_WORD *)(a1 + 128) = 0;
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 >= 8 )
    sub_1800472E0(*(_QWORD *)(a1 + 88), 2 * v7 + 2);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 7LL;
  *(_WORD *)(a1 + 88) = 0;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 >= 8 )
    sub_1800472E0(*(_QWORD *)(a1 + 56), 2 * v8 + 2);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 7LL;
  *(_WORD *)(a1 + 56) = 0;
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( *(_QWORD *)(a1 + 32) )
    sub_180074180((void **)(a1 + 32));
}
