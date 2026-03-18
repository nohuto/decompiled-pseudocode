/*
 * XREFs of ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C021DC20
 * Callers:
 *     MSGSQMAddMessage @ 0x1C001A558 (MSGSQMAddMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MsgSQMUpdateMsgRecord(struct tagMSGSQM_MSGRECORD *a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 result; // rax

  v2 = *((_QWORD *)a1 + 4);
  v4 = v2 + (unsigned int)(a2 - *((_DWORD *)a1 + 7));
  if ( v4 < v2 )
    return 0LL;
  v5 = *((_DWORD *)a1 + 6);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
    return 0LL;
  *((_QWORD *)a1 + 4) = v4;
  result = 1LL;
  *((_DWORD *)a1 + 6) = v6;
  *((_DWORD *)a1 + 7) = a2;
  return result;
}
