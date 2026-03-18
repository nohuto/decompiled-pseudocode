/*
 * XREFs of _NtUserCallNextHookEx@16 @ 0x15FE73
 * Callers:
 *     <none>
 * Callees:
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YGJKIPAUtagCBTACTIVATESTRUCT@@@Z @ 0x15F091 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YGJKIPAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YGJIIPAUtagCBT_CREATEWNDW@@H@Z @ 0x15F104 (-NtUserfnHkINLPCBTCREATESTRUCT@@YGJIIPAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YGJKIPAUtagDEBUGHOOKINFO@@@Z @ 0x15F2AE (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YGJKIPAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YGJKIPAUtagKBDLLHOOKSTRUCT@@@Z @ 0x15F33E (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YGJKIPAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YGJKIPAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x15F3B1 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YGJKIPAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YGJHKIPAUtagMSG@@@Z @ 0x15F41A (-NtUserfnHkINLPMSG@@YGJHKIPAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YGJKIPAUtagMSLLHOOKSTRUCT@@@Z @ 0x15F4EF (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YGJKIPAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YGJKIPAUtagRECT@@@Z @ 0x15F561 (-NtUserfnHkINLPRECT@@YGJKIPAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YGJKIPAUtagEVENTMSG@@@Z @ 0x15F5CE (-NtUserfnHkOPTINLPEVENTMSG@@YGJKIPAUtagEVENTMSG@@@Z.c)
 */

size_t __stdcall NtUserCallNextHookEx(int a1, struct tagHOOK *a2, int *a3, unsigned int a4)
{
  size_t v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  struct tagHOOK *v8; // edx
  size_t v9; // eax
  int *v11; // [esp-4h] [ebp-Ch]
  struct tagCBT_CREATEWNDW *v12; // [esp+0h] [ebp-8h]
  struct tagMSG *v13; // [esp+4h] [ebp-4h]

  v4 = 0;
  EnterCrit(0, 1);
  v5 = *(_DWORD *)(_gptiCurrent + 376);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 24);
    v7 = a1;
    switch ( v6 )
    {
      case -1:
      case 3:
      case 6:
        v9 = NtUserfnHkINLPMSG(a1, v6, a2, a3, (unsigned int)v12, v13);
        goto LABEL_21;
      case 0:
      case 1:
        v9 = NtUserfnHkOPTINLPEVENTMSG(a2, a1, a3, (unsigned int)v12, v13);
        goto LABEL_21;
      case 2:
      case 11:
        goto LABEL_7;
      case 5:
        if ( a1 )
        {
          switch ( a1 )
          {
            case 3:
              v9 = NtUserfnHkINLPCBTCREATESTRUCT(a2, 3, (ULONG)a3, a4, v12, (int)v13);
              break;
            case 5:
              v9 = NtUserfnHkINLPCBTACTIVATESTRUCT(a2, 5, (ULONG)a3, (unsigned int)v12, v13);
              break;
            case 6:
LABEL_20:
              v9 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a2, a1, (ULONG)a3, (unsigned int)v12, v13);
              break;
            default:
LABEL_7:
              v11 = a3;
              v8 = a2;
LABEL_8:
              v9 = xxxCallNextHookEx(a1, v8, v11);
              break;
          }
        }
        else
        {
          v11 = a3;
          v8 = a2;
          v7 = 0;
LABEL_12:
          v9 = NtUserfnHkINLPRECT(v8, v7, (ULONG)v11, (unsigned int)v12, (struct tagRECT *)v13);
        }
LABEL_21:
        v4 = v9;
        break;
      case 7:
        goto LABEL_20;
      case 9:
        v9 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a2, a1, (ULONG)a3, (unsigned int)v12, v13);
        goto LABEL_21;
      case 10:
        v8 = a2;
        v11 = a3;
        if ( a1 == 5 )
          goto LABEL_12;
        goto LABEL_8;
      case 13:
        v9 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a2, a1, (ULONG)a3, (unsigned int)v12, v13);
        goto LABEL_21;
      case 14:
        v9 = NtUserfnHkINLPMSLLHOOKSTRUCT(a2, a1, (ULONG)a3, (unsigned int)v12, v13);
        goto LABEL_21;
      default:
        break;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
