/*
 * XREFs of MiUnlockStealVm @ 0x1402EA5E4
 * Callers:
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 *     MiUnlockSystemVa @ 0x14027A168 (MiUnlockSystemVa.c)
 *     MiAttachThreadDone @ 0x14027D8DC (MiAttachThreadDone.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall MiUnlockStealVm(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rdi

  result = MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess((_OWORD *)(a1 + 72), 0);
    return MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), a1 + 72);
      return ObfDereferenceObject(v3);
    }
  }
  return result;
}
