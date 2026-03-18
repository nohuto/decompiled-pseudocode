/*
 * XREFs of ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8
 * Callers:
 *     ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752 (-CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z.c)
 *     ?xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x3D2F0 (-xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _NtUserPostMessage@16 @ 0x6D25E (_NtUserPostMessage@16.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     _NtUserPostThreadMessage@16 @ 0x82578 (_NtUserPostThreadMessage@16.c)
 *     __PostMessageCheckIL@20 @ 0x14EADF (__PostMessageCheckIL@20.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YGPAPAXPAUtagWND@@@Z @ 0x7FF2A (-GetWindowMessageFilter@@YGPAPAXPAUtagWND@@@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAllowedByFilterEx@@YGHPBQAXIPAPAPAX1@Z @ 0x9C710 (-IsMessageAllowedByFilterEx@@YGHPBQAXIPAPAPAX1@Z.c)
 */

int __userpurge IsMessageAllowedAcrossILByReceiver@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESSINFO *a3,
        struct tagPROCESSINFO *a4,
        struct tagWND *a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v10; // edi
  void ***v12; // [esp+0h] [ebp-10h]
  struct tagWND *v13; // [esp+0h] [ebp-10h]
  void ***v14; // [esp+0h] [ebp-10h]
  void ***v15; // [esp+4h] [ebp-Ch]
  void ***v16; // [esp+4h] [ebp-Ch]

  v10 = IsMessageAllowedByFilterEx(0, 0, v12, v15);
  if ( v10 )
  {
    MSGSQMAddMessage(a2, a1, a4, a5, a6, a7, 3);
  }
  else if ( a3 )
  {
    GetWindowMessageFilter(v13);
    v10 = IsMessageAllowedByFilterEx(0, 0, v14, v16);
    if ( v10 )
      MSGSQMAddMessage(a2, a1, a4, a5, a6, a7, 4);
  }
  return v10;
}
