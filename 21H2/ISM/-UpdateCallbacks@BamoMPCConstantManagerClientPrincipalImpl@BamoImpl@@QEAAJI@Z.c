/*
 * XREFs of ?UpdateCallbacks@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180070760
 * Callers:
 *     ?Thunk_UpdateCallbacks_25@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180070750 (-Thunk_UpdateCallbacks_25@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerCl.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18000627C (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000BC64 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::UpdateCallbacks(
        BamoImpl::BamoMPCConstantManagerClientPrincipalImpl *this,
        unsigned int a2)
{
  int v3; // ecx
  _QWORD *i; // rbx
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoProxyImpl *v8; // rdi
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v3; i = (_QWORD *)i[6] )
    ;
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL),
           *(unsigned int *)(i[5] + 36LL),
           a2);
  v8 = Item;
  if ( Item )
    v9 = (void (__fastcall ***)(_QWORD))((char *)Item - 16);
  else
    v9 = 0LL;
  v10 = i[8];
  i[8] = v9;
  if ( v9 )
    (**v9)(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v8 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v8, v6, v7);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v15,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL));
  v11 = (*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)this - 2) + 40LL))((char *)this - 16, i - 2);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8180LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v11);
  v12 = v15;
  if ( v15 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v15 + 128));
    *(_DWORD *)(v12 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
