/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C00403F4
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C0040110 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     DisableDelegation @ 0x1C0054000 (DisableDelegation.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C005956C (ApiSetEditionInternalSetCursorPos.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C019F128 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019FDAC (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(int a1, int a2)
{
  CCursorClip *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // di
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  GetDomainLockRef(18LL);
  if ( (unsigned int)dword_1C0246A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 2LL, v5, v6) )
  {
    v12 = a1;
    LODWORD(v13) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C0246A70,
      (unsigned int)&unk_1C021AB06,
      v9,
      v10,
      (__int64)&v13,
      (__int64)&v12);
  }
  if ( a2 )
  {
    if ( (a2 & 2) != 0 )
    {
      CCursorClip::OverrideClip(v4, 1);
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = gptCursorAsync;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a2;
    InputDelegation::CInputDelegationInfo::gInstance = a1;
  }
  else
  {
    v7 = *(&InputDelegation::CInputDelegationInfo::gInstance + 4);
    if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v11 = *(&InputDelegation::CInputDelegationInfo::gInstance + 2);
      v13 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
      DisableDelegation();
      if ( (v7 & 2) != 0 )
        ApiSetEditionInternalSetCursorPos(v11, HIDWORD(v13), 1LL);
      if ( (v7 & 1) != 0 )
        *(_DWORD *)(gpqForeground + 388) |= 1u;
    }
  }
  return 1LL;
}
