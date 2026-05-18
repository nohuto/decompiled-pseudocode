/*
 * XREFs of sub_1800FF36C @ 0x1800FF36C
 * Callers:
 *     sub_1800FF5F0 @ 0x1800FF5F0 (sub_1800FF5F0.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_1800FF36C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8

  *a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  v2 = (volatile signed __int32 *)a1[240];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[238];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[236];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = a1[234];
  if ( v5 >= 0x10 )
  {
    v6 = a1[231];
    v7 = v5 + 1;
    if ( v7 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v7 + 39;
      v10 = v6 - v8;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
        goto LABEL_36;
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a1[233] = 0LL;
  a1[234] = 15LL;
  *((_BYTE *)a1 + 1848) = 0;
  v11 = (volatile signed __int32 *)a1[230];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a1[228];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = (volatile signed __int32 *)a1[226];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = a1[224];
  if ( v14 >= 0x10 )
  {
    v15 = a1[221];
    v16 = v14 + 1;
    if ( v16 < 0x1000 )
    {
LABEL_34:
      j_j__o_free(v15);
      goto LABEL_35;
    }
    v17 = *(_QWORD *)(v15 - 8);
    v9 = v16 + 39;
    v10 = v15 - v17;
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
    {
      v15 = v17;
      goto LABEL_34;
    }
LABEL_36:
    o__invalid_parameter_noinfo_noreturn(v10, v9);
    JUMPOUT(0x1800FF5E0LL);
  }
LABEL_35:
  a1[223] = 0LL;
  a1[224] = 15LL;
  *((_BYTE *)a1 + 1768) = 0;
  return sub_1800ACF68((__int64)a1, v14);
}
