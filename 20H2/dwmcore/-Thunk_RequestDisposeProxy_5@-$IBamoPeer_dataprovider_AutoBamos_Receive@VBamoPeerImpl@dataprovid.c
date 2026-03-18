/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801671B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x180166614 (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamo.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  __int64 v3; // rcx
  int v4; // eax
  struct Microsoft::BamoImpl::BamoStubImpl *i; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoPrincipalImpl *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL) + 56LL);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl **))(*(_QWORD *)v3 + 56LL))(
         v3,
         *((unsigned int *)a1 + 9),
         **a2,
         &v8);
  if ( v4 != -2018375675 )
  {
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x447,
        (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v8 + 4);
          i && *(_DWORD *)(*((_QWORD *)i + 5) + 36LL) != *((_DWORD *)a1 + 9);
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
    {
      ;
    }
    Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(v8, a1, i);
  }
  return 0LL;
}
