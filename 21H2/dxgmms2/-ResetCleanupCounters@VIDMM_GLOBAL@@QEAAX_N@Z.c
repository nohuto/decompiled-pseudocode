/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C008AC14
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008EC90 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rax

  if ( a2 || *((_QWORD *)this + 577) - *((_QWORD *)this + 896) > qword_1C00503A0 )
  {
    *((_QWORD *)this + 894) = 0LL;
    v2 = *((_QWORD *)this + 577);
    *((_DWORD *)this + 1790) = 0;
    *((_QWORD *)this + 896) = v2;
  }
}
