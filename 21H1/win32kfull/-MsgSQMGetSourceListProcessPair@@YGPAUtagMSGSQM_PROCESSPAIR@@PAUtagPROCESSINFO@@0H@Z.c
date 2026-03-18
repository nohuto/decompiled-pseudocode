/*
 * XREFs of ?MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z @ 0x180F65
 * Callers:
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 * Callees:
 *     ?MsgSQMAddTargetNode@@YGHPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180BB2 (-MsgSQMAddTargetNode@@YGHPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMCleanupMsgCache@@YGXPAUtagPROCESSINFO@@@Z @ 0x180BED (-MsgSQMCleanupMsgCache@@YGXPAUtagPROCESSINFO@@@Z.c)
 *     ?MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z @ 0x180E40 (-MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z.c)
 */

struct tagMSGSQM_PROCESSPAIR *__userpurge MsgSQMGetSourceListProcessPair@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESSINFO *a3,
        struct tagPROCESSINFO *a4,
        int a5)
{
  struct tagMSGSQM_PROCESSPAIR *result; // eax
  char *v7; // eax
  char *v8; // edi
  char *v9; // ecx
  char **v10; // esi
  char **v11; // eax
  _DWORD *v12; // ecx
  char **v13; // eax
  struct tagPROCESSINFO *v14; // [esp+0h] [ebp-8h]
  _DWORD *v15; // [esp+4h] [ebp-4h]

  result = MsgSQMGetMsgCache(v14, a2);
  if ( result )
  {
    v7 = (char *)result + 44;
    v8 = v7;
    if ( *(char **)v7 != v7 )
    {
      v9 = (char *)*((_DWORD *)v7 + 1);
      if ( *((_DWORD *)v9 + 5) > a1 )
      {
        v8 = *(char **)v7;
        do
        {
          v9 = v8;
          if ( *((_DWORD *)v8 + 5) >= a1 )
            break;
          v8 = *(char **)v8;
        }
        while ( v8 != v7 );
      }
      v10 = a1 == *((_DWORD *)v9 + 5) ? (char **)v9 : 0;
      if ( v10 )
        goto LABEL_15;
    }
    v11 = (char **)Win32AllocPoolZInit(28, 1937077077);
    v10 = v11;
    if ( v11 )
    {
      if ( !MsgSQMAddTargetNode(a1, v11) )
      {
        Win32FreePool(v10);
        v10 = 0;
      }
      v12 = v15;
      if ( v10 )
      {
        v10[4] = (char *)v15;
        v13 = (char **)*((_DWORD *)v8 + 1);
        if ( *v13 != v8 )
          __fastfail(3u);
        *v10 = v8;
        v10[1] = (char *)v13;
        *v13 = (char *)v10;
        *((_DWORD *)v8 + 1) = v10;
      }
    }
    else
    {
LABEL_15:
      v12 = v15;
    }
    MsgSQMCleanupMsgCache(v12);
    return (struct tagMSGSQM_PROCESSPAIR *)v10;
  }
  return result;
}
