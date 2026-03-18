/*
 * XREFs of ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C01A9974
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(struct DXGADAPTER *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  int v7; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  *a3 = 0;
  if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v10) < 0 )
    return (unsigned int)-1073741275;
  v5 = *((_QWORD *)a1 + 349);
  v11 = 0;
  v6 = v10;
  if ( v10 >= *(_DWORD *)(v5 + 96) )
  {
    WdLogSingleEntry1(1LL, 4820LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < i_pAdapter->GetDisplayCore()->GetNumVidPnSources()",
      4820LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = DmmEnumClientVidPnPathTargetsFromSource(a1, v6, 1LL, &v11);
  if ( v7 < 0 || v11 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a1 + 349), v6);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v7;
  }
  *a3 = 1;
  return 0LL;
}
