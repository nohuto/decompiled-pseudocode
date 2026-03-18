/*
 * XREFs of ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C02120EC
 * Callers:
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 VidPnSourceId; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (ADAPTER_DISPLAY *)((char *)this + 256), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    if ( (unsigned int)VidPnSourceId < *((_DWORD *)this + 20) )
    {
      v9 = 3 * VidPnSourceId;
      v10 = *(unsigned int *)(v5 + 24 * VidPnSourceId + 16);
      if ( a2->ModeCount >= (unsigned int)v10 )
      {
        memmove(a2->pModeList, *(const void **)(v5 + 8 * v9 + 8), 44 * v10);
        a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 37) + 24LL * a2->VidPnSourceId + 16);
        v7 = 0;
      }
      else
      {
        a2->ModeCount = v10;
        v7 = 1075707914;
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4, 0LL);
    *(_QWORD *)(v6 + 24) = 8442LL;
    WdLogEvent5_WdError(v6);
    v7 = -1073741709;
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v5);
  return v7;
}
