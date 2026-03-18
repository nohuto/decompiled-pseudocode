/*
 * XREFs of ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0081D48
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C0344CCC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 * Callees:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedWorkloadStateInfo@@I@Z @ 0x1C0081B58 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedW.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0081FA8 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0082078 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?Update@RollingStats@@QEAAXXZ @ 0x1C0082120 (-Update@RollingStats@@QEAAXXZ.c)
 *     ?ReportState@TrackedWorkloadMonitor@@QEAAXXZ @ 0x1C03458D8 (-ReportState@TrackedWorkloadMonitor@@QEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::GetTargetPowerLevel(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v5; // r15
  unsigned int v8; // eax
  char *v9; // rdi
  unsigned int v10; // ecx
  unsigned int v11; // r12d
  int v12; // esi
  int v13; // ebx
  int v15; // ecx
  unsigned int *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned int *v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v5 = 0;
  v8 = *((_DWORD *)a2 + 5);
  v9 = (char *)this + 40 * *((unsigned int *)this + 56);
  v10 = *((_DWORD *)a2 + 6);
  v11 = *((_DWORD *)v9 + 12);
  v12 = *((_DWORD *)v9 + 6);
  v13 = v12;
  v18 = v11;
  if ( v8 < v10 )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
        return 0;
      goto LABEL_29;
    }
    goto LABEL_32;
  }
  switch ( v12 )
  {
    case 1:
LABEL_32:
      if ( *((_DWORD *)v9 + 14) || v8 < v10 )
        goto LABEL_21;
      RollingStats::Update(a2);
      *((_QWORD *)v9 + 4) = *((_QWORD *)a2 + 4);
      RollingStats::Update(a2);
      v13 = 6;
      *((_QWORD *)v9 + 5) = *((_QWORD *)a2 + 5);
      *((_DWORD *)v9 + 12) = v11;
      goto LABEL_35;
    case 2:
LABEL_29:
      v17 = 100;
      v13 = 1;
      if ( *((_DWORD *)this + 2) )
        v17 = *((_DWORD *)this + 2);
      v18 = v17;
      goto LABEL_37;
    case 3:
      goto LABEL_13;
  }
  if ( v12 <= 3 )
    goto LABEL_21;
  if ( v12 > 5 )
  {
    if ( v12 == 6 )
    {
      if ( v9[61] || !TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v18) )
      {
        if ( TrackedWorkloadMonitor::ShouldDecreasePower(this, a2, &v18) )
        {
          v13 = 5;
        }
        else if ( *((_DWORD *)v9 + 14) )
        {
          goto LABEL_21;
        }
      }
      else
      {
        v13 = 4;
      }
      goto LABEL_37;
    }
    if ( v12 != 7 )
      goto LABEL_21;
    v18 = 100;
LABEL_13:
    if ( *((_DWORD *)v9 + 14) )
      goto LABEL_21;
    v13 = 6;
LABEL_37:
    TrackedWorkloadMonitor::ChangeState((__int64)this, v13, a2, (__int64)(v9 + 24), v18);
    goto LABEL_23;
  }
  if ( v9[61] || !TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v18) )
    goto LABEL_13;
  v13 = 4;
  v5 = 1;
LABEL_35:
  if ( v13 != v12 || v5 )
    goto LABEL_37;
LABEL_21:
  v15 = *((_DWORD *)v9 + 14);
  if ( !v15 )
    goto LABEL_24;
  *((_DWORD *)v9 + 14) = v15 - 1;
LABEL_23:
  TrackedWorkloadMonitor::ReportState(this);
LABEL_24:
  if ( v11 == v18 )
    return 0;
  v16 = v19;
  *a4 = v18;
  *v16 = v11;
  return 1;
}
