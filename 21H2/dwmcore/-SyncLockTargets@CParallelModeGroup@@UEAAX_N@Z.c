/*
 * XREFs of ?SyncLockTargets@CParallelModeGroup@@UEAAX_N@Z @ 0x1801BFE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CParallelModeGroup::SyncLockTargets(CParallelModeGroup *this, char a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  while ( v2 != v4 )
  {
    v5 = *v2;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 64LL))(*v2);
    LOBYTE(v6) = a2;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, v6, 1LL);
    ++v2;
  }
}
