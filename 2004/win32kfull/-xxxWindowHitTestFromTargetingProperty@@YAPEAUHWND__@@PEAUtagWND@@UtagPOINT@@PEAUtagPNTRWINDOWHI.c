/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0217344
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02176F4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00B2490 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxWindowHitTest2 @ 0x1C010B3CC (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C0215AEC (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C02163CC (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        unsigned __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  HWND v8; // r15
  int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int128 *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v16; // r13
  BOOL v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r14d
  unsigned int v21; // r12d
  _DWORD *v22; // r14
  HWND v23; // rax
  struct tagWND *v24; // r12
  struct tagPOINT v26; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v29; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v30; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v31; // [rsp+78h] [rbp-88h]
  int *v32; // [rsp+80h] [rbp-80h]
  _DWORD v33[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B4h] [rbp-4Ch]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  struct tagPOINT *v41; // [rsp+C8h] [rbp-38h]
  _QWORD v42[4]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v43; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v44; // [rsp+100h] [rbp+0h] BYREF
  int v45; // [rsp+110h] [rbp+10h] BYREF
  __int64 v46; // [rsp+114h] [rbp+14h]
  __int128 v47; // [rsp+11Ch] [rbp+1Ch]
  __int128 v48; // [rsp+12Ch] [rbp+2Ch]
  int v49; // [rsp+13Ch] [rbp+3Ch]

  v32 = a4;
  v26 = a2;
  v31 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 264) == gptiCurrent) )
  {
    v42[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v42[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v42;
    v42[1] = a1;
    HMLockObject(a1);
    EtwTraceTouchTargetingPointerTargetStart();
    v11 = *(__int128 **)(a3 + 40);
    v45 = *(unsigned __int16 *)(a3 + 8);
    v46 = *((_QWORD *)v11 + 4);
    v47 = v11[1];
    v48 = *v11;
    v49 = *((_DWORD *)v11 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (struct _LARGE_STRING *)&v45, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v14, v13, v15);
    v16 = (v12 >> 20) & 0xFFF;
    if ( v16 <= 0xFFDu )
    {
      if ( (unsigned int)v16 >= *(_DWORD *)(a3 + 64) && *(_QWORD *)(a3 + 56) )
      {
        if ( (*(_DWORD *)(a3 + 176) & 1) == 0 )
          return v8;
        v27.x = v26.x + *(_DWORD *)(a3 + 48);
        v27.y = v26.y + *(_DWORD *)(a3 + 52);
        v17 = PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), *(_QWORD *)&v27);
      }
      else
      {
        v17 = 1;
      }
      if ( v17 )
      {
        v18 = (v12 >> 10) & 0x3FF;
        v27.x = v18;
        if ( (unsigned int)v18 > 0x1FF )
          v27.x = v18 - 1024;
        v19 = v18 - 1024;
        if ( (unsigned int)v18 <= 0x1FF )
          v19 = (v12 >> 10) & 0x3FF;
        v20 = v12 & 0x3FF;
        v28 = v19;
        v27.y = v20;
        if ( v20 > 0x1FF )
          v27.y = v20 - 1024;
        v21 = v20 - 1024;
        if ( v20 <= 0x1FF )
          v21 = v20;
        if ( (unsigned int)OffsetInContact(v26, *(const struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v27) )
        {
          v26.y += v21;
          v26.x += v28;
          if ( *(_DWORD *)(a3 + 84) )
          {
            v29 = v26;
            LogicalToPhysicalDPIPoint(&v29, &v26, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 0LL);
            v22 = (_DWORD *)(a3 + 32);
            v33[0] = *(_DWORD *)a3;
            v30 = v29;
            v33[1] = 0;
            v34 = *(_QWORD *)(a3 + 8);
            v35 = *(_QWORD *)(a3 + 16);
            v37 = *(_DWORD *)(a3 + 36);
            v40 = 0LL;
            v41 = &v30;
            v36 = a3 + 32;
            v38 = 0;
            v39 = 0LL;
            v23 = xxxDCEWindowHitTest2Internal((struct tagWND *)a1, v29, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v33);
          }
          else
          {
            v22 = (_DWORD *)(a3 + 32);
            v23 = (HWND)xxxWindowHitTest2(
                          (const struct tagWND *)a1,
                          *(_QWORD *)&v26,
                          (int *)(a3 + 32),
                          *(_DWORD *)(a3 + 36));
          }
          v8 = v23;
          if ( v23 )
          {
            v24 = (struct tagWND *)ValidateHwnd(v23);
            if ( v24 )
            {
              if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)a1) )
                v16 = 0;
              else
                *v22 = 1;
              v44 = *v31;
              TransformRectBetweenCoordinateSpaces(&v44, v31, v24, a1);
              v43 = v44;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v24, v16, &v27, 0LL, 1, &v43, 1);
              if ( !v16 || !*(_QWORD *)(a1 + 112) )
                v9 = 0;
              *v32 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
