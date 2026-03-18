/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B8348
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7814 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C0018B90 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0099438 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C009D7F8 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00E2434 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  void *KmdProcessHandle; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = (VIDMM_DEVICE *)operator new(320LL, 0x38306956u, 256LL);
  if ( v5 )
    v5 = VIDMM_DEVICE::VIDMM_DEVICE(v5, a2, 0LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    LOBYTE(v6) = 1;
    if ( (int)VIDMM_DEVICE::Init(v5, v6, 0LL, v7) < 0 )
    {
      WdLogSingleEntry1(1LL, 7572LL);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40936LL) & 2) != 0 )
      {
        KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(
                             *(DXGPROCESS **)(*(_QWORD *)this + 32LL),
                             *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL));
        v11 = 0LL;
        for ( *((_QWORD *)this + 3) = KmdProcessHandle;
              (unsigned int)v11 < *((_DWORD *)a2 + 1754);
              v11 = (unsigned int)(v11 + 1) )
        {
          v12 = *((_QWORD *)this + v11 + 4);
          if ( v12 )
            *(_QWORD *)(v12 + 104) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 40936) & 0x20) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, a2, v8, v9) >= 0 )
      {
        *((_BYTE *)a2 + 40936) |= 0x20u;
        return 0LL;
      }
      WdLogSingleEntry1(1LL, 7593LL);
    }
    v15 = 0x40000LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C006E7A0);
    WdLogSingleEntry1(6LL, 7565LL);
    v15 = 262145LL;
  }
  DxgkLogInternalTriageEvent(v14, v15);
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
