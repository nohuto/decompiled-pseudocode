/*
 * XREFs of ??0VIDMM_POLICY@@QEAA@XZ @ 0x1C00AE980
 * Callers:
 *     ??0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0011C50 (--0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??0_VIDMM_PROCESS_COMMITMENT_INFO@@QEAA@XZ @ 0x1C0014740 (--0_VIDMM_PROCESS_COMMITMENT_INFO@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

VIDMM_POLICY *__fastcall VIDMM_POLICY::VIDMM_POLICY(VIDMM_POLICY *this)
{
  VIDMM_POLICY *result; // rax

  *(_DWORD *)this &= 0xFFFFFFF8;
  result = this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return result;
}
