/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0159F68
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01358BC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v13 + 24) = 6109LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v14 + 24) = 6111LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a2->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v15 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 252) )
  {
    Luid = 0LL;
    v6 = ZwAllocateLocallyUniqueId(&Luid);
    v11 = v6;
    if ( v6 < 0 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
      *(_QWORD *)(v16 + 24) = v11;
      WdLogEvent5_WdLowResource(v16);
      BYTE4(this[14][496 * a2->VidPnSourceId + 136]) = 0;
    }
    else
    {
      operator delete[](this[14][496 * a2->VidPnSourceId + 135]);
      this[14][496 * a2->VidPnSourceId + 135] = (PERESOURCE)a2->pModeList;
      LODWORD(this[14][496 * a2->VidPnSourceId + 136]) = a2->ModeCount;
      BYTE4(this[14][496 * a2->VidPnSourceId + 136]) = 1;
      this[14][496 * a2->VidPnSourceId + 137] = (PERESOURCE)Luid;
    }
    return (unsigned int)v11;
  }
  else
  {
    return 3221226021LL;
  }
}
