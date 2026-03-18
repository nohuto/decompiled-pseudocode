/*
 * XREFs of ?FindQMsgForCoalesce@@YGPAUtagQMSG@@PAUtagMLIST@@IPAUHWND__@@PAU1@@Z @ 0x11C68
 * Callers:
 *     _ProcessSuspendedEventMessage@24 @ 0xADCB2 (_ProcessSuspendedEventMessage@24.c)
 *     _ProcessSuspendedPostMessage@20 @ 0xADCD4 (_ProcessSuspendedPostMessage@20.c)
 * Callees:
 *     <none>
 */

struct tagQMSG *__userpurge FindQMsgForCoalesce@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagMLIST *a3,
        unsigned int a4,
        HWND a5,
        struct tagQMSG *a6)
{
  struct tagQMSG *result; // eax
  int v7; // ecx

  if ( a4 )
    result = *(struct tagQMSG **)(a4 + 4);
  else
    result = *(struct tagQMSG **)(a2 + 4);
  for ( ; result; result = (struct tagQMSG *)*((_DWORD *)result + 1) )
  {
    v7 = *((_DWORD *)result + 15);
    if ( (!v7 || v7 == 9) && *((_DWORD *)result + 3) == a1 && *((struct tagMLIST **)result + 2) == a3 )
      break;
  }
  return result;
}
