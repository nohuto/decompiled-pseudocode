/*
 * XREFs of Command_Initialize @ 0x1C00136C8
 * Callers:
 *     Command_D0Entry @ 0x1C000EB18 (Command_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C002D62C (Command_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     XilCoreCommand_Initialize @ 0x1C001340C (XilCoreCommand_Initialize.c)
 *     XilCommand_InitializeSecureResources @ 0x1C002F3E8 (XilCommand_InitializeSecureResources.c)
 */

char __fastcall Command_Initialize(__int64 a1)
{
  char result; // al

  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 136) )
      result = XilCommand_InitializeSecureResources();
    else
      result = XilCoreCommand_Initialize(a1 + 168);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 64) = 1;
  }
  return result;
}
