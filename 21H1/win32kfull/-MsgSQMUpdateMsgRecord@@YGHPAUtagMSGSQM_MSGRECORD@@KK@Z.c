/*
 * XREFs of ?MsgSQMUpdateMsgRecord@@YGHPAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x181096
 * Callers:
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

int __userpurge MsgSQMUpdateMsgRecord@<eax>(
        unsigned int a1@<edx>,
        unsigned int *a2@<ecx>,
        struct tagMSGSQM_MSGRECORD *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // kr00_8
  unsigned int v9; // eax
  int result; // eax
  unsigned int v11; // [esp+0h] [ebp-14h]
  unsigned int *v12; // [esp+4h] [ebp-10h]
  unsigned int v14; // [esp+10h] [ebp-4h] BYREF

  v14 = 0;
  v6 = a1 - a2[5];
  v7 = a2[6];
  v9 = a2[7];
  v8 = v7 + __PAIR64__(v9, v6);
  if ( v7 + __PAIR64__(v9, v6) < __PAIR64__(v9, v7) || (ULongAdd(1, a2[4], (int *)&v14, v11, v12) & 0x80000000) != 0 )
    return 0;
  a2[4] = v14;
  result = 1;
  *((_QWORD *)a2 + 3) = v8;
  a2[5] = a1;
  return result;
}
