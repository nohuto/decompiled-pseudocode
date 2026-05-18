/*
 * XREFs of sub_1800A8FB4 @ 0x1800A8FB4
 * Callers:
 *     sub_1800A9350 @ 0x1800A9350 (sub_1800A9350.c)
 *     sub_1800EA150 @ 0x1800EA150 (sub_1800EA150.c)
 *     sub_1800EC110 @ 0x1800EC110 (sub_1800EC110.c)
 *     sub_1800EC620 @ 0x1800EC620 (sub_1800EC620.c)
 *     sub_1800F00C0 @ 0x1800F00C0 (sub_1800F00C0.c)
 *     sub_18010D420 @ 0x18010D420 (sub_18010D420.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A8FB4(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  volatile signed __int32 *v14; // rcx

  result = (__int64)&Spectre::Engine::IShaderExtension::`vftable';
  *a1 = &Spectre::Engine::IShaderExtension::`vftable';
  v3 = a1[12];
  if ( v3 >= 0x10 )
  {
    v4 = a1[9];
    v5 = v3 + 1;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
        goto LABEL_19;
      v4 = v6;
    }
    result = j_j__o_free(v4);
  }
  a1[11] = 0LL;
  a1[12] = 15LL;
  *((_BYTE *)a1 + 72) = 0;
  v9 = (volatile signed __int32 *)a1[8];
  if ( v9 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = a1[6];
  if ( v10 >= 0x10 )
  {
    v11 = a1[3];
    v12 = v10 + 1;
    if ( v12 < 0x1000 )
    {
LABEL_14:
      result = j_j__o_free(v11);
      goto LABEL_15;
    }
    v13 = *(_QWORD *)(v11 - 8);
    v7 = v12 + 39;
    v8 = v11 - v13;
    if ( (unsigned __int64)(v8 - 8) <= 0x1F )
    {
      v11 = v13;
      goto LABEL_14;
    }
LABEL_19:
    o__invalid_parameter_noinfo_noreturn(v8, v7);
    JUMPOUT(0x1800A90D5LL);
  }
LABEL_15:
  a1[5] = 0LL;
  a1[6] = 15LL;
  *((_BYTE *)a1 + 24) = 0;
  v14 = (volatile signed __int32 *)a1[2];
  if ( v14 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return result;
}
