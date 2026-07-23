/*
 * XREFs of CmpPostApcRunDown @ 0x14086A2F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpFreeSubordinatePost @ 0x1405FBDE0 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x14065C880 (CmpFreePostBlock.c)
 */

__int64 __fastcall CmpPostApcRunDown(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rcx
  __int16 v5; // ax
  _QWORD *v6; // rdx
  struct _KEVENT *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = (_QWORD *)v2[8];
  if ( (_QWORD *)v3[13] == v3 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v3);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v4 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v4 && ((v5 = *(_WORD *)(v4 + 8), v5 == 332) || v5 == 452) )
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_DWORD *)(*(_QWORD *)(v2[8] + 104LL) + 4LL) = 0;
  }
  else
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_QWORD *)(*(_QWORD *)(v2[8] + 104LL) + 8LL) = 0LL;
  }
  v6 = (_QWORD *)v2[8];
  if ( (_QWORD *)v6[13] == v6 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v6);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v7 = *(struct _KEVENT **)(v2[8] + 8LL);
  if ( v7 )
  {
    KeSetEvent(v7, 0, 0);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(v2[8] + 8LL));
  }
  v8 = v2[2];
  v9 = (_QWORD *)v2[3];
  if ( *(_QWORD **)(v8 + 8) != v2 + 2 || (_QWORD *)*v9 != v2 + 2 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  CmpFreeSubordinatePost((__int64)v2);
  CmpFreePostBlock(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
