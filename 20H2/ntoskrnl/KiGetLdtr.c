/*
 * XREFs of KiGetLdtr @ 0x140A13F70
 * Callers:
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409FB010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
