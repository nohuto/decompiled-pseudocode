/*
 * XREFs of ?Thunk_AckProxyReference_13@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180039A50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x18007379C (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamo.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_13(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  char v3; // di
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // r9
  Microsoft::BamoImpl::BamoPrincipalImpl *v7; // rcx
  __int64 i; // r8
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoPrincipalImpl *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_BYTE *)a2[1];
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL) + 56LL);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl **))(*(_QWORD *)v4 + 56LL))(
         v4,
         *((unsigned int *)a1 + 9),
         **a2,
         &v12);
  if ( v5 != -2018375675 )
  {
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x41E,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v5,
        v10);
      __debugbreak();
    }
    v7 = v12;
    for ( i = *((_QWORD *)v12 + 4);
          i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != *((_DWORD *)a1 + 9);
          i = *(_QWORD *)(i + 48) )
    {
      ;
    }
    if ( !*(_DWORD *)(i + 16) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBA,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoStub.inl",
        v6);
      __debugbreak();
    }
    _InterlockedDecrement((volatile signed __int32 *)(i + 16));
    if ( !v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(v7, a1, (struct Microsoft::BamoImpl::BamoStubImpl *)i);
  }
  return 0LL;
}
