/*
 * XREFs of _wcsncpycch@12 @ 0xC9046
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 *     _NtUserRemoteConnect@12 @ 0xEB270 (_NtUserRemoteConnect@12.c)
 *     ?xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0CFB (-xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wcsncpycch(_WORD *a1, int a2, int a3)
{
  int v3; // esi
  _WORD *v4; // edi
  int v5; // edx
  __int16 v6; // ax

  v3 = a3;
  v4 = a1;
  if ( a3 )
  {
    v5 = a2 - (_DWORD)a1;
    do
    {
      v6 = *(_WORD *)((char *)a1 + v5);
      *a1++ = v6;
      if ( !v6 )
        break;
      --v3;
    }
    while ( v3 );
  }
  return a1 - v4;
}
