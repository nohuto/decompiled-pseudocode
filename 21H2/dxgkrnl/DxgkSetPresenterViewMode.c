/*
 * XREFs of DxgkSetPresenterViewMode @ 0x1C016E530
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C0295B68 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C0046D68 (McTemplateK0tt_EtwWriteTransfer.c)
 */

bool __fastcall DxgkSetPresenterViewMode(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  bool v7; // zf
  bool v8; // bl
  __int64 v10; // [rsp+20h] [rbp-18h]

  v2 = (unsigned __int8)a2;
  v3 = (unsigned __int8)a1;
  if ( (_BYTE)a2 )
  {
    v7 = *((_DWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 309) == 0;
  }
  else
  {
    v6 = (unsigned int)_InterlockedExchange((volatile __int32 *)DXGGLOBAL::GetGlobal(a1, a2) + 309, (_BYTE)a1 != 0);
    v7 = (_DWORD)v6 == 0;
  }
  v8 = !v7;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v10) = v2;
    McTemplateK0tt_EtwWriteTransfer(v5, v4, v6, v3, v10);
  }
  return v8;
}
