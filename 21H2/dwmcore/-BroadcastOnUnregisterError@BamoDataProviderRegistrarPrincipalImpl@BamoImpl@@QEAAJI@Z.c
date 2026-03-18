/*
 * XREFs of ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801BA4D8
 * Callers:
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x1801BA490 (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallOnUnregisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x1801BA5C8 (-CallOnUnregisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImp.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::BroadcastOnUnregisterError(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  __int64 i; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 32) )
      {
        v5 = BamoImpl::BamoDataProviderRegistrarPrincipalImpl::CallOnUnregisterErrorOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2);
        v6 = v5;
        if ( v5 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x225,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2418,
      (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
