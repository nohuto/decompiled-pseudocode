/*
 * XREFs of _GetAppCompatFlags2ForPti@8 @ 0xEFB45
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 * Callees:
 *     <none>
 */

int __fastcall GetAppCompatFlags2ForPti(int a1, unsigned __int16 a2)
{
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 340) )
    return *(_DWORD *)(a1 + 352);
  else
    return 0;
}
