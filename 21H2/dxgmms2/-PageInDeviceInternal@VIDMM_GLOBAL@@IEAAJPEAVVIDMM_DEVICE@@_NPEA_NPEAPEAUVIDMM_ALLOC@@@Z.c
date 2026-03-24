/*
 * XREFs of ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00611D4
 * Callers:
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00610F0 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00B1F0C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001098 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00613C0 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0074264 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0074328 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDeviceInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        bool a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  _QWORD *v5; // r15
  VIDMM_GLOBAL *v7; // rbp
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r13
  struct VIDMM_ALLOC *v11; // rbx
  int v12; // ebp
  _QWORD *v13; // r14
  __int64 v14; // rcx
  VIDMM_DEVICE *v15; // rcx
  _QWORD *v16; // r14
  int v18; // eax
  struct VIDMM_ALLOC **v19; // [rsp+20h] [rbp-58h]
  bool v21; // [rsp+90h] [rbp+18h]
  bool *v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v5 = (_QWORD *)((char *)a2 + 136);
  *a4 = 0;
  v7 = this;
  v8 = 0;
  *a5 = 0LL;
  if ( (_QWORD *)*v5 == v5
    || (v9 = *((_QWORD *)a2 + 4)) != 0
    && (*(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0)) )
  {
    if ( *((_QWORD *)a2 + 31) )
      *((_QWORD *)a2 + 31) = 0LL;
    return (unsigned int)v8;
  }
  v10 = *((_QWORD *)a2 + 3);
  if ( v10 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v10 + 776));
    a4 = v22;
    a3 = v21;
  }
  v11 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 31);
  if ( !v11 )
    goto LABEL_8;
  v15 = **(VIDMM_DEVICE ***)v11;
  if ( (*((_DWORD *)v15 + 19) & 0x100) != 0 )
  {
    v19 = (struct VIDMM_ALLOC **)a4;
    LOBYTE(a4) = a3;
    v18 = VIDMM_GLOBAL::PageInOneAllocation(v7, v11, 0LL, a4, v19, a5, 0, -1LL);
LABEL_34:
    v8 = v18;
    goto LABEL_35;
  }
  if ( (*((_DWORD *)v11 + 7) & 3) != 0 )
  {
    v18 = VIDMM_GLOBAL::PageInFaultedAllocation(v7, *((struct VIDMM_ALLOC **)a2 + 31), a3, a4, a5);
    goto LABEL_34;
  }
LABEL_35:
  if ( v8 < 0 )
    goto LABEL_37;
  *((_QWORD *)a2 + 31) = 0LL;
LABEL_8:
  v12 = 0;
LABEL_9:
  v13 = (_QWORD *)*v5;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        if ( v13 == v5 )
        {
          v16 = (_QWORD *)*v5;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v16 == v5 )
              {
                if ( ++v12 >= 3 )
                  goto LABEL_27;
                goto LABEL_9;
              }
              v11 = (struct VIDMM_ALLOC *)(v16 - 7);
              v16 = (_QWORD *)*v16;
              if ( !v12 )
                break;
              if ( v12 != 1 || *(_DWORD *)(**(_QWORD **)v11 + 384LL) >= 0xA0000000 )
                goto LABEL_24;
            }
            if ( (*(_DWORD *)(**(_QWORD **)v11 + 76LL) & 0x40) == 0 )
            {
LABEL_24:
              v8 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v11, v21, v22, a5);
              if ( v8 < 0 )
                goto LABEL_17;
            }
          }
        }
        v11 = (struct VIDMM_ALLOC *)(v13 - 7);
        v13 = (_QWORD *)*v13;
        if ( v12 )
          break;
        if ( (*(_DWORD *)(**(_QWORD **)v11 + 76LL) & 0x40) == 0 )
          goto LABEL_15;
      }
    }
    while ( v12 == 1 && *(_DWORD *)(**(_QWORD **)v11 + 384LL) < 0xA0000000 );
LABEL_15:
    v14 = **(_QWORD **)v11;
    if ( *(_DWORD *)(v14 + 120) == 1 )
    {
      v8 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v11, v21, v22, a5);
      if ( v8 < 0 )
        break;
    }
  }
LABEL_17:
  v7 = this;
LABEL_37:
  if ( (*((_DWORD *)v11 + 7) & 3) == 2 )
    VIDMM_GLOBAL::FaultOneAllocation(v7, v11);
  else
    VIDMM_DEVICE::FaultCommitment(v15, v11);
  *((_QWORD *)a2 + 31) = *a5;
LABEL_27:
  if ( v10 )
  {
    ExReleasePushLockSharedEx(v10 + 776, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v8;
}
