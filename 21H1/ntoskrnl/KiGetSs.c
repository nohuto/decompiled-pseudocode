/*
 * XREFs of KiGetSs @ 0x140A0DF80
 * Callers:
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F5010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetSs()
{
  return __SS__;
}
