/*
 * XREFs of ?SetDevices@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180130CA4
 * Callers:
 *     ?SetDevices@BamoPenDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180130C50 (-SetDevices@BamoPenDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDevicesRemoteCacheStatic@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180130E58 (-UpdateDevicesRemoteCacheStatic@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 */

void __fastcall BamoImpl::BamoPenDeviceManagerPrincipalImpl::SetDevices(
        BamoImpl::BamoPenDeviceManagerPrincipalImpl *this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *a2)
{
  __int64 v2; // rbx
  __int64 i; // rbx
  int updated; // eax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *))a2)(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v6 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoPenDeviceManagerPrincipalImpl::UpdateDevicesRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v6 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_11:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      45226LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
}
