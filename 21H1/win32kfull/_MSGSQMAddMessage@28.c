/*
 * XREFs of _MSGSQMAddMessage@28 @ 0x7FF98
 * Callers:
 *     ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752 (-CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z.c)
 *     ?xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x3D2F0 (-xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _NtUserPostMessage@16 @ 0x6D25E (_NtUserPostMessage@16.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _NtUserPostThreadMessage@16 @ 0x82578 (_NtUserPostThreadMessage@16.c)
 *     __PostMessageCheckIL@20 @ 0x14EADF (__PostMessageCheckIL@20.c)
 * Callees:
 *     ?MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z @ 0x180C8E (-MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YGPAUtagMSGSQM_MSGRECORD@@PAPAU1@PBU1@K@Z @ 0x180E96 (-MsgSQMGetMsgRecord@@YGPAUtagMSGSQM_MSGRECORD@@PAPAU1@PBU1@K@Z.c)
 *     ?MsgSQMGetParamMessage@@YGHIIJPAI@Z @ 0x180F17 (-MsgSQMGetParamMessage@@YGHIIJPAI@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z @ 0x180F65 (-MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YGHPAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x181096 (-MsgSQMUpdateMsgRecord@@YGHPAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 */

int __fastcall MSGSQMAddMessage(int a1, int a2, int a3, int a4, unsigned int a5, int a6, __int16 a7)
{
  int v7; // ebx
  int v8; // ecx
  unsigned __int64 v9; // rax
  struct tagMSGSQM_MSGRECORD **v10; // esi
  int v11; // edi
  unsigned int v12; // edx
  struct tagMSGSQM_MSGRECORD *v13; // ecx
  struct tagPROCESSINFO *v14; // edi
  struct tagMSGSQM_MSGRECORD *v15; // ecx
  struct tagPROCESSINFO *v17; // [esp+0h] [ebp-44h]
  int v18; // [esp+0h] [ebp-44h]
  const struct tagMSGSQM_MSGRECORD *v19; // [esp+0h] [ebp-44h]
  unsigned int v20; // [esp+0h] [ebp-44h]
  struct tagPROCESSINFO *v21; // [esp+0h] [ebp-44h]
  unsigned int v22; // [esp+0h] [ebp-44h]
  int v23; // [esp+4h] [ebp-40h]
  unsigned int *v24; // [esp+4h] [ebp-40h]
  unsigned int v25; // [esp+4h] [ebp-40h]
  unsigned int v26; // [esp+4h] [ebp-40h]
  struct tagMSGSQM_MSGRECORD *v27; // [esp+4h] [ebp-40h]
  unsigned int v28; // [esp+4h] [ebp-40h]
  _DWORD v29[10]; // [esp+10h] [ebp-34h] BYREF
  int v30; // [esp+38h] [ebp-Ch]
  int v31; // [esp+3Ch] [ebp-8h]

  v7 = MEMORY[0xFFDF0004];
  v31 = a1;
  v29[9] = a2;
  v30 = MEMORY[0xFFDF0004];
  memset(v29, 0, 0x20u);
  v8 = 0;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v11 = MEMORY[0xFFDF0324];
    v12 = MEMORY[0xFFDF0320];
    v8 = -2161880;
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v11 = MEMORY[0xFFDF0324];
        v12 = MEMORY[0xFFDF0320];
        v8 = -2161880;
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v7 = v30;
    }
    v9 = (unsigned int)v7 * (unsigned __int64)v12;
    v10 = (struct tagMSGSQM_MSGRECORD **)(v7 * (v11 << 8) + (v9 >> 24));
  }
  else
  {
    LODWORD(v9) = MEMORY[0xFFDF0004] * MEMORY[0xFFDF0320];
    v10 = (struct tagMSGSQM_MSGRECORD **)(((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24);
  }
  if ( gfWinMsgSQMIsOptedIn )
  {
    LODWORD(v9) = MsgSQMGetSourceListProcessPair((struct tagPROCESSINFO *)v8, v17, v23);
    if ( (_DWORD)v9 )
    {
      v29[1] = a3;
      LOWORD(v29[2]) = a6 != 0;
      HIWORD(v29[2]) = a7;
      MsgSQMGetParamMessage(a5, (unsigned int)&v29[3], v18, v24);
      LODWORD(v9) = MsgSQMGetMsgRecord(v10, v19, v25);
      v14 = (struct tagPROCESSINFO *)v9;
      if ( (_DWORD)v9 )
      {
        LODWORD(v9) = MsgSQMUpdateMsgRecord(v13, v20, v26);
        if ( !(_DWORD)v9 )
        {
          MsgSQMFlushMsgRecord(v14, v21, v27);
          LODWORD(v9) = MsgSQMUpdateMsgRecord(v15, v22, v28);
        }
      }
    }
  }
  return v9;
}
