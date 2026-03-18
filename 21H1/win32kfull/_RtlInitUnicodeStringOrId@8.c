/*
 * XREFs of _RtlInitUnicodeStringOrId@8 @ 0xABF7C
 * Callers:
 *     _xxxLoadSysMenu@4 @ 0x1D24C (_xxxLoadSysMenu@4.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxUpdateSystemIconsFromRegistry@4 @ 0xD8AEE (_xxxUpdateSystemIconsFromRegistry@4.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DF2 (-xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YGXXZ @ 0x148BFC (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YGXXZ.c)
 *     ?xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z @ 0x1A3018 (-xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitUnicodeStringOrId(PUNICODE_STRING DestinationString, WCHAR *SourceString)
{
  if ( ((unsigned int)SourceString & 0xFFFF0000) != 0 )
  {
    RtlInitUnicodeString(DestinationString, SourceString);
  }
  else
  {
    DestinationString->Buffer = SourceString;
    *(_DWORD *)&DestinationString->Length = 0;
  }
}
