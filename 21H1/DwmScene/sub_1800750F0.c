/*
 * XREFs of sub_1800750F0 @ 0x1800750F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180075328 @ 0x180075328 (sub_180075328.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800750F0(__int64 a1, _QWORD *a2, const void **a3, _QWORD *a4)
{
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rbx
  __int64 *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // r14
  _QWORD *v16; // rbx
  const void *v17; // rdx
  const void *v18; // rcx
  size_t v19; // r8
  __int64 v20; // rax
  volatile signed __int32 *v21; // rbx
  __int64 v23; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v24; // [rsp+28h] [rbp-30h]

  if ( !*a4 )
  {
    v8 = (__int64 *)sub_180075328(a1, &v23);
    std::shared_ptr<__ExceptionPtr>::operator=(a4, v8);
    v9 = v24;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)a4[1];
  }
  v11 = *(_QWORD **)(a1 + 728);
  v12 = v11;
  v13 = (__int64 *)v11[1];
  if ( *((_BYTE *)v13 + 25) )
    goto LABEL_15;
  do
  {
    if ( v13[5] >= (unsigned __int64)v10 )
    {
      v12 = v13;
      v13 = (__int64 *)*v13;
    }
    else
    {
      v13 = (__int64 *)v13[2];
    }
  }
  while ( !*((_BYTE *)v13 + 25) );
  if ( v12 == v11 || (unsigned __int64)v10 < v12[5] )
LABEL_15:
    v12 = *(_QWORD **)(a1 + 728);
  if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  v14 = (_QWORD *)v12[6];
  v15 = (_QWORD *)v12[7];
  while ( 1 )
  {
    if ( v14 == v15 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_32;
    }
    v16 = (_QWORD *)*v14;
    v17 = a3;
    if ( (unsigned __int64)a3[3] >= 0x10 )
      v17 = *a3;
    v18 = v16 + 3;
    if ( v16[6] >= 0x10uLL )
      v18 = (const void *)v16[3];
    v19 = v16[5];
    if ( (const void *)v19 == a3[2] && !memcmp(v18, v17, v19) )
      break;
    v14 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v20 = v14[1];
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v16 = (_QWORD *)*v14;
    v20 = v14[1];
  }
  *a2 = v16;
  a2[1] = v20;
LABEL_32:
  v21 = (volatile signed __int32 *)a4[1];
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return a2;
}
