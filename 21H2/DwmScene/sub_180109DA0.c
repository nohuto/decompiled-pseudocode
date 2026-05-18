/*
 * XREFs of sub_180109DA0 @ 0x180109DA0
 * Callers:
 *     sub_1800F9BB8 @ 0x1800F9BB8 (sub_1800F9BB8.c)
 *     sub_1800FAB10 @ 0x1800FAB10 (sub_1800FAB10.c)
 *     sub_180109FF0 @ 0x180109FF0 (sub_180109FF0.c)
 *     sub_18011141C @ 0x18011141C (sub_18011141C.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_180109DA0(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  void **result; // rax

  *a1 = &Spectre::Engine::ImageProcessingEffect::`vftable';
  sub_180012A18(a1 + 19);
  v2 = a1[16];
  if ( v2 >= 0x10 )
  {
    v3 = a1[13];
    v4 = v2 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x180109FB1LL);
      }
      v3 = v5;
    }
    j_j__o_free(v3);
  }
  a1[15] = 0LL;
  a1[16] = 15LL;
  *((_BYTE *)a1 + 104) = 0;
  v8 = (volatile signed __int32 *)a1[12];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)a1[10];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (volatile signed __int32 *)a1[8];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a1[6];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a1[4];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = (volatile signed __int32 *)a1[2];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
