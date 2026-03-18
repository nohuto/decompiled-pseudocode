/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800D2AD0
 * Callers:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800D27EC (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800D2B70 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x1800D2B9C (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rdi
  void (__fastcall *v4)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *); // rbx
  struct IMessageCallSendHost *SendHost; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
        i && *(_DWORD *)(*((_QWORD *)i + 5) + 36LL) != *((_DWORD *)a2 + 9);
        i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
  {
    ;
  }
  if ( !i )
    i = Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(this, a2);
  if ( !*((_BYTE *)i + 32) )
  {
    *((_BYTE *)i + 32) = 1;
    v4 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 56LL);
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)i + 5));
    v4(this, SendHost, i);
    v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)i + 40LL))(i);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v6,
        v8);
      __debugbreak();
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)i + 4);
  return *((unsigned int *)this + 6);
}
