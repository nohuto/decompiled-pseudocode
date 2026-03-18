/*
 * XREFs of XilCommand_GetLinkTrbPointer @ 0x1C0015E08
 * Callers:
 *     Command_PrepareHardware @ 0x1C006EBBC (Command_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetLinkTrbPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(_QWORD *)(a1 + 184);
  else
    return *(_QWORD *)(a1 + 192);
}
