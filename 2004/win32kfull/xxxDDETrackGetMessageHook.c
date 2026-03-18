/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C021D734
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0095EB0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C0230C20 (SfnSENTDDEMSG.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021B698 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C021C34C (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021C5AC (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021CB88 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C021D4B0 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C021E188 (xxxFreeDdeConv.c)
 *     HMValidateCatHandleNoSecure @ 0x1C025E61C (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C025E6D0 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  struct tagWND *v6; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 *v8; // r12
  struct tagWND *v9; // rax
  struct tagDDECONV *DdeConv; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagDDECONV *v14; // rdi
  int v15; // r9d
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  struct tagFREELIST *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct tagDDECONV *v24; // rax
  __int64 v25; // rdi
  int v26; // ebx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // edx
  int v35; // ecx
  void *v36; // rsi
  void *v37; // rsi
  __int128 v38; // [rsp+40h] [rbp-19h] BYREF
  __int64 v39; // [rsp+50h] [rbp-9h]
  _QWORD v40[3]; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v41[4]; // [rsp+70h] [rbp+17h] BYREF
  void *v42; // [rsp+C0h] [rbp+67h] BYREF

  v42 = 0LL;
  v41[2] = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( *((_DWORD *)a1 + 2) == 993 )
  {
    v2 = *a1;
    v40[2] = 0LL;
    result = ValidateHwnd(v2);
    v6 = (struct tagWND *)result;
    if ( !result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        return WPP_RECORDER_SF_(v5, v4, 14, 16, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      }
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v40[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v40;
    v40[1] = v6;
    HMLockObject(v6);
    v8 = a1 + 2;
    v9 = (struct tagWND *)HMValidateCatHandleNoSecure(a1[2]);
    if ( v9 )
    {
      DdeConv = FindDdeConv(v6, v9);
      v14 = DdeConv;
      if ( !DdeConv )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 18;
LABEL_29:
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_(v12, v11, 14, v15, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
          return ThreadUnlock1(v12, v11, v13);
        }
        return ThreadUnlock1(v12, v11, v13);
      }
      v16 = *((_DWORD *)DdeConv + 20);
      if ( (v16 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v38 = *(_QWORD *)(v17 + 408);
        *(_QWORD *)(v17 + 408) = &v38;
        *((_QWORD *)&v38 + 1) = v14;
        HMLockObject(v14);
        v19 = (struct tagFREELIST *)*((_QWORD *)v14 + 9);
        if ( v19 )
        {
          *((_QWORD *)v14 + 9) = 0LL;
          xxxFreeListFree(v19);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( (*((_DWORD *)v14 + 20) & 1) != 0 )
            v20 = *a1;
          else
            v20 = *v8;
          LOBYTE(v18) = 4;
          if ( (*((_DWORD *)v14 + 20) & 1) == 0 )
            v8 = a1;
          WPP_RECORDER_SF_qq(v20, v18, 14, 19, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, *v8, v20);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v14) + 25) & 1) == 0 )
          *((_QWORD *)v14 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v14 + 4));
        v24 = (struct tagDDECONV *)ThreadUnlock1(v22, v21, v23);
        if ( v24 )
          xxxFreeDdeConv(v24);
      }
      else
      {
        *((_DWORD *)DdeConv + 20) = v16 | 8;
      }
    }
    if ( (GetAppCompatFlags2(0x9900u) & 0x2000) != 0 )
    {
      xxxCleanupDdeConv(v6);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 17;
      goto LABEL_29;
    }
    return ThreadUnlock1(v12, v11, v13);
  }
  result = HMValidateHandleNoRipNoIL(a1[3]);
  v25 = result;
  if ( result )
  {
    v26 = *(_DWORD *)(result + 64);
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v41[0] = *(_QWORD *)(v27 + 408);
    *(_QWORD *)(v27 + 408) = v41;
    v41[1] = v25;
    HMLockObject(v25);
    v30 = xxxCopyDDEOut(*(struct tagINTDDEINFO **)(v25 + 56), &v42, v28, v29);
    a1[3] = v30;
    if ( !v30 )
      *((_DWORD *)a1 + 2) = 993;
    result = ThreadUnlock1(v32, v31, v33);
    if ( result )
    {
      if ( (v26 & 0x200) != 0 )
      {
        return FreeDdeXact(v25);
      }
      else if ( *(_QWORD *)(v25 + 40) )
      {
        v37 = v42;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = 4;
          result = WPP_RECORDER_SF_q(
                     v35,
                     v34,
                     14,
                     21,
                     (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                     (char)v42);
        }
        *(_QWORD *)(v25 + 48) = v37;
      }
      else
      {
        v36 = v42;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = 4;
          result = WPP_RECORDER_SF_q(
                     v35,
                     v34,
                     14,
                     20,
                     (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                     (char)v42);
        }
        *(_QWORD *)(v25 + 40) = v36;
      }
    }
  }
  else
  {
    a1[3] = 0LL;
    *((_DWORD *)a1 + 2) = 0;
  }
  return result;
}
