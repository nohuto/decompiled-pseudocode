/*
 * XREFs of ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x18010E1D8
 * Callers:
 *     ?HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18010D630 (-HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18010A1B4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18010EDF0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnHoloshellStateChange(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  BOOL v6; // r14d
  int updated; // eax
  BOOL v8; // [rsp+30h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp-80h]
  GUID v11; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-68h] BYREF
  GUID *v13; // [rsp+80h] [rbp-48h]
  int v14; // [rsp+88h] [rbp-40h]
  int v15; // [rsp+8Ch] [rbp-3Ch]
  __int64 v16; // [rsp+90h] [rbp-38h]
  int v17; // [rsp+98h] [rbp-30h]
  int v18; // [rsp+9Ch] [rbp-2Ch]
  BOOL *v19; // [rsp+A0h] [rbp-28h]
  int v20; // [rsp+A8h] [rbp-20h]
  int v21; // [rsp+ACh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v10 = v5;
  v6 = a2 <= 2 || a2 == 5;
  v11 = GUID_00000000_0000_0000_0000_000000000000;
  if ( (unsigned int)dword_18019D350 > 5 )
  {
    v8 = v6;
    v19 = &v8;
    v20 = 4;
    v21 = 0;
    v16 = a1 + 136;
    v17 = 16;
    v18 = 0;
    v13 = &v11;
    v14 = 16;
    v15 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18019D350,
      (unsigned __int8 *)dword_18016A997,
      0LL,
      0LL,
      5u,
      &v12);
  }
  try
  {
    *(_DWORD *)(a1 + 176) = v6 + 1;
    updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)a1);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        316LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)updated);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      321LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
    v5 = v9;
    v4 = v9;
  }
  if ( v4 )
    LeaveCriticalSection(v5);
}
