/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C02390A0
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0234958 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0238AB4 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C0060694 (GetWindowBordersForDpi.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C02375FC (MNItemHitTest.c)
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
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  int v24; // edx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v26; // rax
  int DpiDependentMetric; // ebx
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // r9
  int WindowBordersForDpi; // eax
  __int64 v32; // r9
  int v33; // ecx
  int v34; // edi
  bool v35; // zf
  unsigned __int64 v36; // r8
  int v37; // eax
  __int64 *v38; // rax
  int v39; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-38h]
  _DWORD v41[2]; // [rsp+40h] [rbp-30h] BYREF
  int v42; // [rsp+48h] [rbp-28h]
  int v43; // [rsp+4Ch] [rbp-24h]
  __int128 v44; // [rsp+50h] [rbp-20h] BYREF
  __int64 v45; // [rsp+60h] [rbp-10h]

  v39 = 0;
  *a2 = 0;
  v3 = SHIWORD(a3);
  v4 = a3;
  v45 = 0LL;
  v6 = *a1;
  v44 = 0LL;
  if ( *(_QWORD *)(*v6 + 24) )
  {
    v8 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v44 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v44;
    *((_QWORD *)&v44 + 1) = v8;
    HMLockObject(v8);
    v10 = xxxSendMessage(
            *(_QWORD *)(**a1 + 24),
            0x1EBu,
            (unsigned __int64)&v39,
            (struct _LARGE_STRING *)(v4 | ((unsigned __int16)v3 << 16)));
    ThreadUnlock1(v12, v11, v13);
    if ( IsMFMWFPWindow(v10) )
    {
      v15 = HMValidateHandleNoSecure(v14, 1);
      v10 = v15;
      if ( !v15 )
        goto LABEL_8;
      v16 = safe_cast_fnid_to_PMENUWND(v15);
      if ( !v16 )
        return 0LL;
      v17 = *(_QWORD *)(v16 + 8);
      if ( !v17 || !*(_QWORD *)(v17 + 40) )
        return 0LL;
    }
    if ( v10 )
      goto LABEL_41;
  }
LABEL_8:
  v18 = **a1;
  if ( (*(_DWORD *)v18 & 1) == 0 )
  {
    v10 = *(_QWORD *)(v18 + 16);
    LODWORD(v40) = (__int16)v4;
    HIDWORD(v40) = v3;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL), v40) )
      return 0LL;
LABEL_34:
    v38 = *a1;
    v40 = __PAIR64__(v20, v21);
    v39 = MNItemHitTest(*(_QWORD *)(*v38 + 40), v10, __PAIR64__(v20, v21));
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v37 = v39;
      if ( v39 != -1 )
      {
        v10 = 0xFFFFFFFFLL;
        goto LABEL_42;
      }
      if ( *(_QWORD *)(**a1 + 48) )
      {
        v37 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v40);
        goto LABEL_38;
      }
      return 0LL;
    }
LABEL_41:
    v37 = v39;
    goto LABEL_42;
  }
  v10 = *(_QWORD *)(v18 + 8);
  if ( !v10 )
    return 0LL;
  v19 = *a1;
  v20 = v3;
  v21 = (__int16)v4;
  LODWORD(v40) = (__int16)v4;
  HIDWORD(v40) = v3;
  if ( (*(_DWORD *)*v19 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
    goto LABEL_34;
  }
  if ( !(unsigned int)HasCaptionIcon(v10) )
    return 0LL;
  v22 = *(_QWORD *)(v10 + 40);
  if ( (*(_BYTE *)(v22 + 31) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v22 + 88), v40) )
      return 0xFFFFFFFFLL;
    return 0LL;
  }
  v24 = *(_DWORD *)(v22 + 288) & 0xF;
  if ( v24 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v22 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v22 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
  }
  else if ( !v24
         && (v26 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL) + 284LL);
  }
  DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
  v28 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 28LL),
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 24LL),
                          v29,
                          v30,
                          WindowDpiLastNotify);
  v32 = *(_QWORD *)(v10 + 40);
  v33 = *(_DWORD *)(v32 + 88);
  v34 = WindowBordersForDpi + *(_DWORD *)(v32 + 92) + v28;
  v41[1] = WindowBordersForDpi + *(_DWORD *)(v32 + 92);
  v35 = (*(_BYTE *)(v32 + 26) & 0x40) == 0;
  v41[0] = v33 + WindowBordersForDpi;
  v42 = v33 + WindowBordersForDpi + DpiDependentMetric;
  v43 = v34;
  if ( !v35 )
  {
    v42 = *(_DWORD *)(v32 + 96) - WindowBordersForDpi;
    v41[0] = v42 - DpiDependentMetric;
  }
  if ( PtInRect(v41, v40) )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(**a1 + 48) )
    return 0LL;
  v37 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v36);
LABEL_38:
  if ( v37 == -1 )
    return 0LL;
  v10 = 4294967291LL;
LABEL_42:
  *a2 = v37;
  return v10;
}
