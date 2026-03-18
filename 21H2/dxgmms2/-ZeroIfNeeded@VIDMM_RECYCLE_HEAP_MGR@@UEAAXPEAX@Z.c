/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0093B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00A32BC (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CDC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CFC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rax
  unsigned int *j; // rdi
  unsigned __int64 v6; // rcx
  DXGFASTMUTEX *v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  DXGFASTMUTEX *v12; // [rsp+50h] [rbp-58h]
  char v13; // [rsp+58h] [rbp-50h]
  struct _KAPC_STATE v14; // [rsp+60h] [rbp-48h] BYREF
  VIDMM_PROCESS *v15; // [rsp+90h] [rbp-18h]

  v15 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v15, &v14);
  v13 = 0;
  v12 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(v10, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v12);
  v13 = 1;
  if ( !dword_1C006E450 )
    goto LABEL_11;
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
        *((_DWORD *)i + 20) != 3;
        i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      goto LABEL_7;
  }
  VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(a2);
LABEL_7:
  for ( j = (unsigned int *)*((_QWORD *)a2 + 8);
        ;
        j = (unsigned int *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)j) )
  {
    v6 = j[20];
    if ( (_DWORD)v6 != 2 )
    {
      if ( (_DWORD)v6 )
      {
        v6 = (unsigned int)(v6 - 1);
        if ( !(_DWORD)v6 || (_DWORD)v6 == 2 )
          j[20] = 2;
      }
      else if ( dword_1C006E450 && g_IsInternalRelease )
      {
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
    if ( j == *((unsigned int **)a2 + 9) )
      break;
  }
  if ( v13 )
  {
LABEL_11:
    v7 = v12;
    v13 = 0;
    if ( *((struct _KTHREAD **)v12 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v12, 0LL, 0LL);
    v8 = *((_DWORD *)v7 + 8);
    if ( v8 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(v11, 262146LL);
      v8 = *((_DWORD *)v7 + 8);
    }
    v9 = v8 - 1;
    *((_DWORD *)v7 + 8) = v9;
    if ( !v9 )
    {
      *((_QWORD *)v7 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v7 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  VIDMM_PROCESS::SafeDetach((VIDMM_PROCESS *)v6, &v14);
}
