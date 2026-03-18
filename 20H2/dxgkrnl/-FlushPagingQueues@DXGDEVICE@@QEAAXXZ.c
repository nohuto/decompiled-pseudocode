/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C00E0FB0
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00E1CF8 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02557C0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C02850C4 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  __int64 v2; // rcx
  _QWORD *i; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v4 + 144) != KeGetCurrentThread() )
    {
      v5 = WdLogNewEntry5_WdAssertion(v2, v4);
      *(_QWORD *)(v5 + 24) = 8073LL;
      WdLogEvent5_WdAssertion(v5);
    }
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 62); i != (_QWORD *)((char *)this + 496) && i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 912LL))(i[4]);
  }
}
