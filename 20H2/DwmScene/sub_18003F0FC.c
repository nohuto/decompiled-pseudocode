/*
 * XREFs of sub_18003F0FC @ 0x18003F0FC
 * Callers:
 *     sub_18003F3C0 @ 0x18003F3C0 (sub_18003F3C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003E188 @ 0x18003E188 (sub_18003E188.c)
 *     sub_18003E1FC @ 0x18003E1FC (sub_18003E1FC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18003F0FC(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  volatile signed __int32 *v8; // rbx
  void *v10; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+18h] BYREF

  v13 = a2;
  v2 = (__int64 *)(a1 + 552);
  v3 = *(_QWORD *)(a1 + 552);
  v4 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)(v4 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_DWORD *)(v4 + 32) >= a2 )
    {
      v3 = v4;
      v4 = *(_QWORD *)v4;
    }
    else
    {
      v4 = *(_QWORD *)(v4 + 16);
    }
  }
  while ( !*(_BYTE *)(v4 + 25) );
  if ( v3 == *v2 || a2 < *(_DWORD *)(v3 + 32) )
LABEL_8:
    v3 = *v2;
  if ( v3 != *v2 )
    return (_QWORD *)(v3 + 40);
  v5 = operator new(0xA0uLL);
  v10 = v5;
  if ( v5 )
    v6 = sub_18003E188((__int64)v5);
  else
    v6 = 0LL;
  v10 = (void *)(v6 + 16);
  v11 = (volatile signed __int32 *)v6;
  sub_18003E1FC(v2, (__int64)&v12, &v13);
  v7 = std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v12 + 40), (__int64 *)&v10);
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    v8 = v11;
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return v7;
}
