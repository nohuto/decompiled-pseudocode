/*
 * XREFs of ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x1C01BFC6C
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01C0004 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 */

void __fastcall DelayZoneTelemetry::AddInputPanelRectToList(DelayZoneTelemetry *this, struct tagRECT *a2)
{
  char *v2; // rbx
  char *v3; // rax
  __int64 v5; // rcx
  struct tagRECT *v6; // rax
  __int64 v7; // rcx
  struct tagRECT v8; // [rsp+20h] [rbp-18h]

  v2 = (char *)this + 12288;
  v3 = (char *)*((_QWORD *)this + 1536);
  v8 = *a2;
  while ( v3 != v2 )
  {
    v5 = *((_QWORD *)v3 + 2) - *(_QWORD *)&v8.left;
    if ( !v5 )
      v5 = *((_QWORD *)v3 + 3) - *(_QWORD *)&v8.right;
    if ( !v5 )
      return;
    v3 = *(char **)v3;
  }
  v6 = (struct tagRECT *)Win32AllocPoolZInit(0x20uLL, 0x7A647355u);
  if ( v6 )
  {
    v6[1] = *a2;
    v7 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
      __fastfail(3u);
    *(_QWORD *)&v6->left = v7;
    *(_QWORD *)&v6->right = v2;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)v2 = v6;
  }
}
