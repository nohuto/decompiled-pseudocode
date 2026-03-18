/*
 * XREFs of _anonymous_namespace_::State::_State @ 0x180155BA0
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D7C0C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x1800C8A84 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall anonymous_namespace_::State::_State(__int64 a1)
{
  int v2; // eax
  void *v3; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( *(_QWORD *)(a1 + 32) )
    {
      v2 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
      if ( v2 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
  }
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)(a1 + 8), 0);
  CloseThreadpoolWork(*(PTP_WORK *)(a1 + 8));
  v3 = *(void **)(a1 + 40);
  if ( v3 )
  {
    anonymous_namespace_::FramesReport::_FramesReport(*(_QWORD *)(a1 + 40));
    operator delete(v3);
  }
  if ( *(_QWORD *)a1 )
    (***(void (__fastcall ****)(_QWORD, __int64))a1)(*(_QWORD *)a1, 1LL);
}
