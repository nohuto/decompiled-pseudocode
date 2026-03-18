/*
 * XREFs of _UserGetLastError@0 @ 0xAC854
 * Callers:
 *     _NtUserOpenClipboard@8 @ 0x116D0 (_NtUserOpenClipboard@8.c)
 *     _NtUserCloseClipboard@0 @ 0x11D0A (_NtUserCloseClipboard@0.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _lambda_7493114f859391c63e08f81e8f0a9f3f_::operator() @ 0xAC81E (_lambda_7493114f859391c63e08f81e8f0a9f3f_--operator().c)
 *     _NtUserSetCursorPos@8 @ 0xAE922 (_NtUserSetCursorPos@8.c)
 *     _NtUserSendInput@12 @ 0xAF922 (_NtUserSendInput@12.c)
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 *     _NtUserSetClipboardData@12 @ 0x168BC2 (_NtUserSetClipboardData@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

struct _NT_TIB *__stdcall UserGetLastError()
{
  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0;
  else
    return KeGetPcr()->NtTib.Self[1].Self;
}
