/*
 * XREFs of ZwCreateUserProcess @ 0x1403F4EC0
 * Callers:
 *     RtlpCreateUserProcess @ 0x140A44478 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateUserProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
