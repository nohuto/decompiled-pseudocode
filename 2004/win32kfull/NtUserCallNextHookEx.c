/*
 * XREFs of NtUserCallNextHookEx @ 0x1C0144110
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0045FF4 (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C01441DC (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01F6D70 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F6DC8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01F7060 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C01F7130 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C01F71BC (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01F7220 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01F72A8 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01F7320 (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  struct tagRECT *v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx

  EnterCrit(0LL, 1LL);
  v11 = 0LL;
  v12 = *(_QWORD *)(gptiCurrent + 680LL);
  if ( v12 )
  {
    v9 = *(unsigned int *)(v12 + 48);
    if ( (int)v9 > 7 )
    {
      v18 = v9 - 9;
      if ( !v18 )
      {
        v13 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
        goto LABEL_6;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v9 = (unsigned int)(v20 - 2);
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 != 1 )
              goto LABEL_7;
            v13 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
          }
          else
          {
            v13 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
          }
          goto LABEL_6;
        }
        goto LABEL_11;
      }
      v15 = (struct tagRECT *)a3;
      v16 = a2;
      if ( a1 != 5 )
      {
LABEL_11:
        v13 = xxxCallNextHookEx();
        goto LABEL_6;
      }
      v17 = 5;
    }
    else
    {
      if ( (_DWORD)v9 == 7 )
        goto LABEL_20;
      if ( (_DWORD)v9 == -1 )
      {
LABEL_5:
        v13 = NtUserfnHkINLPMSG(v9, a1, a2, a3);
LABEL_6:
        v11 = v13;
        goto LABEL_7;
      }
      if ( (int)v9 < 0 )
        goto LABEL_7;
      if ( (int)v9 <= 1 )
      {
        v13 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
        goto LABEL_6;
      }
      if ( (_DWORD)v9 == 2 )
        goto LABEL_11;
      if ( (_DWORD)v9 == 3 )
        goto LABEL_5;
      if ( (_DWORD)v9 != 5 )
      {
        if ( (_DWORD)v9 != 6 )
          goto LABEL_7;
        goto LABEL_5;
      }
      if ( a1 )
      {
        if ( a1 == 3 )
        {
          v13 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
          goto LABEL_6;
        }
        if ( a1 == 5 )
        {
          v13 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
          goto LABEL_6;
        }
        if ( a1 != 6 )
          goto LABEL_11;
LABEL_20:
        v13 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_6;
      }
      v15 = (struct tagRECT *)a3;
      v16 = a2;
      v17 = 0;
    }
    v13 = NtUserfnHkINLPRECT(v17, v16, v15);
    goto LABEL_6;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v11;
}
