/*
 * XREFs of _xxxDDETrackSendHook@16 @ 0x180600
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z @ 0x17E9C1 (-FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z.c)
 *     ?NewConversation@@YGHPAPAUtagDDECONV@@0PAUtagWND@@1@Z @ 0x17EA9A (-NewConversation@@YGHPAPAUtagDDECONV@@0PAUtagWND@@1@Z.c)
 *     _xxxMessageEvent@24 @ 0x1A4CAC (_xxxMessageEvent@24.c)
 */

BOOL __fastcall xxxDDETrackSendHook(struct tagDDECONV **a1, int a2, int a3, unsigned int a4)
{
  int v6; // eax
  struct tagDDECONV **v7; // edi
  struct tagDDECONV *DdeConv; // eax
  int v10; // edx
  int v11; // ecx
  struct tagINTDDEINFO *v12; // [esp+0h] [ebp-3Ch]
  struct tagWND *v13; // [esp+4h] [ebp-38h]
  _DWORD v14[11]; // [esp+Ch] [ebp-30h] BYREF
  struct tagWND *v15; // [esp+38h] [ebp-4h] BYREF

  v15 = 0;
  if ( (MonitorFlags & 0x2000000) != 0 )
  {
    v14[0] = (unsigned __int16)a4;
    v14[1] = HIWORD(a4);
    memset(&v14[2], 0, 36);
    xxxMessageEvent(a3, a4, 0x2000000, v14);
  }
  if ( *(_DWORD *)(_gptiCurrent + 232) == *((_DWORD *)a1[2] + 58) )
    return 1;
  if ( a2 == 996 )
  {
    v6 = ValidateHwnd(a3);
    v7 = (struct tagDDECONV **)v6;
    if ( v6 )
    {
      DdeConv = FindDdeConv(v6, (int)a1);
      if ( DdeConv )
      {
        AnticipatePost((int)DdeConv, 0, 0, 0, 0, v12, (unsigned int)v13);
        _PostMessage((int)v7, 993, (int)*a1, 0);
      }
      else if ( NewConversation((struct tagWND **)&a4, &v15, a1, v7, v12, v13) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_qq(v11, v10, 0xEu, 10, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, (char)*a1, a3);
        }
        return 1;
      }
    }
    return 0;
  }
  return a2 == 992;
}
