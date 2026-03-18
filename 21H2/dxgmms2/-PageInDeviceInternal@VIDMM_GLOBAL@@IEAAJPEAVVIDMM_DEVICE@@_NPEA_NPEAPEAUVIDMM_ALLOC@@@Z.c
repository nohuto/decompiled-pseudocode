/*
 * XREFs of ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A23A0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A22BC (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00D8A9C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0970 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0A30 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00A2598 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDeviceInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        bool a3,
        bool *a4,
        __int64 ***a5)
{
  _QWORD *v5; // r15
  VIDMM_GLOBAL *v7; // rbp
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r13
  VIDMM_GLOBAL ***v11; // rbx
  int i; // ebp
  _QWORD *v13; // r14
  _QWORD *v14; // r14
  int v16; // eax
  struct VIDMM_ALLOC **v17; // [rsp+20h] [rbp-58h]
  VIDMM_GLOBAL *v18; // [rsp+80h] [rbp+8h]
  bool v19; // [rsp+90h] [rbp+18h]
  bool *v20; // [rsp+98h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v18 = this;
  v5 = (_QWORD *)((char *)a2 + 144);
  *a4 = 0;
  v7 = this;
  v8 = 0;
  *a5 = 0LL;
  if ( (_QWORD *)*v5 == v5
    || (v9 = *((_QWORD *)a2 + 4)) != 0
    && (*(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0)) )
  {
    if ( *((_QWORD *)a2 + 32) )
      *((_QWORD *)a2 + 32) = 0LL;
    return (unsigned int)v8;
  }
  v10 = *((_QWORD *)a2 + 3);
  if ( v10 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v10 + 776));
    a4 = v20;
    a3 = v19;
  }
  v11 = (VIDMM_GLOBAL ***)*((_QWORD *)a2 + 32);
  if ( !v11 )
    goto LABEL_8;
  this = **v11;
  if ( (*((_DWORD *)this + 17) & 0x100) != 0 )
  {
    v17 = (struct VIDMM_ALLOC **)a4;
    LOBYTE(a4) = a3;
    v16 = VIDMM_GLOBAL::PageInOneAllocation((__int64)v7, (__int64 **)v11, 0LL, (__int64)a4, v17, a5, 0, -1LL);
    goto LABEL_37;
  }
  if ( (*((_DWORD *)v11 + 7) & 3) != 0 )
  {
    v16 = VIDMM_GLOBAL::PageInFaultedAllocation(
            v7,
            *((struct VIDMM_ALLOC **)a2 + 32),
            a3,
            a4,
            (struct VIDMM_ALLOC **)a5);
LABEL_37:
    v8 = v16;
    if ( v16 < 0 )
      goto LABEL_39;
  }
  *((_QWORD *)a2 + 32) = 0LL;
LABEL_8:
  for ( i = 0; i < 3; ++i )
  {
    v13 = (_QWORD *)*v5;
    while ( v13 != v5 )
    {
      v11 = (VIDMM_GLOBAL ***)(v13 - 7);
      v13 = (_QWORD *)*v13;
      if ( i )
      {
        if ( i != 1 )
          goto LABEL_15;
        this = **v11;
        if ( *((_DWORD *)this + 98) >= 0xA0000000 )
          goto LABEL_15;
      }
      else
      {
        this = **v11;
        if ( (*((_DWORD *)this + 17) & 0x40) == 0 )
        {
LABEL_15:
          this = **v11;
          if ( *((_DWORD *)this + 28) == 1 )
          {
            v8 = VIDMM_GLOBAL::PageInFaultedAllocation(
                   v18,
                   (struct VIDMM_ALLOC *)v11,
                   v19,
                   v20,
                   (struct VIDMM_ALLOC **)a5);
            if ( v8 < 0 )
              goto LABEL_17;
          }
        }
      }
    }
    v14 = (_QWORD *)*v5;
    while ( v14 != v5 )
    {
      v11 = (VIDMM_GLOBAL ***)(v14 - 7);
      v14 = (_QWORD *)*v14;
      if ( i )
      {
        if ( i != 1 )
          goto LABEL_24;
        this = **v11;
        if ( *((_DWORD *)this + 98) >= 0xA0000000 )
          goto LABEL_24;
      }
      else
      {
        this = **v11;
        if ( (*((_DWORD *)this + 17) & 0x40) == 0 )
        {
LABEL_24:
          v8 = VIDMM_GLOBAL::PageInFaultedAllocation(
                 v18,
                 (struct VIDMM_ALLOC *)v11,
                 v19,
                 v20,
                 (struct VIDMM_ALLOC **)a5);
          if ( v8 < 0 )
            goto LABEL_17;
        }
      }
    }
  }
  if ( v8 >= 0 )
    goto LABEL_28;
LABEL_17:
  v7 = v18;
LABEL_39:
  if ( (*((_DWORD *)v11 + 7) & 3) == 2 )
    VIDMM_GLOBAL::FaultOneAllocation(v7, (VIDMM_DEVICE **)v11);
  else
    VIDMM_DEVICE::FaultCommitment(this, (struct VIDMM_ALLOC *)v11);
  *((_QWORD *)a2 + 32) = *a5;
LABEL_28:
  if ( v10 )
  {
    ExReleasePushLockSharedEx(v10 + 776, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v8;
}
