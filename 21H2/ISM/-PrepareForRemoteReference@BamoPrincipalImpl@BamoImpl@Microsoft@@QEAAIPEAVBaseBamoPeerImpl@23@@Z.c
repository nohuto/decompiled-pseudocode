/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800072C0
 * Callers:
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180006F80 (-RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UE.c)
 *     ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180007140 (-CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180038E7C (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180073850 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180104AC4 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003FD88 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  __int64 v2; // rbx
  int v5; // eax
  void (__fastcall ***v6)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // rcx
  void (__fastcall *v8)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, __int64); // rdi
  struct IMessageCallSendHost *SendHost; // rax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
    goto LABEL_5;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 40) + 36LL) == *((_DWORD *)a2 + 9) )
      break;
    v2 = *(_QWORD *)(v2 + 48);
  }
  while ( v2 );
  if ( !v2 )
  {
LABEL_5:
    v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64 *))(*(_QWORD *)this + 64LL))(
           this,
           a2,
           &v14);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x20B,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v5,
        v12);
      __debugbreak();
    }
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
    *(_QWORD *)(v2 + 24) = this;
    v6 = *(void (__fastcall ****)(_QWORD))(v2 + 40);
    *(_QWORD *)(v2 + 40) = a2;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v6 )
      (**v6)(v6);
    *(_QWORD *)(v2 + 48) = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v2;
    *(_QWORD *)(v2 + 56) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v2;
  }
  if ( !*(_BYTE *)(v2 + 32) )
  {
    v7 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v2 + 40);
    *(_BYTE *)(v2 + 32) = 1;
    v8 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)this + 56LL);
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v7);
    v8(this, SendHost, v2);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v10,
        v12);
      __debugbreak();
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 16));
  return *((unsigned int *)this + 6);
}
