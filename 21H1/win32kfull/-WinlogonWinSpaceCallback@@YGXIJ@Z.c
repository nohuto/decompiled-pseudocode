/*
 * XREFs of ?WinlogonWinSpaceCallback@@YGXIJ@Z @ 0x1474C1
 * Callers:
 *     <none>
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 */

void __stdcall WinlogonWinSpaceCallback(unsigned int a1, int a2)
{
  switch ( a1 )
  {
    case 0xFFFFFFF5:
      PostShellHookMessagesEx(56, 0xEu, 0);
      break;
    case 0xFFFFFFF6:
      PostShellHookMessagesEx(56, 0xCu, 0);
      break;
    case 0xFFFFFFF7:
      PostShellHookMessagesEx(56, 0xAu, 0);
      break;
    case 0xFFFFFFF8:
      PostShellHookMessagesEx(56, 8u, 0);
      break;
  }
}
