/*
 * XREFs of sub_180091630 @ 0x180091630
 * Callers:
 *     sub_180091A90 @ 0x180091A90 (sub_180091A90.c)
 *     sub_1800AB180 @ 0x1800AB180 (sub_1800AB180.c)
 * Callees:
 *     sub_180025928 @ 0x180025928 (sub_180025928.c)
 *     sub_1800925A4 @ 0x1800925A4 (sub_1800925A4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180091630(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rcx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx

  *a1 = &Spectre::Engine::Material::`vftable';
  sub_1800925A4();
  v2 = (volatile signed __int32 *)a1[28];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[25];
  v4 = *(__int64 **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      sub_180025928((__int64)(a1 + 25), (__int64)(a1 + 25), (__int64 *)v4[2]);
      v5 = v4;
      v4 = (__int64 *)*v4;
      j_j__o_free(v5);
    }
    while ( !*((_BYTE *)v4 + 25) );
    v3 = a1[25];
  }
  j_j__o_free(v3);
  v6 = (volatile signed __int32 *)a1[22];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = (volatile signed __int32 *)a1[18];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a1[16];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)a1[13];
  if ( v9 && _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  return sub_180027A54((__int64)a1);
}
