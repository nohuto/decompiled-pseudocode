/*
 * XREFs of ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18017EE18
 * Callers:
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18017EA6C (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18017EB8C (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800D6E30 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoStubImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 32)
    && (v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)this + 5),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 32LL) + 56LL)) )
  {
    *a2 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v7);
    v8 = *((_QWORD *)this + 3);
    *a3 = *(_DWORD *)(*((_QWORD *)this + 5) + 36LL);
    v9 = *(_DWORD *)(v8 + 24);
    result = 0LL;
    *a4 = v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoStub.inl",
      (const char *)0x87B20805LL);
    return 2276591621LL;
  }
  return result;
}
