/*
 * XREFs of ?RegisterInputAttemptedClient@BamoInputDeliveryServerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180004790
 * Callers:
 *     ?Thunk_RegisterInputAttemptedClient_10@?$IInputDeliveryServerPrincipal_Receive@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180004780 (-Thunk_RegisterInputAttemptedClient_10@-$IInputDeliveryServerPrincipal_Receive@VBamoInputDeliver.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18000650C (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputDeliveryServerPrincipalImpl::RegisterInputAttemptedClient(
        BamoImpl::BamoInputDeliveryServerPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // ecx
  _QWORD *i; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rsi
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  struct Microsoft::BamoImpl::ConversationItem *v10; // rdi
  char *v11; // r14
  __int64 v12; // rbx
  const char *v13; // r9
  int v14; // eax
  __int64 v15; // r8
  wil::details::in1diag3 *v16; // rcx
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v4; i = (_QWORD *)i[6] )
    ;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v7 = i[5];
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
           (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v8,
           *(_DWORD *)(v7 + 36),
           a2);
  v10 = Item;
  if ( Item )
    v11 = (char *)Item - 16;
  else
    v11 = 0LL;
  v12 = 0LL;
  if ( !*(_DWORD *)(v8 + 172) )
  {
    v12 = v8;
    if ( *(_DWORD *)(v8 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v13);
      goto LABEL_19;
    }
    *(_DWORD *)(v8 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 128));
  }
  v14 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 72LL))((char *)this - 16, v6, v11);
  v16 = retaddr;
  if ( v14 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v16,
      (void *)0x8829,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v14,
      v18);
    JUMPOUT(0x1800531F4LL);
  }
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 128));
    *(_DWORD *)(v12 + 168) = GetCurrentThreadId();
  }
  if ( v10 && !*((_BYTE *)v10 + 29) )
  {
    LOBYTE(v15) = *((_DWORD *)v10 + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v10 + 2) + 56LL))(
      *((_QWORD *)v10 + 2),
      *((unsigned int *)v10 + 6),
      v15);
  }
  return 0LL;
}
