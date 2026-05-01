/*
 * XREFs of ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180256CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$PutVisibility@PEBGIAEAEAEA_NAEA_NAEAH@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAEAEA_N3AEAH@Z @ 0x1800A9570 (--$PutVisibility@PEBGIAEAEAEA_NAEA_NAEAH@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEA.c)
 *     ?_EvaluateCloseOnHide@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x1800AACB0 (-_EvaluateCloseOnHide@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$?0_JU?$ratio@$00$00@std@@X@?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$00@std@@@12@@Z @ 0x180249348 (--$-0_JU-$ratio@$00$00@std@@X@-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBV-$durat.c)
 *     _anonymous_namespace_::_DisplayInHeadset @ 0x1802540C8 (_anonymous_namespace_--_DisplayInHeadset.c)
 *     ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1802543CC (-_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180254F14 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x180254FB8 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180256470 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

signed int __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::put_Visibility(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rsi
  HSTRING v5; // rcx
  HWND v6; // r15
  char v7; // r13
  __int64 v8; // rdx
  wil::details *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  int ready; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 *v20; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF
  int v23; // [rsp+78h] [rbp+48h] BYREF
  PCWSTR StringRawBuffer; // [rsp+80h] [rbp+50h] BYREF

  LOBYTE(v23) = a2;
  v2 = (RTL_SRWLOCK *)((char *)this + 224);
  AcquireSRWLockShared((PSRWLOCK)this + 28);
  v5 = (HSTRING)*((_QWORD *)this + 65);
  LODWORD(v22) = *((_DWORD *)this + 132);
  StringRawBuffer = WindowsGetStringRawBuffer(v5, 0LL);
  Win32BackedViewHostItemTelemetry::PutVisibility<unsigned short const *,unsigned int,unsigned char &,bool &,bool &,int &>(
    (__int64 *)&StringRawBuffer,
    &v22,
    &v23,
    (char *)this + 552,
    (char *)this + 553,
    (int *)this + 140);
  v6 = (HWND)*((_QWORD *)this + 66);
  v7 = *((_BYTE *)this + 553);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( !PostMessageW(v6, 0x18u, a2 != 0, 0LL) )
    return wil::details::GetLastErrorFailHr(v9, v8, v10, v11);
  if ( a2 )
  {
    v23 = 0;
    if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(this, &v23) >= 0
      && v23 == 1 )
    {
      v22 = 1LL;
      v20 = std::chrono::duration<__int64,std::ratio<1,1000>>::duration<__int64,std::ratio<1,1000>>(
              &StringRawBuffer,
              &v22);
      ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_FirePresentationReadinessOrRetryAfterDelay(
                this,
                10LL,
                *v20);
      if ( ready < 0 )
      {
        v14 = 224LL;
        goto LABEL_8;
      }
    }
  }
  else
  {
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(this, 0);
    if ( ready < 0 )
    {
      v14 = 207LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      return ready;
    }
    if ( (unsigned __int8)GetPropW(v6, L"Windows.Graphics.Holographic.DisableForegroundOnPresence") )
    {
      if ( anonymous_namespace_::_DisplayInHeadset(v16, v15, v17, v18) )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 74) + 56LL))(*((_QWORD *)this + 74));
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xD6,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
            (const char *)(unsigned int)v19);
      }
    }
  }
  AcquireSRWLockExclusive(v2);
  *((_BYTE *)this + 552) = a2 != 0;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(this);
  if ( !a2 && !v7 )
  {
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_EvaluateCloseOnHide(this);
    if ( ready < 0 )
    {
      v14 = 239LL;
      goto LABEL_8;
    }
  }
  return 0;
}
