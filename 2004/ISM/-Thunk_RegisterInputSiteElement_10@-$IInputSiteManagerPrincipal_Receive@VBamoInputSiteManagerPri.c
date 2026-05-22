/*
 * XREFs of ?Thunk_RegisterInputSiteElement_10@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180006020
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800064C0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18000650C (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteManagerPrincipal_Receive<BamoImpl::BamoInputSiteManagerPrincipalImpl>::Thunk_RegisterInputSiteElement_10(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *i; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rsi
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  struct Microsoft::BamoImpl::ConversationItem *v11; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // rbx
  char *v13; // r14
  int v14; // eax
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = **a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  v5 = *(unsigned int *)(v4 + 32);
  for ( i = *(_QWORD **)(a1 + 32); i; i = (_QWORD *)i[6] )
  {
    if ( *(_DWORD *)(i[5] + 36LL) == (_DWORD)v5 )
      break;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*i + 24LL))(i, v4, v5);
  v8 = i[5];
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v9, *(_DWORD *)(v8 + 36), v3);
  v11 = Item;
  v12 = 0LL;
  if ( Item )
    v13 = (char *)Item - 16;
  else
    v13 = 0LL;
  if ( !*((_DWORD *)v9 + 43) )
  {
    v12 = v9;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v9);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)(a1 - 16) + 72LL))(a1 - 16, v7, v13);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9B5F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v14,
      v17);
    JUMPOUT(0x180051FBCLL);
  }
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v12 + 128));
    *((_DWORD *)v12 + 42) = GetCurrentThreadId();
  }
  if ( v11 && !*((_BYTE *)v11 + 29) )
  {
    if ( *((int *)v11 + 2) <= 0 )
      v15 = 0LL;
    else
      LOBYTE(v15) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v11 + 2) + 56LL))(
      *((_QWORD *)v11 + 2),
      *((unsigned int *)v11 + 6),
      v15);
  }
  return 0LL;
}
