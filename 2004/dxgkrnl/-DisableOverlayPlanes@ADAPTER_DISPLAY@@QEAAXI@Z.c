/*
 * XREFs of ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00EEAA0
 * Callers:
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C001A7C4 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD2E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B098 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014BBA4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0211930 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02A3758 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00EED68 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableOverlayPlanes(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD **v14; // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  struct _KTHREAD **v27; // [rsp+20h] [rbp-18h] BYREF
  char v28; // [rsp+28h] [rbp-10h]

  v2 = (unsigned int)a2;
  v27 = (struct _KTHREAD **)((char *)this + 520);
  v28 = 0;
  if ( this == (ADAPTER_DISPLAY *)-520LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(-520LL, a2);
    *(_QWORD *)(v17 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v27[2] == CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v18 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( v28 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v19[5] = &v27;
    v19[3] = 275LL;
    v19[4] = 4LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  v5 = v27;
  KeEnterCriticalRegion();
  if ( v5[2] == KeGetCurrentThread() )
  {
    v20 = *((_DWORD *)v5 + 6);
    if ( v20 <= 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v21 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v21);
      v20 = *((_DWORD *)v5 + 6);
    }
    v11 = v20 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v22 = *((_DWORD *)v5 + 7);
        if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, &EventBlockThread, v10, v22);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 1);
      ExAcquirePushLockExclusiveEx(v5, 0LL);
    }
    if ( v5[2] )
    {
      v23 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v23 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v24 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v5[2] = KeGetCurrentThread();
    v11 = 1;
  }
  *((_DWORD *)v5 + 6) = v11;
  v28 = 1;
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3968 * v2), 0);
  if ( v28 )
  {
    v14 = v27;
    v28 = 0;
    if ( v27[2] != KeGetCurrentThread() )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
      v25[3] = 275LL;
      v25[4] = 4LL;
      v25[5] = v14;
      v25[6] = 0LL;
      v25[7] = 0LL;
      WdLogEvent5_WdCriticalError(v25);
    }
    v15 = *((_DWORD *)v14 + 6);
    if ( v15 <= 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v26 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v26);
      v15 = *((_DWORD *)v14 + 6);
    }
    v16 = v15 - 1;
    *((_DWORD *)v14 + 6) = v16;
    if ( !v16 )
    {
      v14[2] = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
