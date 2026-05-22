/*
 * XREFs of ?StartAnimation@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z @ 0x1800FCA88
 * Callers:
 *     ?Thunk_StartAnimation_112@?$IResizeContextualProcessorPrincipal_Receive@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800FCD70 (-Thunk_StartAnimation_112@-$IResizeContextualProcessorPrincipal_Receive@VBamoResizeContextualPro.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18000650C (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000BEF4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoResizeContextualProcessorPrincipalImpl::StartAnimation(
        BamoImpl::BamoResizeContextualProcessorPrincipalImpl *this,
        unsigned int a2,
        unsigned int a3)
{
  int v6; // ecx
  _QWORD *i; // rbx
  __int64 v8; // r15
  __int64 v9; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // r14
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v12; // rdi
  char *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v6; i = (_QWORD *)i[6] )
    ;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v9 = i[5];
  v10 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v9 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v10, *(unsigned int *)(v9 + 36), a3);
  v12 = Item;
  if ( Item )
    v13 = (char *)Item - 16;
  else
    v13 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v20,
    v10);
  v14 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, char *))(*((_QWORD *)this - 2) + 88LL))(
          (char *)this - 16,
          v8,
          a2,
          v13);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      47427LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v14);
  v17 = v20;
  if ( v20 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 128));
    *(_DWORD *)(v17 + 168) = GetCurrentThreadId();
  }
  if ( v12 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v12, v15, v16);
  return 0LL;
}
