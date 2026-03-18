/*
 * XREFs of ?SpbApc@@YGXPAX00@Z @ 0x17E1AA
 * Callers:
 *     <none>
 * Callees:
 *     _GreSaveScreenBits@16 @ 0x1FD449 (_GreSaveScreenBits@16.c)
 */

void __stdcall SpbApc(void *a1, void *a2, void *a3)
{
  EnterCrit(0, 1);
  if ( a2 )
    HMAssignmentUnlock(&a2);
  if ( a3 )
    GreSaveScreenBits(a3, 0);
  UserSessionSwitchLeaveCrit();
}
