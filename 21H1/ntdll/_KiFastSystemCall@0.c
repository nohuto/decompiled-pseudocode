/*
 * XREFs of _KiFastSystemCall@0 @ 0x4B2F4F70
 * Callers:
 *     sub_4B2F4F64 @ 0x4B2F4F64 (sub_4B2F4F64.c)
 * Callees:
 *     <none>
 */

int __stdcall KiFastSystemCall()
{
  __asm { sysenter }
  return KiFastSystemCallRet();
}
