/*
 * XREFs of ?_FindQMsgFromMsg@@YGHQAUtagTHREADINFO@@QAUtagMSG@@PAPAUtagQMSG@@@Z @ 0x14DE52
 * Callers:
 *     ?_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z @ 0x14DECE (-_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __userpurge _FindQMsgFromMsg@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *const a3,
        struct tagMSG *const a4,
        struct tagQMSG **a5)
{
  _DWORD *v5; // ecx

  v5 = *(_DWORD **)(*(_DWORD *)(a2 + 236) + 12);
  if ( v5 )
  {
    while ( v5[2] != *a1
         || v5[3] != a1[1]
         || v5[4] != a1[2]
         || v5[9] != a1[3]
         || v5[6] != a1[4]
         || v5[7] != a1[5]
         || v5[8] != a1[6] )
    {
      if ( (v5[16] & 0x100) == 0 )
      {
        v5 = (_DWORD *)*v5;
        if ( v5 )
          continue;
      }
      goto LABEL_11;
    }
    if ( (v5[16] & 0x100) == 0 )
      v5 = (_DWORD *)*v5;
    *(_DWORD *)a3 = v5;
    return 1;
  }
  else
  {
LABEL_11:
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
}
