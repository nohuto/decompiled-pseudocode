/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01CE260
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002F03C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  char v5; // si
  __int64 v9; // r13
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  struct _KTHREAD **v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  int v22; // r9d
  int v23; // eax
  __int64 v24; // rax
  _DWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v31; // r9
  struct _KTHREAD **v32; // [rsp+50h] [rbp-38h] BYREF
  char v33; // [rsp+58h] [rbp-30h]

  v5 = 0;
  v32 = (struct _KTHREAD **)((char *)a5 + 464);
  v33 = 0;
  v9 = a1;
  if ( a5 == (struct ADAPTER_DISPLAY *)-464LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v32[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = v32;
  KeEnterCriticalRegion();
  if ( v10[3] == KeGetCurrentThread() )
  {
    v23 = *((_DWORD *)v10 + 8);
    if ( v23 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v23 = *((_DWORD *)v10 + 8);
    }
    v13 = v23 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v22 = *((_DWORD *)v10 + 9);
        if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v22);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 2);
      ExAcquirePushLockExclusiveEx(v10 + 1, 0LL);
    }
    if ( v10[3] )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v10 + 8) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    v10[3] = KeGetCurrentThread();
    v13 = 1;
  }
  *((_DWORD *)v10 + 8) = v13;
  v14 = *((_QWORD *)a5 + 16);
  v15 = 4000 * v9;
  v33 = 1;
  v16 = 4000 * v9 + v14;
  v17 = *(_BYTE *)(v16 + 704);
  if ( a2 )
  {
    if ( v17 && *(_DWORD *)(v16 + 708) == a3 && *(_DWORD *)(v16 + 712) == a4 )
      goto LABEL_14;
    *(_DWORD *)(v16 + 708) = a3;
    *(_DWORD *)(v15 + *((_QWORD *)a5 + 16) + 712) = a4;
    *(_BYTE *)(v15 + *((_QWORD *)a5 + 16) + 704) = a2;
  }
  else
  {
    if ( !v17 )
      goto LABEL_14;
    *(_DWORD *)(v16 + 708) = 0;
    *(_DWORD *)(v15 + *((_QWORD *)a5 + 16) + 712) = 0;
    *(_BYTE *)(v15 + *((_QWORD *)a5 + 16) + 704) = 0;
  }
  v5 = 1;
  if ( !v33 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v32, 0LL, 0LL);
LABEL_14:
  v18 = v32;
  v33 = 0;
  if ( v32[3] != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v32, 0LL, 0LL);
  v19 = *((_DWORD *)v18 + 8);
  if ( v19 <= 0 )
  {
    WdLogSingleEntry1(1LL, 516LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
    v19 = *((_DWORD *)v18 + 8);
  }
  v20 = v19 - 1;
  *((_DWORD *)v18 + 8) = v20;
  if ( !v20 )
  {
    v18[3] = 0LL;
    ExReleasePushLockExclusiveEx(v18 + 1, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    v24 = operator new[](0x18uLL, 0x4B677844u, 256LL, v21);
    v25 = (_DWORD *)v24;
    if ( v24 )
    {
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = 0LL;
      *(_QWORD *)v24 = 0LL;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v24, *((struct DXGADAPTER **)a5 + 2));
      v25[4] = v9;
      Current = DXGPROCESS::GetCurrent(v27, v26, v28, v29);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 96LL),
        (void (*)(void *))lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        v25,
        v31);
    }
  }
  if ( v33 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v32);
}
