/*
 * XREFs of ?MsgSQMWriteOutMsgRecord@@YGXPBUtagMSGSQM_PROCESSSQMINFO@@0PAUtagMSGSQM_BASERECORD@@KKIPBG@Z @ 0x1810F8
 * Callers:
 *     ?MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z @ 0x180C8E (-MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __userpurge MsgSQMWriteOutMsgRecord(
        int a1@<edx>,
        int a2@<ecx>,
        const struct tagMSGSQM_PROCESSSQMINFO *a3,
        const struct tagMSGSQM_PROCESSSQMINFO *a4,
        struct tagMSGSQM_BASERECORD *a5,
        unsigned int a6,
        const wchar_t *a7,
        unsigned int a8,
        const unsigned __int16 *a9)
{
  const wchar_t *v11; // edx
  const wchar_t *v12; // eax
  int v13; // eax
  const wchar_t *v14; // eax
  int v15; // eax
  _DWORD v16[56]; // [esp+Ch] [ebp-E4h] BYREF

  memset(v16, 0, sizeof(v16));
  v11 = L"(null)";
  v16[0] = 16;
  if ( !a2 || (v12 = (const wchar_t *)a2, !*(_WORD *)a2) )
    v12 = L"(null)";
  v16[2] = v12;
  v16[6] = *(_DWORD *)(a2 + 32);
  v16[10] = *(_DWORD *)(a2 + 36);
  v13 = *(_DWORD *)(a2 + 40);
  v16[1] = 2;
  v16[4] = 16;
  v16[5] = 1;
  v16[8] = 16;
  v16[9] = 1;
  v16[12] = 16;
  v16[14] = v13;
  v16[13] = 1;
  v16[16] = 16;
  if ( !a1 || (v14 = (const wchar_t *)a1, !*(_WORD *)a1) )
    v14 = L"(null)";
  v16[18] = v14;
  v16[22] = *(_DWORD *)(a1 + 32);
  v16[26] = *(_DWORD *)(a1 + 36);
  v15 = *(_DWORD *)(a1 + 40);
  v16[21] = 1;
  v16[25] = 1;
  v16[29] = 1;
  v16[30] = v15;
  v16[17] = 2;
  v16[20] = 16;
  v16[34] = *(_DWORD *)a3;
  v16[38] = *((unsigned __int16 *)a3 + 2);
  v16[42] = *((unsigned __int16 *)a3 + 3);
  v16[46] = a4;
  v16[24] = 16;
  v16[28] = 16;
  v16[32] = 16;
  v16[33] = 1;
  v16[36] = 16;
  v16[37] = 1;
  v16[40] = 16;
  v16[41] = 1;
  v16[44] = 16;
  v16[45] = 1;
  v16[48] = 16;
  v16[50] = a5;
  v16[49] = 1;
  v16[52] = 16;
  if ( a7 )
  {
    if ( *a7 )
      v11 = a7;
    v16[54] = v11;
    v16[53] = 2;
  }
  else
  {
    v16[54] = a6;
    v16[55] = 0;
    v16[53] = 3;
  }
  WinSqmAddToStreamEx(_gSqmSession, (a7 != 0) + 6266, 14, v16, 0);
}
