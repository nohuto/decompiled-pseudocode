/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1403F4250
 * Callers:
 *     RtlpGetNormalization @ 0x1409171A0 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
