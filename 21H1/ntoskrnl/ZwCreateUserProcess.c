/*
 * XREFs of ZwCreateUserProcess @ 0x1403F3C30
 * Callers:
 *     RtlpCreateUserProcess @ 0x140A3EC14 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateUserProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
