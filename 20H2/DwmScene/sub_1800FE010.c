/*
 * XREFs of sub_1800FE010 @ 0x1800FE010
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001CD3C @ 0x18001CD3C (sub_18001CD3C.c)
 *     sub_1800B74E0 @ 0x1800B74E0 (sub_1800B74E0.c)
 *     sub_1800EB130 @ 0x1800EB130 (sub_1800EB130.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FE010(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  void **v6; // r14
  const void *v7; // r13
  signed __int64 v8; // r12
  char *v9; // r15
  __int64 result; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-10h]

  v15 = a2;
  v14 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v14 = *a2;
  *((_QWORD *)&v14 + 1) = v4;
  sub_1800EB130(a1, &v14);
  v13 = 0LL;
  sub_1800B74E0((__int64 *)&v13, a2);
  v5 = v13;
  *(_BYTE *)(v13 + 88) = *(_BYTE *)(a1 + 88);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 96), (_QWORD *)(a1 + 96));
  v6 = (void **)(v5 + 112);
  if ( v5 + 112 != a1 + 112 )
  {
    v7 = *(const void **)(a1 + 112);
    v8 = *(_QWORD *)(a1 + 120) - (_QWORD)v7;
    v9 = (char *)*v6;
    if ( v8 >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(v5 + 128) - *(_QWORD *)(v5 + 112)) >> 2) )
    {
      sub_18001CD3C((__int64 *)(v5 + 112), v8 >> 2);
      v9 = (char *)*v6;
    }
    memmove(v9, v7, v8);
    *(_QWORD *)(v5 + 120) = &v9[v8];
  }
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(v5 + 152) = *(_QWORD *)(a1 + 152);
  result = *(unsigned int *)(a1 + 160);
  *(_DWORD *)(v5 + 160) = result;
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    result = (unsigned int)_InterlockedDecrement(v12 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
