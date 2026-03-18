/*
 * XREFs of xxxDDETrackPostHook @ 0x1C021DACC
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021B698 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021CB28 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021CB88 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021D31C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021D400 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEHookData @ 0x1C0233778 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0248048 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // r14
  int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  struct tagWND *v15; // rbx
  struct tagDDECONV *DdeConv; // rax
  __int64 v17; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // esi
  struct tagDDECONV *v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h]
  _OWORD v30[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+78h] [rbp-8h]
  struct tagDDECONV *v32; // [rsp+B8h] [rbp+38h]

  v5 = 0LL;
  v29 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  v28 = 0LL;
  if ( (v10 & MonitorFlags) != 0 )
  {
    v11 = *a1;
    v31 = 0LL;
    memset(v30, 0, sizeof(v30));
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v30);
      LODWORD(v11) = *a1;
    }
    else
    {
      *(_QWORD *)&v30[0] = *(unsigned __int16 *)a4;
      *((_QWORD *)&v30[0] + 1) = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, v11, a3, (unsigned int)*a4, v10, (__int64)v30);
  }
  if ( *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 416LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v13 = (struct tagWND *)ValidateHwnd(a3);
  v15 = v13;
  if ( v13 )
  {
    DdeConv = FindDdeConv(v13, a2);
    v32 = DdeConv;
    v5 = (__int64)DdeConv;
    if ( DdeConv )
    {
      if ( a5
        && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL)
        && (*(_DWORD *)(*((_QWORD *)v15 + 2) + 640LL) & 0x40000) == 0 )
      {
        return 0;
      }
      if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 624LL) != 1024 )
      {
        UserSetLastError(1408LL, v14, v17);
        return 0;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v28 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v28;
      *((_QWORD *)&v28 + 1) = v32;
      HMLockObject(v32);
      v19 = (struct tagFREELIST *)*((_QWORD *)v32 + 9);
      *((_QWORD *)v32 + 9) = 0LL;
      xxxFreeListFree(v19);
      if ( (*(_BYTE *)(_HMPheFromObject(v32) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)v32 + 20) & 6) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v23 = *((_QWORD *)v32 + 7);
        if ( v23 )
        {
          v24 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v23 + 32))(a1, a4, v32);
        }
        else if ( (*((_DWORD *)v32 + 20) & 1) != 0 )
        {
          v24 = xxxUnexpectedServerPost(a1, a4, v32);
        }
        else
        {
          v24 = xxxUnexpectedClientPost(a1, a4, v32);
        }
        v12 = v24;
      }
      v5 = ThreadUnlock1(v21, v20, v22);
    }
    else
    {
      v12 = *a1 == 993;
    }
  }
  else
  {
    v12 = (*a1 == 993) + 1;
  }
  if ( v12 == 1 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
  {
    v25 = 0x8000;
    v26 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 994);
    if ( (unsigned __int16)*a1 == 994 )
    {
      v25 = 33025;
    }
    else
    {
      v26 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 995);
      if ( (unsigned __int16)*a1 == 995 )
        goto LABEL_48;
      v26 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 996);
      if ( (unsigned __int16)*a1 == 996 )
      {
        v25 = 32769;
      }
      else
      {
        v26 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 997);
        if ( (unsigned __int16)*a1 != 997 )
        {
          v26 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 998);
          if ( (unsigned __int16)*a1 == 998 )
            goto LABEL_48;
          v26 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 999);
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v12;
            v25 = 34816;
            goto LABEL_48;
          }
        }
        v25 = 32899;
      }
    }
LABEL_48:
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_((_DWORD)v26, v14, 14, 12, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      }
      xxxFreeDDEHandle(v26, *a4, v25);
      return 3;
    }
  }
  return v12;
}
