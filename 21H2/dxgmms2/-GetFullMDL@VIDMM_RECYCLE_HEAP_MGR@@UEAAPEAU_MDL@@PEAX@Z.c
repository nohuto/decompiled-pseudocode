/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C0093AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C0093D00 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct _MDL *result; // rax
  struct _MDL *v4; // rdi
  DXGFASTMUTEX *v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  DXGFASTMUTEX *v10; // [rsp+50h] [rbp-18h]
  char v11; // [rsp+58h] [rbp-10h]

  v11 = 0;
  v10 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(v8, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v10);
  v11 = 1;
  result = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  v4 = result;
  if ( v11 )
  {
    v5 = v10;
    v11 = 0;
    if ( *((struct _KTHREAD **)v10 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v10, 0LL, 0LL);
    v6 = *((_DWORD *)v5 + 8);
    if ( v6 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(v9, 262146LL);
      v6 = *((_DWORD *)v5 + 8);
    }
    v7 = v6 - 1;
    *((_DWORD *)v5 + 8) = v7;
    if ( !v7 )
    {
      *((_QWORD *)v5 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v5 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
    return v4;
  }
  return result;
}
