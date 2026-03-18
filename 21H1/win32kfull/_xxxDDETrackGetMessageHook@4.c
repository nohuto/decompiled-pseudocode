/*
 * XREFs of _xxxDDETrackGetMessageHook@4 @ 0x180099
 * Callers:
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     _SfnSENTDDEMSG@32 @ 0x1922F9 (_SfnSENTDDEMSG@32.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z @ 0x17E9C1 (-FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YGXPAUtagWND@@@Z @ 0x17F222 (-xxxCleanupDdeConv@@YGXPAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z @ 0x17F3F5 (-xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z.c)
 *     ?xxxFreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17F7F9 (-xxxFreeListFree@@YGXPAUtagFREELIST@@@Z.c)
 *     _FreeDdeXact@4 @ 0x17FF12 (_FreeDdeXact@4.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 *     @HMValidateCatHandleNoSecure@8 @ 0x1B6F10 (@HMValidateCatHandleNoSecure@8.c)
 *     @HMValidateHandleNoRipNoIL@8 @ 0x1B6F70 (@HMValidateHandleNoRipNoIL@8.c)
 */

int __thiscall xxxDDETrackGetMessageHook(int *this)
{
  int v2; // esi
  bool v3; // zf
  int v4; // ecx
  int result; // eax
  void *v6; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v9; // eax
  struct tagDDECONV *DdeConv; // eax
  struct tagDDECONV *v11; // edi
  int v12; // ecx
  PKTHREAD v13; // eax
  int v14; // eax
  _DWORD *v15; // ecx
  int *v16; // ecx
  int v17; // edx
  int v18; // eax
  PKTHREAD v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // edi
  PKTHREAD v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  void *v28; // edi
  void *v29; // edi
  char v30; // [esp-4h] [ebp-3Ch]
  _DWORD v31[3]; // [esp+10h] [ebp-28h] BYREF
  int v32; // [esp+1Ch] [ebp-1Ch] BYREF
  struct tagDDECONV *v33; // [esp+20h] [ebp-18h]
  int v34; // [esp+24h] [ebp-14h]
  _DWORD v35[3]; // [esp+28h] [ebp-10h] BYREF
  void *v36; // [esp+34h] [ebp-4h] BYREF

  v32 = 0;
  LOWORD(v2) = 0;
  v36 = 0;
  v31[2] = 0;
  v3 = this[1] == 993;
  v33 = 0;
  v34 = 0;
  if ( v3 )
  {
    v4 = *this;
    v35[2] = 0;
    result = ValidateHwnd(v4);
    v6 = (void *)result;
    v36 = (void *)result;
    if ( !result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return WPP_RECORDER_SF_(14, 16, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      return result;
    }
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v35[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v35;
    v35[1] = v6;
    HMLockObject(v6);
    v9 = HMValidateCatHandleNoSecure(this[2]);
    if ( v9 )
    {
      DdeConv = FindDdeConv((int)v6, v9);
      v11 = DdeConv;
      if ( !DdeConv )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(14, 18, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
        return ThreadUnlock1();
      }
      v12 = *((_DWORD *)DdeConv + 10);
      if ( (v12 & 2) != 0 && (*(_BYTE *)(*((_DWORD *)DdeConv + 4) + 40) & 2) != 0 )
      {
        v13 = KeGetCurrentThread();
        v14 = W32GetThreadWin32Thread(v13);
        v32 = *(_DWORD *)(v14 + 228);
        *(_DWORD *)(v14 + 228) = &v32;
        v33 = v11;
        HMLockObject(v11);
        v15 = (_DWORD *)*((_DWORD *)v11 + 9);
        if ( v15 )
        {
          *((_DWORD *)v11 + 9) = 0;
          xxxFreeListFree(v15);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = this + 2;
          if ( (*((_DWORD *)v11 + 10) & 1) != 0 )
            v17 = *this;
          else
            v17 = *v16;
          if ( (*((_DWORD *)v11 + 10) & 1) == 0 )
            v16 = this;
          v30 = v17;
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_qq((int)v16, v17, 0xEu, 19, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, *v16, v30);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v11) + 13) & 1) == 0 )
          *((_DWORD *)v11 + 4) = xxxFreeDdeConv(*((_DWORD *)v11 + 4));
        v18 = ThreadUnlock1();
        if ( v18 )
          xxxFreeDdeConv(v18);
      }
      else
      {
        *((_DWORD *)DdeConv + 10) = v12 | 8;
      }
      v6 = v36;
    }
    v19 = KeGetCurrentThread();
    v20 = W32GetThreadWin32Thread(v19);
    if ( *(_DWORD *)(v20 + 340) <= 0x9900u )
      v2 = *(_DWORD *)(v20 + 352);
    if ( (v2 & 0x2000) != 0 )
    {
      xxxCleanupDdeConv(v6);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(14, 17, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
    }
    return ThreadUnlock1();
  }
  result = HMValidateHandleNoRipNoIL(this[3]);
  v21 = result;
  if ( result )
  {
    v22 = *(_DWORD *)(result + 32);
    v23 = KeGetCurrentThread();
    v24 = W32GetThreadWin32Thread(v23);
    v31[0] = *(_DWORD *)(v24 + 228);
    *(_DWORD *)(v24 + 228) = v31;
    v31[1] = v21;
    HMLockObject(v21);
    v25 = xxxCopyDDEOut(*(_DWORD **)(v21 + 28), &v36);
    this[3] = v25;
    if ( !v25 )
      this[1] = 993;
    result = ThreadUnlock1();
    if ( result )
    {
      if ( (v22 & 0x200) != 0 )
      {
        return FreeDdeXact(v21);
      }
      else
      {
        result = 0;
        if ( *(_DWORD *)(v21 + 20) )
        {
          v29 = v36;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 4;
            result = WPP_RECORDER_SF_q(
                       v27,
                       v26,
                       0xEu,
                       21,
                       (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                       (char)v36);
          }
          *(_DWORD *)(v21 + 24) = v29;
        }
        else
        {
          v28 = v36;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 4;
            result = WPP_RECORDER_SF_q(
                       v27,
                       v26,
                       0xEu,
                       20,
                       (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                       (char)v36);
          }
          *(_DWORD *)(v21 + 20) = v28;
        }
      }
    }
  }
  else
  {
    this[3] = 0;
    this[1] = 0;
  }
  return result;
}
