/*
 * XREFs of _xxxDDETrackPostHook@20 @ 0x18033E
 * Callers:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _NtUserfnSENTDDEMSG@28 @ 0x16D4C6 (_NtUserfnSENTDDEMSG@28.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z @ 0x17E9C1 (-FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z.c)
 *     ?NewConversation@@YGHPAPAUtagDDECONV@@0PAUtagWND@@1@Z @ 0x17EA9A (-NewConversation@@YGHPAPAUtagDDECONV@@0PAUtagWND@@1@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 *     ?xxxFreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17F7F9 (-xxxFreeListFree@@YGXPAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxClientGetDDEHookData@12 @ 0x19445B (_xxxClientGetDDEHookData@12.c)
 *     _xxxMessageEvent@24 @ 0x1A4CAC (_xxxMessageEvent@24.c)
 */

int __fastcall xxxDDETrackPostHook(struct tagDDECONV **a1, struct tagDDECONV **a2, struct tagWND *a3, int *a4, int a5)
{
  int v5; // ebx
  struct tagDDECONV *DdeConv; // esi
  unsigned int *v7; // edi
  struct tagDDECONV *v8; // ecx
  int *v9; // edx
  struct tagDDECONV **v10; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  int *v19; // [esp+0h] [ebp-54h]
  struct tagDDECONV *v20; // [esp+4h] [ebp-50h]
  _DWORD v21[11]; // [esp+10h] [ebp-44h] BYREF
  int v22; // [esp+3Ch] [ebp-18h] BYREF
  struct tagDDECONV *v23; // [esp+40h] [ebp-14h]
  int v24; // [esp+44h] [ebp-10h]
  int v25; // [esp+48h] [ebp-Ch]
  struct tagDDECONV **v26; // [esp+4Ch] [ebp-8h]
  struct tagDDECONV **v27; // [esp+50h] [ebp-4h]

  v27 = a2;
  v26 = a1;
  v22 = 0;
  v5 = 0;
  DdeConv = 0;
  v23 = 0;
  v24 = 0;
  v25 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v25 & MonitorFlags) != 0 )
  {
    memset(v21, 0, sizeof(v21));
    v7 = (unsigned int *)v26;
    v8 = *v26;
    if ( *v26 == (struct tagDDECONV *)994
      || (unsigned int)v8 > 0x3E3
      && ((unsigned int)v8 <= 0x3E5 || (unsigned int)v8 > 0x3E6 && (unsigned int)v8 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v21);
      v9 = a4;
    }
    else
    {
      v9 = a4;
      v21[0] = *(unsigned __int16 *)a4;
      v21[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent(a3, *v9, v25, v21);
  }
  else
  {
    v7 = (unsigned int *)a1;
  }
  if ( *(_DWORD *)(_gptiCurrent + 232) == *((_DWORD *)v27[2] + 58) )
    return 2;
  if ( *v7 != 992 )
  {
    v10 = (struct tagDDECONV **)ValidateHwnd(a3);
    v26 = v10;
    if ( v10 )
    {
      DdeConv = FindDdeConv((int)v10, (int)v27);
      a3 = DdeConv;
      if ( DdeConv
        || *v7 != 993
        && (*((_BYTE *)v26[2] + 264) & 2) != 0
        && v27[3] == v26[3]
        && (NewConversation(0, &a3, v26, v27, (struct tagWND *)v19, v20), (DdeConv = a3) != 0) )
      {
        if ( a5 && *(_DWORD *)(*((_DWORD *)DdeConv + 4) + 28) && (*((_DWORD *)v26[2] + 88) & 0x40000) == 0 )
          return v5;
        if ( _gptiCurrent != *((_DWORD *)DdeConv + 2) && *(_WORD *)(_gptiCurrent + 340) != 1024 )
        {
          UserSetLastError((struct _NT_TIB *)0x580);
          return v5;
        }
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v22 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v22;
        v23 = DdeConv;
        HMLockObject(DdeConv);
        v13 = (_DWORD *)*((_DWORD *)DdeConv + 9);
        *((_DWORD *)DdeConv + 9) = 0;
        xxxFreeListFree(v13);
        if ( (*(_BYTE *)(_HMPheFromObject(DdeConv) + 13) & 1) != 0 || *v7 != 993 && (*((_BYTE *)DdeConv + 40) & 6) != 0 )
        {
          v5 = 1;
        }
        else
        {
          v14 = *((_DWORD *)DdeConv + 7);
          if ( v14 )
          {
            v15 = (*(int (__stdcall **)(unsigned int *, int *, struct tagDDECONV *))(v14 + 16))(v7, a4, DdeConv);
          }
          else if ( (*((_BYTE *)DdeConv + 40) & 1) != 0 )
          {
            v15 = xxxUnexpectedServerPost(a4, v7, (unsigned int *)DdeConv, v19, v20);
          }
          else
          {
            v15 = xxxUnexpectedClientPost(a4, (int *)v7, (unsigned int *)DdeConv, v19, v20);
          }
          v5 = v15;
        }
        DdeConv = (struct tagDDECONV *)ThreadUnlock1();
      }
      else
      {
        v5 = *v7 == 993;
      }
    }
    else
    {
      v5 = (*v7 == 993) + 1;
    }
    if ( v5 != 1 || (*(_BYTE *)(_gptiCurrent + 264) & 1) != 0 )
      return v5;
    if ( *(_WORD *)v7 == 994 )
    {
      v16 = 33025;
    }
    else
    {
      if ( *(_WORD *)v7 != 995 )
      {
        if ( *(_WORD *)v7 == 996 )
        {
          v16 = 32769;
          goto LABEL_53;
        }
        if ( *(_WORD *)v7 == 997 )
        {
LABEL_49:
          v16 = 32899;
          goto LABEL_53;
        }
        if ( *(_WORD *)v7 != 998 )
        {
          if ( *(_WORD *)v7 != 999 )
          {
            if ( *(_WORD *)v7 != 1000 )
              return v5;
            v16 = 34816;
            goto LABEL_53;
          }
          goto LABEL_49;
        }
      }
      v16 = 0x8000;
    }
LABEL_53:
    if ( DdeConv )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(14, 12, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      xxxFreeDDEHandle(*a4, (int)DdeConv, (struct tagDDECONV *)v16, v19, (unsigned int)v20);
      return 3;
    }
  }
  return v5;
}
