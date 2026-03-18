/*
 * XREFs of ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D8608
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180059A10 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v1 = *((_QWORD *)this + 630);
  v3 = *(_QWORD *)(v1 + 56);
  if ( v3 )
  {
    v6 = *(_QWORD *)(v1 + 288);
    v7 = *((_QWORD *)this + 629);
    v8 = *(_QWORD *)(v7 + 64);
    v9 = (v8 + (v6 >> 4) - v3) / v6;
    if ( v9 <= 7 )
      v8 = v3 + v6 * v9;
    *(_QWORD *)(v7 + 56) = v8;
    *(_DWORD *)(*((_QWORD *)this + 629) + 44LL) = v9 + *(_DWORD *)(*((_QWORD *)this + 630) + 44LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 629) + 56LL) = *(_QWORD *)(*((_QWORD *)this + 629) + 64LL);
    v4 = *((_QWORD *)this + 629);
    v5 = *(_DWORD *)(v4 + 260);
    if ( v5 )
      *(_DWORD *)(v4 + 44) = v5 + 1;
    else
      *(_DWORD *)(v4 + 44) = *(_DWORD *)(*((_QWORD *)this + 630) + 44LL) + 1;
  }
}
