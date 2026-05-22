/*
 * XREFs of ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x18003971C
 * Callers:
 *     ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180039700 (-Thunk_SetBootstrapProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000BEF4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z @ 0x1800397C8 (-SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18006446C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  Microsoft::BamoImpl::BamoProxyImpl *v4; // rdi
  Microsoft::Bamo::BaseBamoConnection *v5; // rbx
  struct Microsoft::Bamo::BamoProxy *v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  unsigned int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**((_QWORD **)this + 7)
                                                                                             + 56LL))(
         *((_QWORD *)this + 7),
         *((unsigned int *)a2 + 9),
         a3,
         &v14) < 0 )
  {
    v8 = -2018375668;
    goto LABEL_6;
  }
  v4 = v14;
  v5 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 2);
  v6 = (struct Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)v14 + 48LL))(v14);
  v8 = Microsoft::Bamo::BaseBamoConnection::SetBootstrapProxyCallout(v5, v6);
  if ( v8 >= 0 )
  {
    if ( !*((_BYTE *)v4 + 30) )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v4, v7, v9);
LABEL_6:
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  if ( v8 != -2018375668 )
  {
    v11 = wil::verify_hresult<long>((unsigned int)v8);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B1,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)v11,
      v12);
    JUMPOUT(0x1800397BFLL);
  }
  return (unsigned int)v8;
}
