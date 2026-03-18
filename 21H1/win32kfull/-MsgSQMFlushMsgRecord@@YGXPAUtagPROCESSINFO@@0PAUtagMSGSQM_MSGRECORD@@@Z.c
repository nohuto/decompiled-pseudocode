/*
 * XREFs of ?MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z @ 0x180C8E
 * Callers:
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?MsgSQMFreeMsgList@@YGXPAUtagPROCESSINFO@@0PAPAUtagMSGSQM_MSGRECORD@@@Z @ 0x180DE8 (-MsgSQMFreeMsgList@@YGXPAUtagPROCESSINFO@@0PAPAUtagMSGSQM_MSGRECORD@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 *     ?MsgSQMWriteOutMsgRecord@@YGXPBUtagMSGSQM_PROCESSSQMINFO@@0PAUtagMSGSQM_BASERECORD@@KKIPBG@Z @ 0x1810F8 (-MsgSQMWriteOutMsgRecord@@YGXPBUtagMSGSQM_PROCESSSQMINFO@@0PAUtagMSGSQM_BASERECORD@@KKIPBG@Z.c)
 */

void __userpurge MsgSQMFlushMsgRecord(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3@<ebx>,
        struct tagPROCESSINFO *a4,
        struct tagPROCESSINFO *a5,
        struct tagMSGSQM_MSGRECORD *a6)
{
  struct tagPROCESSINFO *v6; // esi
  BOOL v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebx
  int v11; // ecx
  unsigned int v12; // eax
  struct tagMSGSQM_BASERECORD *v13; // ebx
  int v14; // eax
  const unsigned __int16 *v16; // [esp+0h] [ebp-224h]
  _BYTE v17[512]; // [esp+20h] [ebp-204h] BYREF

  v6 = a4;
  v7 = 0;
  if ( *(_DWORD *)(a2 + 488) || *(_DWORD *)(a1 + 488) )
  {
    v8 = *((_DWORD *)a4 + 4);
    if ( v8 == 1 )
    {
      v9 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v11 = MEMORY[0xFFDF0324];
        if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
        {
          v12 = MEMORY[0xFFDF0320];
        }
        else
        {
          do
          {
            _mm_pause();
            v12 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v6 = a4;
          v7 = 0;
          v9 = MEMORY[0xFFDF0004];
          v11 = MEMORY[0xFFDF0324];
        }
        v10 = MEMORY[0xFFDF0004] * (v11 << 8) + (((unsigned int)v9 * (unsigned __int64)v12) >> 24);
      }
      else
      {
        v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      v13 = (struct tagMSGSQM_BASERECORD *)(v10 - *((_DWORD *)v6 + 5));
    }
    else
    {
      v13 = (struct tagMSGSQM_BASERECORD *)(*((_QWORD *)a4 + 3) / (unsigned __int64)(unsigned int)(v8 - 1));
    }
    v14 = *((unsigned __int16 *)v6 + 2);
    if ( (unsigned __int16)v14 >= 0xC000u )
      v7 = UserGetAtomName(v14, v17, 255) != 0;
    MsgSQMWriteOutMsgRecord(
      (struct tagPROCESSINFO *)((char *)v6 + 4),
      *((const struct tagMSGSQM_PROCESSSQMINFO **)v6 + 4),
      v13,
      *((_DWORD *)v6 + 3),
      v7 ? (unsigned int)v17 : 0,
      a3,
      v16);
  }
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 7) = 0;
}
