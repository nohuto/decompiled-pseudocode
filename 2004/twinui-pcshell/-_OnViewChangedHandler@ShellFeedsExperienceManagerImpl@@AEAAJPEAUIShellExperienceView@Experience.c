/*
 * XREFs of ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009D590
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004FD24 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D6AC (-_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D758 (-_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewChangedHandler(
        ShellFeedsExperienceManagerImpl *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  const struct _tlgProvider_t *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v18);
  if ( v5 < 0 )
  {
    v6 = 859LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v18 )
  {
    if ( v18 >= 3 )
    {
      if ( v18 == 5 )
        return ShellFeedsExperienceManagerImpl::_OnViewCreated(this);
      if ( v18 == 6 )
        return ShellFeedsExperienceManagerImpl::_OnViewDestroyed(this);
    }
  }
  else
  {
    v8 = *(_QWORD *)a3;
    v17 = 0;
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v8 + 56))(
           a3,
           &v17);
    if ( v5 < 0 )
    {
      v6 = 865LL;
      goto LABEL_3;
    }
    v10 = v17;
    v11 = FeedsMicrosoftTelemetryProvider::Provider(v9);
    if ( *(_DWORD *)v11 > 5u )
    {
      if ( tlgKeywordOn((__int64)v11, 0x200000000000LL) )
      {
        v15 = 0x1000000LL;
        v14 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v12,
          byte_1805057ED,
          0LL,
          v13,
          (__int64)&v14,
          (__int64)&v15);
      }
    }
  }
  return 0LL;
}
