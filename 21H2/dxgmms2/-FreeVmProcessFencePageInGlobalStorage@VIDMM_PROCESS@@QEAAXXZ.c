/*
 * XREFs of ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00E14B0
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C008245C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C00A7084 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(VIDMM_PROCESS *this)
{
  __int64 v2; // rcx
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 424LL) & 0x100) == 0 )
  {
    WdLogSingleEntry1(1LL, 1417LL);
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  for ( i = (_QWORD *)((char *)this + 48);
        (_QWORD *)*i != i;
        VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)(*i - 16LL)) )
  {
    ;
  }
}
