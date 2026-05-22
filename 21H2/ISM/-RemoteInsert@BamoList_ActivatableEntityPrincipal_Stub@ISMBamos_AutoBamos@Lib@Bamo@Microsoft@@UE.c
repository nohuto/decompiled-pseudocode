/*
 * XREFs of ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180006F80
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x180002D14 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180006230 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800072C0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003FD88 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub::RemoteInsert(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub *this,
        int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  __int64 v6; // rbp
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v7; // rbx
  __int64 v8; // rsi
  Microsoft::BamoImpl::BaseBamoPeerImpl *v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v12; // rax
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-58h]
  __int16 v17; // [rsp+20h] [rbp-58h]
  _QWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v20; // [rsp+80h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
  v7 = 0LL;
  v20 = 0LL;
  v8 = *(_QWORD *)(v6 + 32);
  if ( *(_DWORD *)(v8 + 168) != GetCurrentThreadId() )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
      (Microsoft::BamoImpl::BamoImplObject **)&v20,
      (volatile signed __int32 *)v6);
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 128));
    *(_DWORD *)(v8 + 168) = GetCurrentThreadId();
    v7 = v20;
  }
  v9 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)this + 6);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 3) + 32LL) + 56LL) )
  {
    if ( a3 )
    {
      v12 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoActivatableEntityPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v12,
        *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 6));
      v9 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)this + 6);
    }
    if ( *((_BYTE *)this + 40) && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 3) + 32LL) + 56LL) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v9);
      v14 = *(unsigned int *)(*((_QWORD *)this + 4) + 24LL);
      v18[0] = *(unsigned int *)(*((_QWORD *)this + 6) + 36LL);
      v18[1] = v14;
      v17 = 0;
      v10 = CoreUICallSend(SendHost, v18, 2LL, 71LL, v17, &unk_1801C0210, a2);
      goto LABEL_12;
    }
    v10 = -2018375675;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoStub.inl",
      (const char *)0x87B20805LL,
      v16);
    v11 = 53810LL;
  }
  else
  {
    v10 = -2018375660;
    v11 = 53802LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
    (const char *)v10,
    v16);
LABEL_12:
  if ( v7 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v7[4]);
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v7);
  }
  return v10;
}
