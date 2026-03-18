/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C00A28D4
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C00A25F0 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     DisableDelegation @ 0x1C00B4690 (DisableDelegation.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00B9044 (ApiSetEditionInternalSetCursorPos.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C019CC28 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019DA0C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  CCursorClip *v6; // rcx
  char v7; // di
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v5 = a2;
  GetDomainLockRef(18LL, a2, a3, a4);
  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 2LL) )
  {
    v12 = a1;
    LODWORD(v13) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C0244A70,
      (unsigned int)&unk_1C0218C97,
      v9,
      v10,
      (__int64)&v13,
      (__int64)&v12);
  }
  if ( v5 )
  {
    if ( (v5 & 2) != 0 )
    {
      CCursorClip::OverrideClip(v6, 1);
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = gptCursorAsync;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = v5;
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
