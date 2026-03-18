/*
 * XREFs of ZwCreateNamedPipeFile @ 0x1403F4C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateNamedPipeFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
