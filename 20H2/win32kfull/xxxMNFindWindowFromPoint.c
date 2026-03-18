/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C0238210
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0237C24 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C005C5D8 (_HasCaptionIcon.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetWindowBordersForDpi @ 0x1C00C7CA0 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C023676C (MNItemHitTest.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r15d
  unsigned __int16 v4; // bx
  __int64 *v6; // rax
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rax
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  __int64 v25; // rcx
  int v27; // edx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v29; // rax
  int DpiDependentMetric; // ebx
  int v31; // edi
  __int64 v32; // r8
  __int64 v33; // r9
  int WindowBordersForDpi; // eax
  __int64 v35; // r9
  int v36; // ecx
  int v37; // edi
  bool v38; // zf
  unsigned __int64 v39; // r8
  int v40; // eax
  __int64 *v41; // rax
  int v42; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-38h]
  _DWORD v44[2]; // [rsp+40h] [rbp-30h] BYREF
  int v45; // [rsp+48h] [rbp-28h]
  int v46; // [rsp+4Ch] [rbp-24h]
  __int128 v47; // [rsp+50h] [rbp-20h] BYREF
  __int64 v48; // [rsp+60h] [rbp-10h]

  v42 = 0;
  *a2 = 0;
  v3 = SHIWORD(a3);
  v4 = a3;
  v48 = 0LL;
  v6 = *a1;
  v47 = 0LL;
  if ( *(_QWORD *)(*v6 + 24) )
  {
    v8 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v47 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v47;
    *((_QWORD *)&v47 + 1) = v8;
    HMLockObject(v8);
    v10 = xxxSendMessage(
            *(_QWORD *)(**a1 + 24),
            0x1EBu,
            (unsigned __int64)&v42,
            (struct _LARGE_STRING *)(v4 | ((unsigned __int16)v3 << 16)));
    ThreadUnlock1(v12, v11, v13);
    if ( IsMFMWFPWindow(v10) )
    {
      v15 = HMValidateHandleNoSecure(v14, 1);
      v10 = v15;
      if ( !v15 )
        goto LABEL_8;
      v19 = safe_cast_fnid_to_PMENUWND(v15, v16, v17, v18);
      if ( !v19 )
        return 0LL;
      v20 = *(_QWORD *)(v19 + 8);
      if ( !v20 || !*(_QWORD *)(v20 + 40) )
        return 0LL;
    }
    if ( v10 )
      goto LABEL_41;
  }
LABEL_8:
  v21 = **a1;
  if ( (*(_DWORD *)v21 & 1) == 0 )
  {
    v10 = *(_QWORD *)(v21 + 16);
    LODWORD(v43) = (__int16)v4;
    HIDWORD(v43) = v3;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL), v43) )
      return 0LL;
LABEL_34:
    v41 = *a1;
    v43 = __PAIR64__(v23, v24);
    v42 = MNItemHitTest(*(_QWORD *)(*v41 + 40), v10, __PAIR64__(v23, v24));
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v40 = v42;
      if ( v42 != -1 )
      {
        v10 = 0xFFFFFFFFLL;
        goto LABEL_42;
      }
      if ( *(_QWORD *)(**a1 + 48) )
      {
        v40 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v43);
        goto LABEL_38;
      }
      return 0LL;
    }
LABEL_41:
    v40 = v42;
    goto LABEL_42;
  }
  v10 = *(_QWORD *)(v21 + 8);
  if ( !v10 )
    return 0LL;
  v22 = *a1;
  v23 = v3;
  v24 = (__int16)v4;
  LODWORD(v43) = (__int16)v4;
  HIDWORD(v43) = v3;
  if ( (*(_DWORD *)*v22 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
    goto LABEL_34;
  }
  if ( !(unsigned int)HasCaptionIcon(v10) )
    return 0LL;
  v25 = *(_QWORD *)(v10 + 40);
  if ( (*(_BYTE *)(v25 + 31) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v25 + 88), v43) )
      return 0xFFFFFFFFLL;
    return 0LL;
  }
  v27 = *(_DWORD *)(v25 + 288) & 0xF;
  if ( v27 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v25 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v25 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
  }
  else if ( !v27
         && (v29 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
  }
  DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
  v31 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 28LL),
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 24LL),
                          v32,
                          v33,
                          WindowDpiLastNotify);
  v35 = *(_QWORD *)(v10 + 40);
  v36 = *(_DWORD *)(v35 + 88);
  v37 = WindowBordersForDpi + *(_DWORD *)(v35 + 92) + v31;
  v44[1] = WindowBordersForDpi + *(_DWORD *)(v35 + 92);
  v38 = (*(_BYTE *)(v35 + 26) & 0x40) == 0;
  v44[0] = v36 + WindowBordersForDpi;
  v45 = v36 + WindowBordersForDpi + DpiDependentMetric;
  v46 = v37;
  if ( !v38 )
  {
    v45 = *(_DWORD *)(v35 + 96) - WindowBordersForDpi;
    v44[0] = v45 - DpiDependentMetric;
  }
  if ( PtInRect(v44, v43) )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(**a1 + 48) )
    return 0LL;
  v40 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v39);
LABEL_38:
  if ( v40 == -1 )
    return 0LL;
  v10 = 4294967291LL;
LABEL_42:
  *a2 = v40;
  return v10;
}
