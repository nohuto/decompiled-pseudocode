/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02164C4
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C021686C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     xxxWindowHitTest2 @ 0x1C0012520 (xxxWindowHitTest2.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C004C93C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C0214C6C (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C021554C (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

__int64 __fastcall xxxWindowHitTestFromTargetingProperty(
        unsigned __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  __int64 v8; // r15
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
  __int64 v23; // rax
  struct tagWND *v24; // r12
  struct tagPOINT v26; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v29; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT *v30; // [rsp+70h] [rbp-90h]
  int *v31; // [rsp+78h] [rbp-88h]
  _DWORD v32[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A4h] [rbp-5Ch]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  _QWORD v41[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v42; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v43; // [rsp+F0h] [rbp-10h] BYREF
  int v44; // [rsp+100h] [rbp+0h] BYREF
  __int64 v45; // [rsp+104h] [rbp+4h]
  __int128 v46; // [rsp+10Ch] [rbp+Ch]
  __int128 v47; // [rsp+11Ch] [rbp+1Ch]
  int v48; // [rsp+12Ch] [rbp+2Ch]

  v31 = a4;
  v26 = a2;
  v30 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 264) == gptiCurrent) )
  {
    v41[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v41[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v41;
    v41[1] = a1;
    HMLockObject(a1);
    EtwTraceTouchTargetingPointerTargetStart();
    v11 = *(__int128 **)(a3 + 40);
    v44 = *(unsigned __int16 *)(a3 + 8);
    v45 = *((_QWORD *)v11 + 4);
    v46 = v11[1];
    v47 = *v11;
    v48 = *((_DWORD *)v11 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (struct _LARGE_STRING *)&v44, 0, 0, 0LL, 1, 0);
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
            v32[0] = *(_DWORD *)a3;
            v35 = a3 + 32;
            v32[1] = 0;
            v33 = *(_QWORD *)(a3 + 8);
            v34 = *(_QWORD *)(a3 + 16);
            v36 = *(_DWORD *)(a3 + 36);
            v39 = 0LL;
            v37 = 0;
            v38 = 0LL;
            v40 = 0LL;
            v23 = (__int64)xxxDCEWindowHitTestIndirect_Iterative(
                             (struct tagWND *)a1,
                             v29,
                             1,
                             (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v32);
          }
          else
          {
            v22 = (_DWORD *)(a3 + 32);
            v23 = xxxWindowHitTest2((struct tagWND *)a1, *(_QWORD *)&v26, (int *)(a3 + 32), *(_DWORD *)(a3 + 36));
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
              v43 = *v30;
              TransformRectBetweenCoordinateSpaces(&v43, v30, v24, a1);
              v42 = v43;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v24, v16, &v27, 0LL, 1, &v42, 1);
              if ( !v16 || !*(_QWORD *)(a1 + 112) )
                v9 = 0;
              *v31 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
