/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C015D8BC
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C015D25C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A358 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C015DA44 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r14
  void *v10; // rcx
  struct _D3DKMT_GETDISPLAYMODELIST *v11; // r9
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  __int64 VidPnSourceId; // rdx
  __int64 v14; // r8
  ULONG TimeIncrement; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-40h]
  __int64 v26; // [rsp+28h] [rbp-38h]
  _BYTE v27[16]; // [rsp+30h] [rbp-30h] BYREF
  void *v28[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  __int64 v30; // [rsp+90h] [rbp+30h]
  __int64 v31; // [rsp+A0h] [rbp+40h]

  v30 = MEMORY[0xFFFFF78000000320];
  v9 = v30 * KeQueryTimeIncrement();
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 6256LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v18 + 24) = 6257LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a3->pModeList )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v19 + 24) = 6258LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a3->VidPnSourceId, &EventStartRebuildModeCache, v8, this, a3->VidPnSourceId, 0);
  v10 = (void *)*((_QWORD *)this + 2);
  v29 = 0LL;
  v11 = (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v28 & -(__int64)(*((_QWORD *)this + 37) != 0LL));
  *(_OWORD *)v28 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(v10, a2, a3, v11);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (ADAPTER_DISPLAY *)((char *)this + 256), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v14 = *((_QWORD *)this + 37);
  if ( v14 )
  {
    VidPnSourceId = a3->VidPnSourceId;
    v20 = *(void **)(v14 + 24 * VidPnSourceId + 8);
    if ( v20 )
    {
      operator delete[](v20);
      VidPnSourceId = a3->VidPnSourceId;
      v14 = *((_QWORD *)this + 37);
    }
    v21 = 3LL * (unsigned int)VidPnSourceId;
    *(_OWORD *)(v14 + 8 * v21) = *(_OWORD *)v28;
    *(_QWORD *)(v14 + 8 * v21 + 16) = v29;
  }
  else if ( v28[1] )
  {
    operator delete[](v28[1]);
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, VidPnSourceId);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete[](a3->pModeList);
    a3->pModeList = 0LL;
    v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
    v24[3] = this;
    v24[4] = a3->VidPnSourceId;
    v24[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v24);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v26) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v25) = a3->VidPnSourceId;
    McTemplateK0pqq_EtwWriteTransfer((unsigned int)v25, &EventEndRebuildModeCache, v14, this, v25, v26);
  }
  v31 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    (v31 * (unsigned __int64)TimeIncrement - v9) / 0x2710,
    *(_QWORD *)(*((_QWORD *)this + 2) + 316LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
