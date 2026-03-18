/*
 * XREFs of ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801BACA8
 * Callers:
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x1801BA90C (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x1801BAA3C (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800F0114 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800F17F8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoStubImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 32)
    && (v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)this + 5),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 32LL) + 64LL)) )
  {
    *a2 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v7);
    *a3 = *(_DWORD *)(*((_QWORD *)this + 5) + 36LL);
    *a4 = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)this + 3));
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      (const char *)0x87B20805LL);
    return 2276591621LL;
  }
}
