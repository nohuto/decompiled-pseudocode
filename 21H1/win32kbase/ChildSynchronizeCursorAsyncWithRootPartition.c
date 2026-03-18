/*
 * XREFs of ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01B12C4
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB080 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B5BD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall ChildSynchronizeCursorAsyncWithRootPartition(_QWORD *a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rbx

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    v3 = MouseProcessor + 3936;
    CPushLock::AcquireLockExclusive((CPushLock *)(MouseProcessor + 3936));
    *(_QWORD *)(v3 + 24) = *a1;
    *(_BYTE *)(v3 + 32) = 1;
    CPushLock::ReleaseLock((CPushLock *)v3);
  }
}
