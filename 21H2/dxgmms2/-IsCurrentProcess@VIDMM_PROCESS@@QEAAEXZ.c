/*
 * XREFs of ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0014D54
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00A0354 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_PROCESS::IsCurrentProcess(VIDMM_PROCESS *this)
{
  return *(_QWORD *)this == PsGetCurrentProcess();
}
