/*
 * XREFs of ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1800721E0
 * Callers:
 *     ?Thunk_DisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800742A0 (-Thunk_DisposeProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_Auto.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18007214C (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 9);
  v5 = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**((_QWORD **)this + 7)
                                                                                                 + 56LL))(
         *((_QWORD *)this + 7),
         v3,
         a3,
         &v11);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1131LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 40LL))(
         *((_QWORD *)this + 7),
         v3,
         v5,
         0LL);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1133LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( *((int *)v11 + 2) > 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1142LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v8);
    __debugbreak();
  }
  Microsoft::BamoImpl::BamoProxyImpl::Disconnect(v11, 0);
  return 0LL;
}
