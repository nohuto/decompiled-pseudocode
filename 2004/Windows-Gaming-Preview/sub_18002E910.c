/*
 * XREFs of sub_18002E910 @ 0x18002E910
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     sub_18001F108 @ 0x18001F108 (sub_18001F108.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002E910(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rdi

  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 152) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(a1 + 136);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(_QWORD *)(a1 + 104);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(__int64 **)(v11 + 8);
  if ( !*((_BYTE *)v12 + 25) )
  {
    do
    {
      sub_18001F108(a1 + 80, a1 + 80, (__int64 *)v12[2]);
      v14 = v12;
      v12 = (__int64 *)*v12;
      v15 = v14[6];
      if ( v15 )
        j_j__o_free(v15, v13);
      j_j__o_free(v14, 56LL);
    }
    while ( !*((_BYTE *)v12 + 25) );
    v11 = *(_QWORD *)(a1 + 80);
  }
  j_j__o_free(v11, 56LL);
  v16 = *(volatile signed __int32 **)(a1 + 72);
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  sub_18000E744(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 208LL);
  return a1;
}
