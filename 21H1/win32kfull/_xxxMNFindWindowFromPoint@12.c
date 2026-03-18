/*
 * XREFs of _xxxMNFindWindowFromPoint@12 @ 0x198869
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNDismissIfOffMenu@8 @ 0x1984BA (_xxxMNDismissIfOffMenu@8.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _MNItemHitTest@16 @ 0x19761B (_MNItemHitTest@16.c)
 */

int __fastcall xxxMNFindWindowFromPoint(int **a1, int *a2, int a3)
{
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // edi
  unsigned int v8; // ecx
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // eax
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v18; // eax
  INT WindowDpiLastNotify; // esi
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  PKTHREAD v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int WindowBordersForDpiWithCompatFlags2; // eax
  int v28; // esi
  int v29; // ecx
  bool v30; // zf
  int v31; // edx
  int v32; // eax
  int v33; // [esp+Ch] [ebp-40h] BYREF
  int v34; // [esp+10h] [ebp-3Ch]
  int v35; // [esp+14h] [ebp-38h]
  _DWORD v36[2]; // [esp+18h] [ebp-34h] BYREF
  int v37; // [esp+20h] [ebp-2Ch]
  int v38; // [esp+24h] [ebp-28h]
  int v39; // [esp+28h] [ebp-24h]
  int v40; // [esp+2Ch] [ebp-20h]
  int v41; // [esp+30h] [ebp-1Ch]
  int *v42; // [esp+34h] [ebp-18h]
  int DpiDependentMetric; // [esp+38h] [ebp-14h]
  int v44; // [esp+3Ch] [ebp-10h]
  int v45; // [esp+40h] [ebp-Ch] BYREF

  *a2 = 0;
  v45 = 0;
  v42 = a2;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_DWORD *)(**a1 + 12) )
  {
    v4 = *(_DWORD *)(**a1 + 12);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v33 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v33;
    v34 = v4;
    HMLockObject(v4);
    v7 = xxxSendMessage(*(void **)(**a1 + 12), (unsigned int)&v45, (unsigned __int16)a3 | (HIWORD(a3) << 16));
    ThreadUnlock1();
    if ( IsMFMWFPWindow((void *)v7) )
    {
      v9 = (_DWORD *)HMValidateHandleNoSecure(v8, 1);
      v7 = (int)v9;
      if ( !v9 )
        goto LABEL_8;
      v10 = safe_cast_fnid_to_PMENUWND(v9);
      if ( !v10 )
        return 0;
      v11 = *(_DWORD *)(v10 + 4);
      if ( !v11 || !*(_DWORD *)(v11 + 20) )
        return 0;
    }
    if ( v7 )
      goto LABEL_44;
  }
LABEL_8:
  v12 = **a1;
  if ( (*(_BYTE *)v12 & 1) == 0 )
  {
    v7 = *(_DWORD *)(v12 + 8);
    v15 = (__int16)a3;
    if ( !PtInRect((_DWORD *)(*(_DWORD *)(v7 + 20) + 52), (__int16)a3, SHIWORD(a3)) )
      return 0;
LABEL_37:
    v45 = MNItemHitTest(*(_DWORD *)(**a1 + 20), v7, v15, v14);
    if ( (*(_BYTE *)**a1 & 1) != 0 )
    {
      v32 = v45;
      if ( v45 != -1 )
      {
        v7 = -1;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(**a1 + 24) )
      {
        v32 = MNItemHitTest(*(_DWORD *)(**a1 + 24), v7, v15, SHIWORD(a3));
        goto LABEL_41;
      }
      return 0;
    }
LABEL_44:
    v32 = v45;
    goto LABEL_45;
  }
  v7 = *(_DWORD *)(v12 + 4);
  if ( !v7 )
    return 0;
  v13 = *a1;
  v14 = SHIWORD(a3);
  v15 = (__int16)a3;
  v39 = (__int16)a3;
  if ( (*(_BYTE *)*v13 & 4) == 0 )
  {
    if ( *(_DWORD *)(**a1 + 4) && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**a1 + 4) + 20) + 23) & 0x20) != 0 )
      return 0;
    goto LABEL_37;
  }
  if ( !_HasCaptionIcon((_DWORD *)v7) )
    return 0;
  v16 = *(_DWORD *)(v7 + 20);
  if ( (*(_BYTE *)(v16 + 23) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v16 + 52), (__int16)a3, SHIWORD(a3)) )
      return -1;
    return 0;
  }
  v18 = *(_DWORD *)(v16 + 184) & 0xF;
  if ( v18 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v16 + 184) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v16 + 144) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((_DWORD *)v7);
  }
  else if ( !v18
         && (v20 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 248)) != 0
         && (*(_BYTE *)(**(_DWORD **)(v20 + 4) + 32) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v7 + 8) + 232) + 160);
  }
  DpiDependentMetric = GetDpiDependentMetric(12, WindowDpiLastNotify);
  v21 = GetDpiDependentMetric(13, WindowDpiLastNotify);
  v22 = *(_DWORD *)(v7 + 20);
  v40 = v21;
  v41 = *(_DWORD *)(v22 + 16);
  v44 = *(_DWORD *)(v22 + 20);
  v23 = KeGetCurrentThread();
  v24 = W32GetThreadWin32Thread(v23);
  if ( *(_DWORD *)(v24 + 340) <= 0x9900u )
    v26 = *(_DWORD *)(v24 + 352);
  else
    v26 = 0;
  WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                          v44,
                                          v41,
                                          v25,
                                          0,
                                          WindowDpiLastNotify,
                                          v26);
  v28 = *(_DWORD *)(v7 + 20);
  v29 = WindowBordersForDpiWithCompatFlags2 + *(_DWORD *)(v28 + 56);
  v44 = *(_DWORD *)(v28 + 52);
  v36[1] = v29;
  v36[0] = WindowBordersForDpiWithCompatFlags2 + v44;
  v37 = WindowBordersForDpiWithCompatFlags2 + v44 + DpiDependentMetric;
  v30 = (*(_BYTE *)(v28 + 18) & 0x40) == 0;
  v38 = v29 + v40;
  if ( !v30 )
  {
    v37 = *(_DWORD *)(v28 + 60) - WindowBordersForDpiWithCompatFlags2;
    v36[0] = v37 - DpiDependentMetric;
  }
  if ( PtInRect(v36, v39, SHIWORD(a3)) )
  {
    *v42 = 0;
    return -1;
  }
  if ( !*(_DWORD *)(**a1 + 24) )
    return 0;
  v32 = MNItemHitTest(*(_DWORD *)(**a1 + 24), v7, v31, SHIWORD(a3));
LABEL_41:
  if ( v32 == -1 )
    return 0;
  v7 = -5;
LABEL_45:
  *v42 = v32;
  return v7;
}
