/*
 * XREFs of ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C01320C8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01213CC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01315B4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C013216C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // rax
  unsigned int v8; // edi
  int v9; // ebx
  int **SessionViewOwner; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0;
  *a3 = 0;
  if ( DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v13) < 0 )
    return (unsigned int)-1073741275;
  v7 = a1[337];
  v14 = 0;
  v8 = v13;
  if ( v13 >= *((_DWORD *)v7 + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v12 + 24) = 4765LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = DmmEnumClientVidPnPathTargetsFromSource(a1, v8, 1uLL, &v14);
  if ( v9 < 0 || v14 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[337], v8);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v9;
  }
  *a3 = 1;
  return 0LL;
}
