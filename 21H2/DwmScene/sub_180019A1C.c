/*
 * XREFs of sub_180019A1C @ 0x180019A1C
 * Callers:
 *     sub_18000F3E0 @ 0x18000F3E0 (sub_18000F3E0.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180019A1C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx

  *(_QWORD *)a1 = &off_1801400C8;
  *(_QWORD *)(a1 + 16) = off_180140140;
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 112);
  result = qword_18021F908;
  if ( a1 == qword_18021F908 )
    result = 0LL;
  qword_18021F908 = result;
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    v6 = (*(_QWORD *)(a1 + 128) - v5) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = v6 + 39;
      v8 = *(_QWORD *)(v5 - 8);
      v9 = v5 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        return sub_180019C4C(v17);
      }
      v5 = v8;
    }
    result = j_j__o_free(v5);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 104);
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *(volatile signed __int32 **)(a1 + 88);
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = *(volatile signed __int32 **)(a1 + 72);
  if ( v12 )
  {
    result = (unsigned int)_InterlockedDecrement(v12 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 56);
  if ( v13 )
    result = (**v13)(v13, 1LL);
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *(_QWORD *)(a1 + 32);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
