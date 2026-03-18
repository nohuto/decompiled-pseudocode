/*
 * XREFs of MIDL_user_free @ 0x14097CE30
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140737A8C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407BC26C (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
