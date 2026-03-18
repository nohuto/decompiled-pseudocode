/*
 * XREFs of ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02B50CC
 * Callers:
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02B5274 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 * Callees:
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0008698 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0011DB0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0104248 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02B5450 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _EX_RUNDOWN_REF *DisplayedPrimary; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _EX_RUNDOWN_REF *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  unsigned int v16; // ebx
  ULONG_PTR Count; // rsi
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  ULONG_PTR v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+28h] [rbp-20h]
  _QWORD v24[3]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 12) )
    return 0LL;
  if ( DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v24,
      *(struct DXGDEVICE **)this);
    DisplayedPrimary = (struct _EX_RUNDOWN_REF *)DXGDEVICE::GetDisplayedPrimary(
                                                   *(struct _KTHREAD ***)this,
                                                   *((unsigned int *)this + 2));
    v12 = DisplayedPrimary;
    if ( DisplayedPrimary )
    {
      DxgkReferenceDxgAllocation(DisplayedPrimary);
      Count = v12[1].Count;
      v23 = 0;
      v22 = Count;
      if ( Count != *(_QWORD *)this )
      {
        v18 = 0;
        while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v22) )
        {
          Interval.QuadPart = -160000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( (unsigned int)++v18 >= 0xA )
          {
            v16 = -2147483631;
            v21 = WdLogNewEntry5_WdError(v20, v19);
            *(_QWORD *)(v21 + 24) = Count;
            WdLogEvent5_WdError(v21);
            goto LABEL_15;
          }
        }
      }
      v16 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v12);
LABEL_15:
      ExReleaseRundownProtection(v12 + 11);
      if ( v22 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v22);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v11, v10);
      v14 = 2LL;
      *(_QWORD *)(v13 + 24) = *((unsigned int *)this + 2);
      v15 = (_QWORD *)(v13 + 32);
      do
      {
        *v15++ = *((int *)this + 5);
        --v14;
      }
      while ( v14 );
      WdLogEvent5_WdError(v13);
      v16 = -1071775482;
    }
    if ( v24[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
    return v16;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v8, v7);
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
