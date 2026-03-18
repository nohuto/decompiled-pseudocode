/*
 * XREFs of ?MsgSQMGetMsgRecord@@YGPAUtagMSGSQM_MSGRECORD@@PAPAU1@PBU1@K@Z @ 0x180E96
 * Callers:
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 * Callees:
 *     ?MsgSQMCompareMsgRecords@@YGHPBUtagMSGSQM_MSGRECORD@@0@Z @ 0x180C4F (-MsgSQMCompareMsgRecords@@YGHPBUtagMSGSQM_MSGRECORD@@0@Z.c)
 */

struct tagMSGSQM_MSGRECORD *__userpurge MsgSQMGetMsgRecord@<eax>(
        _DWORD *a1@<edx>,
        _DWORD **a2@<ecx>,
        struct tagMSGSQM_MSGRECORD **a3,
        const struct tagMSGSQM_MSGRECORD *a4,
        unsigned int a5)
{
  _DWORD *v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  bool v9; // zf

  v6 = 0;
  v7 = *a2;
  if ( !*a2 )
    goto LABEL_6;
  while ( 1 )
  {
    v8 = MsgSQMCompareMsgRecords(v7, a1);
    v9 = v8 == 0;
    if ( v8 >= 0 )
      break;
    v6 = v7;
    v7 = (_DWORD *)*v7;
    if ( !v7 )
    {
      v9 = v8 == 0;
      break;
    }
  }
  if ( !v9 )
  {
LABEL_6:
    v7 = (_DWORD *)Win32AllocPoolZInit(32, 1937077077);
    if ( v7 )
    {
      v7[1] = a1[1];
      v7[2] = a1[2];
      v7[3] = a1[3];
      v7[4] = 0;
      v7[5] = a3;
      v7[6] = 0;
      v7[7] = 0;
      if ( v6 )
      {
        *v7 = *v6;
        *v6 = v7;
      }
      else
      {
        *v7 = *a2;
        *a2 = v7;
      }
    }
  }
  return (struct tagMSGSQM_MSGRECORD *)v7;
}
