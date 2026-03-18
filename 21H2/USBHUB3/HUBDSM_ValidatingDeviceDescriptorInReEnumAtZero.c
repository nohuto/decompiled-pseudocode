/*
 * XREFs of HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C001EA60
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C00298EC (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 */

__int64 __fastcall HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero(__int64 a1)
{
  return HUBDTX_ValidateFirstDeviceDescriptorFor20(*(_QWORD *)(a1 + 960));
}
