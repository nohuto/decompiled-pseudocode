/*
 * XREFs of ?reset@?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ @ 0x180236F50
 * Callers:
 *     ??1TaskFlowImmersiveShellBroker@@UEAA@XZ @ 0x18022F530 (--1TaskFlowImmersiveShellBroker@@UEAA@XZ.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18023420C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset(char *a1)
{
  char result; // al

  result = *a1;
  *a1 = 0;
  if ( result )
    return CDPShutdown();
  return result;
}
