/*
 * XREFs of KiGetLdtr @ 0x140AD1FF0
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AB9010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
