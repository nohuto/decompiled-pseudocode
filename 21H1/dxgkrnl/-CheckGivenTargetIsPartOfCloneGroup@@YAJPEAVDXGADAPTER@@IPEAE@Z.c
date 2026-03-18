/*
 * XREFs of ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00E80B4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00E7FDC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E8A34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0129954 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(struct DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edi
  int v9; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0;
  *a3 = 0;
  if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v13) < 0 )
    return (unsigned int)-1073741275;
  v7 = *((_QWORD *)a1 + 334);
  v14 = 0;
  v8 = v13;
  if ( v13 >= *(_DWORD *)(v7 + 80) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v12 + 24) = 4764LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = DmmEnumClientVidPnPathTargetsFromSource(a1, v8, 1uLL, &v14);
  if ( v9 < 0 || v14 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a1 + 334), v8);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v9;
  }
  *a3 = 1;
  return 0LL;
}
