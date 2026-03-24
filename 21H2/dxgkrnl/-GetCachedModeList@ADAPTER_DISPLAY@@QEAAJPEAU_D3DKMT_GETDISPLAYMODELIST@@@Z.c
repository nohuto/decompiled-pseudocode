/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C015D4BC
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C015D25C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(ADAPTER_DISPLAY *this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 VidPnSourceId; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v8 + 24) = 6066LL;
    WdLogEvent5_WdAssertion(v8);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 252) && *(_BYTE *)(3968 * VidPnSourceId + *((_QWORD *)this + 14) + 1092) )
  {
    v5 = WdLogNewEntry5_WdEvent(3968 * VidPnSourceId, a2);
    *(_QWORD *)(v5 + 24) = 6082LL;
    WdLogEvent5_WdEvent(v5);
    v6 = 3968LL * a2->VidPnSourceId;
    a2->pModeList = *(D3DKMT_DISPLAYMODE **)(*((_QWORD *)this + 14) + v6 + 1080);
    result = 0LL;
    a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 14) + v6 + 1088);
  }
  else
  {
    return 3221226021LL;
  }
  return result;
}
