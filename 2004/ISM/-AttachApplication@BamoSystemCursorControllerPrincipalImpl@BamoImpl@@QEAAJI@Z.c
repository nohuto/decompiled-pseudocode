/*
 * XREFs of ?AttachApplication@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18013B470
 * Callers:
 *     ?Thunk_AttachApplication_10@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18013CDF0 (-Thunk_AttachApplication_10@-$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControll.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18000650C (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000BEF4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::AttachApplication(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // ecx
  _QWORD *i; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v10; // rdi
  char *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v4; i = (_QWORD *)i[6] )
    ;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v7 = i[5];
  v8 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v8, *(unsigned int *)(v7 + 36), a2);
  v10 = Item;
  if ( Item )
    v11 = (char *)Item - 16;
  else
    v11 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v18, v8);
  v12 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, v6, v11);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      50326LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v12);
  v15 = v18;
  if ( v18 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 128));
    *(_DWORD *)(v15 + 168) = GetCurrentThreadId();
  }
  if ( v10 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v10, v13, v14);
  return 0LL;
}
