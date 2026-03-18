/*
 * XREFs of ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YGXXZ @ 0x148BFC
 * Callers:
 *     ?xxxSwitchCursors@@YGXHH@Z @ 0x148CF8 (-xxxSwitchCursors@@YGXHH@Z.c)
 * Callees:
 *     _RtlInitUnicodeStringOrId@8 @ 0xABF7C (_RtlInitUnicodeStringOrId@8.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 *     _xxxClientLoadImage@28 @ 0xD94BC (_xxxClientLoadImage@28.c)
 */

void Feedback::xxxReplaceMouseCursorsWithPenCursors()
{
  unsigned int v0; // esi
  int v1; // edi
  char *v2; // eax
  int v3; // ecx
  char *Image; // eax
  struct _UNICODE_STRING DestinationString; // [esp+10h] [ebp-8h] BYREF

  v0 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v1 = *(_DWORD *)(_gpsi + 1656);
  do
  {
    v2 = (char *)&unk_25833C;
    if ( !v1 )
      v2 = (char *)&unk_258340;
    RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)*(unsigned __int16 *)&v2[v0 * 4]);
    Image = xxxClientLoadImage(&DestinationString.Length, 2u, 0, 0, 64, v3);
    if ( Image )
      zzzInternalSetSystemCursor((int)Image, dword_258338[v0], (int)&DestinationString, 5);
    v0 += 3;
  }
  while ( v0 < 12 );
  Feedback::gfUsingPenCursors = 1;
}
