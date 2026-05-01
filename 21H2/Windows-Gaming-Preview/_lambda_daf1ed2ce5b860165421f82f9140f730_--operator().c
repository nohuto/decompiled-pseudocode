/*
 * XREFs of _lambda_daf1ed2ce5b860165421f82f9140f730_::operator() @ 0x180030EC8
 * Callers:
 *     ?First@?$SimpleVectorView@U_GUID@@V?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@U_GUID@@@345@@Z @ 0x180030E00 (-First@-$SimpleVectorView@U_GUID@@V-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Interna.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_daf1ed2ce5b860165421f82f9140f730_::operator()(_QWORD **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9])(
         (*a1)[9],
         &GUID_f4ca3045_5dd7_54be_982e_d88d8ca0876e,
         &v5);
  if ( v2 >= 0 )
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *a1[1]);
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return (unsigned int)v2;
}
