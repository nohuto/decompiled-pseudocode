/*
 * XREFs of ?_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z @ 0x1C00432AC
 * Callers:
 *     ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C002D748 (-FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxCompanionLibrary::_CreateAndInitialize(FxCompanionLibrary **CompanionLib)
{
  _KEVENT *PoolWithTag; // rax
  FxCompanionLibrary *v3; // rbx

  PoolWithTag = (_KEVENT *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x38uLL, 0x72447846u);
  v3 = (FxCompanionLibrary *)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1].Header.LockNV = 0;
    PoolWithTag[1].Header.WaitListHead.Flink = 0LL;
    KeInitializeEvent(PoolWithTag, SynchronizationEvent, 1u);
    v3->m_RdNonPnPDevice = 0LL;
    v3->m_RdNonPnPFile = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *CompanionLib = v3;
  return v3 == 0LL ? 0xC0000017 : 0;
}
