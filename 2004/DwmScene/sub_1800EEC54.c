/*
 * XREFs of sub_1800EEC54 @ 0x1800EEC54
 * Callers:
 *     sub_1800EDE80 @ 0x1800EDE80 (sub_1800EDE80.c)
 * Callees:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     sub_1800EDFAC @ 0x1800EDFAC (sub_1800EDFAC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800EEC54(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rdi
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx

  *a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = a1[11];
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_180020058((__int64)(a1 + 11), (__int64)(a1 + 11), (__int64 *)v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = a1[11];
  }
  j_j__o_free(v4);
  result = sub_1800EDFAC(a1 + 7);
  v8 = a1[4];
  if ( v8 )
  {
    v9 = (a1[6] - v8) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v8 - 8);
      v11 = v9 + 39;
      v12 = v8 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x1800EEDE5LL);
      }
      v8 = v10;
    }
    result = j_j__o_free(v8);
    a1[4] = 0LL;
    a1[5] = 0LL;
    a1[6] = 0LL;
  }
  v13 = (volatile signed __int32 *)a1[3];
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
