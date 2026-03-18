/*
 * XREFs of ZwAlpcConnectPort @ 0x1403F44E0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
