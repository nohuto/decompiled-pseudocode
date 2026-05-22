/*
 * XREFs of ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C3844
 * Callers:
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C2F68 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C300C (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C3AE0 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800C3B50 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C1A94 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1800C1B60 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800C1E00 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800C2130 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C2764 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x1800C3E20 (-UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z.c)
 *     ?ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ @ 0x1800C3F04 (-ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ.c)
 */

void __fastcall ManipulationInjector::StartManipulation(__int64 a1, int a2, POINT a3, unsigned int a4)
{
  struct tagRECT *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  void *v12; // rcx
  bool v13; // zf
  struct tagPOINT *v14; // r14
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  char v19; // r8
  int v20; // r9d
  int v21; // r9d
  int v22; // r9d
  __int64 v23; // r8
  const char *v24; // r9
  unsigned int v25; // edx
  __int64 v26; // rdx
  ManipulationInjector *v27; // rcx
  __int64 v28; // r8
  const char *v29; // r9
  struct tagRECT v30; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 88) == 128 )
    ManipulationInjector::EndManipulationInternal((ManipulationInjector *)a1, 0, 1);
  if ( (unsigned int)(a2 - 1) > 0x7F
    || (v8 = (struct tagRECT *)(a1 + 64), !PtInRect((const RECT *)(a1 + 64), a3))
    || *(_DWORD *)(a1 + 88) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      338LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x1800C3AD6LL);
  }
  v12 = *(void **)(a1 + 784);
  if ( v12 && !ResetEvent(v12) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      344LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v11);
    __debugbreak();
  }
  v13 = *(_DWORD *)(a1 + 48) == 0;
  v14 = (struct tagPOINT *)(a1 + 80);
  *(POINT *)(a1 + 80) = a3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 740) = 0;
  if ( !v13 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      353LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v11);
    __debugbreak();
  }
  v15 = a2 - 1;
  if ( !v15 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_PAN\n");
    ManipulationInjector::ValidateInjectionRectForPanZoom((ManipulationInjector *)a1);
    v20 = *(_DWORD *)(a1 + 16);
    goto LABEL_32;
  }
  v16 = v15 - 15;
  if ( !v16 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_ZOOM_INCREASING\n");
    ManipulationInjector::ValidateInjectionRectForPanZoom((ManipulationInjector *)a1);
    v21 = *(_DWORD *)(a1 + 24);
    goto LABEL_25;
  }
  v17 = v16 - 16;
  if ( !v17 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_ZOOM_DECREASING\n");
    ManipulationInjector::ValidateInjectionRectForPanZoom((ManipulationInjector *)a1);
    v21 = *(_DWORD *)(a1 + 32);
LABEL_25:
    v22 = *(_DWORD *)(a1 + 16) + v21;
    v30 = *v8;
    ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v30, v22);
    ManipulationInjector::AddZoomContacts((struct tagPOINT *)a1, a4, v23, v24);
    goto LABEL_34;
  }
  v18 = v17 - 32;
  if ( v18 )
  {
    if ( v18 != 64 )
      goto LABEL_34;
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_HOVER\n");
    v30 = *v8;
    ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v30, 0);
    v19 = 1;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 13) )
    DbgPrint("INTERACTION_TYPE_DRAG\n");
  v20 = 0;
LABEL_32:
  v30 = *v8;
  ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v30, v20);
  v19 = 0;
LABEL_33:
  ManipulationInjector::AddContact((struct tagPOINT *)a1, *v14, v19, (const char *)a4);
LABEL_34:
  if ( *(_BYTE *)(a1 + 13) )
    DbgPrint("StartManipulation (%d, %d)\n", v14->x, *(_DWORD *)(a1 + 84));
  ManipulationInjector::InjectAndScrub((ManipulationInjector *)a1, v9, v10, v11);
  if ( ((*(_DWORD *)(a1 + 88) - 16) & 0xFFFFFFEF) == 0 )
  {
    ManipulationInjector::UpdateZoomContactsForThreshold((ManipulationInjector *)a1, v25);
    ManipulationInjector::InjectAndScrub(v27, v26, v28, v29);
  }
}
