/*
 * XREFs of XilCommand_FreeResources @ 0x1C002F25C
 * Callers:
 *     Command_PrepareHardware @ 0x1C006BA58 (Command_PrepareHardware.c)
 *     Command_ReleaseHardware @ 0x1C0074354 (Command_ReleaseHardware.c)
 * Callees:
 *     XilCommand_FreeSecureResources @ 0x1C002F288 (XilCommand_FreeSecureResources.c)
 *     XilCoreCommand_FreeResources @ 0x1C004FD98 (XilCoreCommand_FreeResources.c)
 */

__int64 __fastcall XilCommand_FreeResources(__int64 a1)
{
  _BYTE *v1; // rcx

  v1 = (_BYTE *)(a1 + 136);
  if ( *v1 )
    return XilCommand_FreeSecureResources();
  else
    return XilCoreCommand_FreeResources(v1 + 32);
}
