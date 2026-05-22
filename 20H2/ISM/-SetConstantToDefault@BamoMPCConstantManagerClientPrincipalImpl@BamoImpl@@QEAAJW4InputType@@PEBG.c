/*
 * XREFs of ?SetConstantToDefault@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGI@Z @ 0x18006FF70
 * Callers:
 *     ?Thunk_SetConstantToDefault_16@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800702F0 (-Thunk_SetConstantToDefault_16@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantMana.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18000650C (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000BEF4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstantToDefault(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  int v8; // ecx
  _QWORD *i; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v14; // rdi
  char *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v8; i = (_QWORD *)i[6] )
    ;
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v11 = i[5];
  v12 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v11 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v12, *(unsigned int *)(v11 + 36), a4);
  v14 = Item;
  if ( Item )
    v15 = (char *)Item - 16;
  else
    v15 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v22,
    v12);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, char *))(*(_QWORD *)(a1 - 16) + 104LL))(
          a1 - 16,
          v10,
          a2,
          a3,
          v15);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8316LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v16);
  v19 = v22;
  if ( v22 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v22 + 128));
    *(_DWORD *)(v19 + 168) = GetCurrentThreadId();
  }
  if ( v14 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v14, v17, v18);
  return 0LL;
}
