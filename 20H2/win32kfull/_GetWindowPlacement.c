/*
 * XREFs of _GetWindowPlacement @ 0x1C003A648
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C003A520 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C01FA140 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C003A968 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C003AA98 (CkptUpdate.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetRect @ 0x1C005E0AC (GetRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  int v6; // edi
  __int128 *updated; // r15
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // ebx
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  __int128 v27; // xmm0
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  bool v32; // cf
  __int64 Prop; // rax
  __int128 v34; // xmm1
  __m128i v35; // xmm0
  int v36; // eax
  __int128 v37; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v38[16]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v39; // [rsp+40h] [rbp-29h] BYREF
  __int128 v40; // [rsp+50h] [rbp-19h] BYREF
  __int128 v41; // [rsp+60h] [rbp-9h]
  __m128i si128; // [rsp+70h] [rbp+7h]
  int v43; // [rsp+80h] [rbp+17h]

  v40 = 0LL;
  v43 = 0;
  v41 = 0LL;
  si128 = 0LL;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  v6 = 0;
  if ( !a3 )
  {
    Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
    updated = &v40;
    if ( Prop )
    {
      v34 = *(_OWORD *)(Prop + 16);
      v40 = *(_OWORD *)Prop;
      v35 = *(__m128i *)(Prop + 32);
      v36 = *(_DWORD *)(Prop + 48);
      v41 = v34;
      v43 = v36;
      si128 = v35;
    }
    else
    {
      v39 = 0LL;
      GetRect(a1, &v39, 66LL);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      v43 = 0;
      v40 = v39;
      v41 = v39;
      CkptUpdate(a1, &v39, &v40);
    }
    goto LABEL_4;
  }
  updated = (__int128 *)UpdateCheckpoint(a1);
  if ( !updated )
    return 0LL;
LABEL_4:
  v8 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v8 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v8 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 1) != 0 )
    goto LABEL_14;
  v10 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480);
  if ( (*(_BYTE *)(v10 + 224) & 0x20) != 0 )
    goto LABEL_14;
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
  if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                           v10,
                                                                           v9,
                                                                           v11,
                                                                           v12) >> 8)) & 0x1FF) != 0 )
    goto LABEL_41;
  v17 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2 || (v18 = 1, (v17 & 0x20000000) == 0) )
    v18 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v14, v15, v16) & 0xF) != 2
    || (v32 = (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0x20000000) != 0, v23 = 1, !v32) )
  {
    v23 = 0;
  }
  if ( v18 == v23 )
  {
LABEL_14:
    v24 = 0;
  }
  else
  {
LABEL_41:
    v24 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v25 = (_QWORD *)(a2 + 12);
  if ( (updated[3] & 0x20) != 0 )
  {
    *v25 = *((_QWORD *)updated + 4);
    if ( v24 )
      TransformPointBetweenCoordinateSpaces(v25, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v25 = -1;
  }
  if ( (updated[3] & 0x40) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 5);
    if ( v24 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) && *(char *)(*(_QWORD *)(a1 + 40) + 24LL) >= 0 )
  {
    v26 = MonitorFromRect((struct tagRECT *)(a2 + 28));
    v39 = *(_OWORD *)GetMonitorWorkRect(&v37, v26);
    v27 = *(_OWORD *)GetMonitorRect(v38, v26);
    v28 = *((_DWORD *)updated + 12);
    v37 = v27;
    if ( (v28 & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 12) += v27 - v39;
      *(_DWORD *)(a2 + 16) += DWORD1(v27) - DWORD1(v39);
    }
    v29 = v27 - v39;
    *(_DWORD *)(a2 + 28) += v27 - v39;
    *(_DWORD *)(a2 + 36) += v29;
    v30 = DWORD1(v27) - DWORD1(v39);
    *(_DWORD *)(a2 + 40) += DWORD1(v27) - DWORD1(v39);
    *(_DWORD *)(a2 + 32) += v30;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 && (updated[3] & 1) != 0 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v6 = 1;
  }
  if ( (updated[3] & 2) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) != 0 )
    *(_DWORD *)(a2 + 4) = v6 | 2;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
