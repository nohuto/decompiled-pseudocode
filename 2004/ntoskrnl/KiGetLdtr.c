/*
 * XREFs of KiGetLdtr @ 0x140A0DF70
 * Callers:
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F5010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
