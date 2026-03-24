/*
 * XREFs of ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C006EFB8
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C02BC780 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 * Callees:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z @ 0x1C006EDE4 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006F200 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006F2D4 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C006F380 (-Update@RollingStats@@IEAAXXZ.c)
 */

bool __fastcall TrackedWorkloadMonitor::GetTargetPowerLevel(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v5; // r15
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // r12d
  int v11; // ebp
  int v12; // edi
  unsigned int v13; // ecx
  int v14; // ecx
  bool result; // al
  unsigned int v16; // ecx
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v18; // [rsp+70h] [rbp+18h]

  v18 = a3;
  v5 = 0;
  v8 = 5LL * *((unsigned int *)this + 54);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *((_DWORD *)this + 10 * *((unsigned int *)this + 54) + 10);
  v11 = *((_DWORD *)this + 10 * *((unsigned int *)this + 54) + 4);
  v12 = v11;
  v13 = *((_DWORD *)a2 + 6);
  v17 = v10;
  if ( v9 < v13 )
  {
    if ( v11 == 1 )
      goto LABEL_33;
    if ( v11 != 2 )
      return 0;
  }
  switch ( v11 )
  {
    case 1:
LABEL_33:
      if ( *((_DWORD *)this + 2 * v8 + 11) || v9 < v13 )
        goto LABEL_20;
      RollingStats::Update(a2);
      *((_QWORD *)this + v8 + 3) = *((_QWORD *)a2 + 4);
      RollingStats::Update(a2);
      *((_QWORD *)this + v8 + 4) = *((_QWORD *)a2 + 5);
      *((_DWORD *)this + 2 * v8 + 10) = v10;
      goto LABEL_36;
    case 2:
      v16 = 100;
      v12 = 1;
      if ( *(_DWORD *)this )
        v16 = *(_DWORD *)this;
      v17 = v16;
      goto LABEL_39;
    case 3:
LABEL_12:
      if ( !*((_DWORD *)this + 2 * v8 + 11) )
      {
        v12 = 6;
LABEL_39:
        TrackedWorkloadMonitor::ChangeState((__int64)this, v12, a2, v17);
        goto LABEL_22;
      }
      goto LABEL_20;
  }
  if ( v11 <= 3 )
    goto LABEL_20;
  if ( v11 <= 5 )
  {
    if ( !*((_BYTE *)this + 8 * v8 + 49) && TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
    {
      v12 = 4;
LABEL_27:
      v5 = 1;
LABEL_37:
      if ( v12 != v11 || v5 )
        goto LABEL_39;
      goto LABEL_20;
    }
    if ( *((_DWORD *)this + 2 * v8 + 11) )
      goto LABEL_20;
LABEL_36:
    v12 = 6;
    goto LABEL_37;
  }
  if ( v11 != 6 )
  {
    if ( v11 != 7 )
      goto LABEL_20;
    v17 = 100;
    goto LABEL_12;
  }
  if ( !*((_BYTE *)this + 8 * v8 + 49) && TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
  {
    v12 = 4;
    goto LABEL_39;
  }
  if ( TrackedWorkloadMonitor::ShouldDecreasePower(this, a2, &v17) )
  {
    v12 = 5;
    goto LABEL_39;
  }
  if ( !*((_DWORD *)this + 2 * v8 + 11) )
    goto LABEL_27;
LABEL_20:
  v14 = *((_DWORD *)this + 2 * v8 + 11);
  if ( v14 )
    *((_DWORD *)this + 2 * v8 + 11) = v14 - 1;
LABEL_22:
  if ( v10 != v17 )
  {
    *a4 = v17;
    result = 1;
    *v18 = v10;
    return result;
  }
  return 0;
}
