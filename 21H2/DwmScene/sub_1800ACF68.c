/*
 * XREFs of sub_1800ACF68 @ 0x1800ACF68
 * Callers:
 *     sub_1800AD460 @ 0x1800AD460 (sub_1800AD460.c)
 *     sub_1800FCCBC @ 0x1800FCCBC (sub_1800FCCBC.c)
 *     sub_1800FF36C @ 0x1800FF36C (sub_1800FF36C.c)
 *     sub_18010A7E0 @ 0x18010A7E0 (sub_18010A7E0.c)
 *     sub_18012F629 @ 0x18012F629 (sub_18012F629.c)
 *     sub_18012F673 @ 0x18012F673 (sub_18012F673.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA_1 @ 0x18012FBAB (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurren_ea_18012FBAB.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_1800713FC @ 0x1800713FC (sub_1800713FC.c)
 *     sub_1800ABE14 @ 0x1800ABE14 (sub_1800ABE14.c)
 *     sub_1800B399C @ 0x1800B399C (sub_1800B399C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_1800ACF68(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rdi

  v3 = a1 + 1704;
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  v4 = *(_QWORD *)(a1 + 1760);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  v5 = *(volatile signed __int32 **)(a1 + 1688);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 1672);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *(volatile signed __int32 **)(a1 + 1656);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = *(volatile signed __int32 **)(a1 + 1640);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  sub_1800ABE14((__int64 *)(a1 + 1616), a1 + 1616);
  sub_1800258BC((__int64 *)(a1 + 448), a1 + 448);
  sub_1800713FC((__int64 **)(a1 + 416));
  if ( *(_BYTE *)(a1 + 388) )
    *(_BYTE *)(a1 + 388) = 0;
  v9 = *(_QWORD *)(a1 + 272);
  if ( v9 >= 0x10 )
  {
    v10 = *(_QWORD *)(a1 + 248);
    v11 = v9 + 1;
    if ( v11 >= 0x1000 )
    {
      v12 = *(_QWORD *)(v10 - 8);
      v13 = v11 + 39;
      v14 = v10 - v12;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
        goto LABEL_45;
      v10 = v12;
    }
    j_j__o_free(v10);
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  v15 = *(_QWORD *)(a1 + 240);
  if ( v15 >= 0x10 )
  {
    v16 = *(_QWORD *)(a1 + 216);
    v17 = v15 + 1;
    if ( v17 >= 0x1000 )
    {
      v18 = *(_QWORD *)(v16 - 8);
      v13 = v17 + 39;
      v14 = v16 - v18;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
        goto LABEL_45;
      v16 = v18;
    }
    j_j__o_free(v16);
  }
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  v19 = *(_QWORD *)(a1 + 208);
  if ( v19 >= 0x10 )
  {
    v20 = *(_QWORD *)(a1 + 184);
    v21 = v19 + 1;
    if ( v21 < 0x1000 )
    {
LABEL_35:
      j_j__o_free(v20);
      goto LABEL_36;
    }
    v22 = *(_QWORD *)(v20 - 8);
    v13 = v21 + 39;
    v14 = v20 - v22;
    if ( (unsigned __int64)(v14 - 8) <= 0x1F )
    {
      v20 = v22;
      goto LABEL_35;
    }
LABEL_45:
    o__invalid_parameter_noinfo_noreturn(v14, v13);
    JUMPOUT(0x1800AD2A5LL);
  }
LABEL_36:
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  v23 = *(volatile signed __int32 **)(a1 + 160);
  if ( v23 )
  {
    if ( !_InterlockedDecrement(v23 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( !_InterlockedDecrement(v23 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v24 = *(volatile signed __int32 **)(a1 + 144);
  if ( v24 )
  {
    if ( !_InterlockedDecrement(v24 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( !_InterlockedDecrement(v24 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  sub_1800B399C(a1 + 104);
  return sub_18008FE00((_QWORD *)a1);
}
