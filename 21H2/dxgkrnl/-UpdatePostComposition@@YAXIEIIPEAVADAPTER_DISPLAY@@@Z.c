/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0159260
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0106FE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A45EC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C004B474 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(__int64 a1, __int64 a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  char v5; // di
  __int64 v7; // r12
  char v9; // bp
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  struct _KTHREAD **v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v42; // [rsp+20h] [rbp-38h] BYREF
  char v43; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v7 = (unsigned int)a1;
  v43 = 0;
  v9 = a2;
  v42 = (struct _KTHREAD **)((char *)a5 + 408);
  if ( a5 == (struct ADAPTER_DISPLAY *)-408LL )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v27 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v42[2] == CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v28 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( v43 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v29[5] = &v42;
    v29[3] = 275LL;
    v29[4] = 4LL;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  v11 = v42;
  KeEnterCriticalRegion();
  if ( v11[2] == KeGetCurrentThread() )
  {
    v30 = *((_DWORD *)v11 + 6);
    if ( v30 <= 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v31 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v31);
      v30 = *((_DWORD *)v11 + 6);
    }
    v17 = v30 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *((_DWORD *)v11 + 7);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v26);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 1);
      ExAcquirePushLockExclusiveEx(v11, 0LL);
    }
    if ( v11[2] )
    {
      v32 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v32 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( *((_DWORD *)v11 + 6) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v33 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v11[2] = KeGetCurrentThread();
    v17 = 1;
  }
  *((_DWORD *)v11 + 6) = v17;
  v18 = *((_QWORD *)a5 + 14);
  v19 = 3968 * v7;
  v43 = 1;
  v20 = 3968 * v7 + v18;
  v21 = *(_BYTE *)(v20 + 668);
  if ( v9 )
  {
    if ( v21 && *(_DWORD *)(v20 + 672) == a3 && *(_DWORD *)(v20 + 676) == a4 )
      goto LABEL_16;
    *(_DWORD *)(v20 + 672) = a3;
    *(_DWORD *)(*((_QWORD *)a5 + 14) + v19 + 676) = a4;
    *(_BYTE *)(*((_QWORD *)a5 + 14) + v19 + 668) = v9;
  }
  else
  {
    if ( !v21 )
      goto LABEL_16;
    *(_DWORD *)(v20 + 672) = 0;
    *(_DWORD *)(*((_QWORD *)a5 + 14) + v19 + 676) = 0;
    *(_BYTE *)(*((_QWORD *)a5 + 14) + v19 + 668) = 0;
  }
  v5 = 1;
  if ( !v43 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v34[5] = &v42;
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
LABEL_16:
  v22 = v42;
  v43 = 0;
  if ( v42[2] != KeGetCurrentThread() )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v22;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  v23 = *((_DWORD *)v22 + 6);
  if ( v23 <= 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v36 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v36);
    v23 = *((_DWORD *)v22 + 6);
  }
  v24 = v23 - 1;
  *((_DWORD *)v22 + 6) = v24;
  if ( !v24 )
  {
    v22[2] = 0LL;
    ExReleasePushLockExclusiveEx(v22, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    v37 = operator new[](0x18uLL, 0x4B677844u, PagedPool);
    v38 = v37;
    if ( v37 )
    {
      v37[1] = 0LL;
      v37[2] = 0LL;
      *v37 = 0LL;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v37, *((struct DXGADAPTER **)a5 + 2));
      *((_DWORD *)v38 + 4) = v7;
      Current = DXGPROCESS::GetCurrent(v40, v39);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 88LL),
        (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        (struct _LIST_ENTRY *)v38);
    }
  }
  if ( v43 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v42, v25);
}
