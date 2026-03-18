/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C021C8A4
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0051B80 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C022FD90 (SfnSENTDDEMSG.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021A808 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C021B4BC (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021B71C (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BCF8 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C021C620 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C021D2F8 (xxxFreeDdeConv.c)
 *     HMValidateCatHandleNoSecure @ 0x1C025D00C (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C025D0C0 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
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
  struct tagFREELIST *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct tagDDECONV *v23; // rax
  __int64 v24; // rdi
  int v25; // ebx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  int v34; // ecx
  void *v35; // rsi
  void *v36; // rsi
  __int128 v37; // [rsp+40h] [rbp-19h] BYREF
  __int64 v38; // [rsp+50h] [rbp-9h]
  _QWORD v39[3]; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v40[4]; // [rsp+70h] [rbp+17h] BYREF
  void *v41; // [rsp+C0h] [rbp+67h] BYREF

  v41 = 0LL;
  v40[2] = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    v2 = *(_QWORD *)a1;
    v39[2] = 0LL;
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
    v39[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v39;
    v39[1] = v6;
    HMLockObject(v6);
    v8 = (__int64 *)(a1 + 16);
    v9 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
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
        *(_QWORD *)&v37 = *(_QWORD *)(v17 + 416);
        *(_QWORD *)(v17 + 416) = &v37;
        *((_QWORD *)&v37 + 1) = v14;
        HMLockObject(v14);
        v18 = (struct tagFREELIST *)*((_QWORD *)v14 + 9);
        if ( v18 )
        {
          *((_QWORD *)v14 + 9) = 0LL;
          xxxFreeListFree(v18);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( (*((_DWORD *)v14 + 20) & 1) != 0 )
            v19 = *(_QWORD *)a1;
          else
            v19 = *v8;
          if ( (*((_DWORD *)v14 + 20) & 1) == 0 )
            v8 = (__int64 *)a1;
          WPP_RECORDER_SF_qq(v19, 4u, 0xEu, 0x13u, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, *v8, v19);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v14) + 25) & 1) == 0 )
          *((_QWORD *)v14 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v14 + 4));
        v23 = (struct tagDDECONV *)ThreadUnlock1(v21, v20, v22);
        if ( v23 )
          xxxFreeDdeConv(v23);
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
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v24 = result;
  if ( result )
  {
    v25 = *(_DWORD *)(result + 64);
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v40[0] = *(_QWORD *)(v26 + 416);
    *(_QWORD *)(v26 + 416) = v40;
    v40[1] = v24;
    HMLockObject(v24);
    v29 = xxxCopyDDEOut(*(struct tagINTDDEINFO **)(v24 + 56), &v41, v27, v28);
    *(_QWORD *)(a1 + 24) = v29;
    if ( !v29 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v31, v30, v32);
    if ( result )
    {
      if ( (v25 & 0x200) != 0 )
      {
        return FreeDdeXact(v24);
      }
      else if ( *(_QWORD *)(v24 + 40) )
      {
        v36 = v41;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 4;
          result = WPP_RECORDER_SF_q(
                     v34,
                     v33,
                     14,
                     21,
                     (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                     (char)v41);
        }
        *(_QWORD *)(v24 + 48) = v36;
      }
      else
      {
        v35 = v41;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 4;
          result = WPP_RECORDER_SF_q(
                     v34,
                     v33,
                     14,
                     20,
                     (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                     (char)v41);
        }
        *(_QWORD *)(v24 + 40) = v35;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
