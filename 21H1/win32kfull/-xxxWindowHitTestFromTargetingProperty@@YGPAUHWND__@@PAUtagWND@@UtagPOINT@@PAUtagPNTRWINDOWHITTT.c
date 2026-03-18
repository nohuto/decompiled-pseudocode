/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?OffsetInContact@@YGHUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x179CD1 (-OffsetInContact@@YGHUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        ULONG_PTR a1,
        int *a2,
        int *a3,
        int a4,
        LONG a5,
        LONG a6,
        LONG a7,
        int a8,
        int a9,
        const struct tagTOUCHTARGETINGCONTACT *a10)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v13; // ecx
  _DWORD *v14; // edi
  int v15; // esi
  BOOL v16; // eax
  const struct tagTOUCHTARGETINGCONTACT *v17; // ecx
  unsigned int v18; // esi
  struct tagWND *v19; // eax
  int v20; // ecx
  bool v21; // zf
  int v22; // eax
  _DWORD *v23; // esi
  HWND v24; // eax
  __int16 v25; // di
  int v26; // esi
  struct tagRECT v28; // [esp-Ch] [ebp-A4h]
  struct tagPOINT v29; // [esp-4h] [ebp-9Ch]
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v30; // [esp+4h] [ebp-94h]
  _DWORD v31[3]; // [esp+Ch] [ebp-8Ch] BYREF
  int *v32; // [esp+18h] [ebp-80h]
  const struct tagTOUCHTARGETINGCONTACT *v33; // [esp+1Ch] [ebp-7Ch] BYREF
  unsigned int v34; // [esp+20h] [ebp-78h]
  int v35; // [esp+24h] [ebp-74h]
  HWND v36; // [esp+28h] [ebp-70h]
  ULONG_PTR BugCheckParameter2; // [esp+2Ch] [ebp-6Ch]
  struct tagPOINT v38; // [esp+30h] [ebp-68h] BYREF
  struct tagWND *v39; // [esp+38h] [ebp-60h] BYREF
  struct tagPOINT v40; // [esp+3Ch] [ebp-5Ch] BYREF
  __int64 v41; // [esp+44h] [ebp-54h]
  const struct tagTOUCHTARGETINGCONTACT *v42; // [esp+4Ch] [ebp-4Ch]
  int v43[3]; // [esp+50h] [ebp-48h] BYREF
  int v44; // [esp+5Ch] [ebp-3Ch] BYREF
  int v45; // [esp+60h] [ebp-38h]
  int v46; // [esp+64h] [ebp-34h]
  int *v47; // [esp+68h] [ebp-30h]
  int v48; // [esp+6Ch] [ebp-2Ch]
  int v49; // [esp+70h] [ebp-28h]
  int v50; // [esp+74h] [ebp-24h]
  int v51; // [esp+78h] [ebp-20h]
  char *v52; // [esp+7Ch] [ebp-1Ch]
  int y; // [esp+80h] [ebp-18h] BYREF
  __int64 v54; // [esp+84h] [ebp-14h] BYREF
  const struct tagTOUCHTARGETINGCONTACT *x; // [esp+8Ch] [ebp-Ch]

  v36 = 0;
  v38.x = a5;
  v40.y = a7;
  v38.y = a6;
  BugCheckParameter2 = a1;
  LODWORD(v41) = a8;
  v32 = a3;
  *a3 = 1;
  HIDWORD(v41) = a9;
  v42 = a10;
  if ( a4 == 1 && (*(_DWORD *)(a1 + 8) == _gptiCurrent || *(_DWORD *)(a1 + 156) == _gptiCurrent) )
  {
    v31[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v31[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v31;
    v31[1] = BugCheckParameter2;
    HMLockObject(BugCheckParameter2);
    EtwTraceTouchTargetingPointerTargetStart();
    v13 = (int *)a2[6];
    v43[0] = *((unsigned __int16 *)a2 + 2);
    v43[1] = v13[8];
    v43[2] = v13[9];
    v44 = v13[4];
    v45 = v13[5];
    v46 = v13[6];
    v47 = (int *)v13[7];
    v48 = *v13;
    v49 = v13[1];
    v50 = v13[2];
    v51 = v13[3];
    v52 = (char *)v13[10];
    _InterlockedIncrement(&glSendMessage);
    v14 = (_DWORD *)BugCheckParameter2;
    v15 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x24Du, 0, (int)v43, 0, 0, 0, 1u, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1();
    v35 = (v15 >> 20) & 0xFFF;
    if ( (unsigned __int16)v35 <= 0xFFDu )
    {
      if ( ((v15 >> 20) & 0xFFFu) >= a2[10] && a2[9] )
      {
        if ( (a2[35] & 1) == 0 )
          return v36;
        v16 = PtInRect((_DWORD *)(v14[5] + 52), v38.x + a2[7], v38.y + a2[8]);
      }
      else
      {
        v16 = 1;
      }
      if ( v16 )
      {
        v17 = (const struct tagTOUCHTARGETINGCONTACT *)((v15 >> 10) & 0x3FF);
        v33 = v17;
        x = v17;
        if ( (v15 & 0xFFC00u) > 0x7FC00 )
        {
          v17 = (const struct tagTOUCHTARGETINGCONTACT *)((char *)v17 - 1024);
          x = v17;
          v33 = v17;
        }
        v18 = v15 & 0x3FF;
        v34 = v18;
        v40.x = v18;
        if ( v18 > 0x1FF )
        {
          v18 -= 1024;
          v40.x = v18;
          v34 = v18;
        }
        v29.x = v18;
        if ( OffsetInContact(a2[6], v38, v17, v29) )
        {
          v19 = (const struct tagTOUCHTARGETINGCONTACT *)((char *)x + v38.x);
          v20 = v40.x + v38.y;
          v21 = a2[15] == 0;
          v38.x += (LONG)x;
          v38.y += v40.x;
          if ( v21 )
          {
            v23 = a2 + 4;
            v24 = (HWND)xxxWindowHitTest2((int)v14, a2 + 4, a2[5], (int)v19, v20);
          }
          else
          {
            v39 = v19;
            v22 = v14[5];
            v40.x = v20;
            LogicalToPhysicalDPIPoint(&v39, &v38, *(_DWORD *)(v22 + 184), 0);
            v23 = a2 + 4;
            v44 = *a2;
            v45 = a2[1];
            v46 = a2[2];
            v48 = a2[5];
            v28.right = v40.x;
            v49 = 0;
            v50 = 0;
            v51 = 0;
            HIDWORD(v54) = v39;
            x = (const struct tagTOUCHTARGETINGCONTACT *)v40.x;
            v47 = a2 + 4;
            v52 = (char *)&v54 + 4;
            v24 = xxxDCEWindowHitTest2Internal((int)&v44, v14, v39, *(struct tagPOINT *)&v28.right, v30);
          }
          v36 = v24;
          if ( v24 )
          {
            v40.x = ValidateHwnd(v24);
            if ( v40.x )
            {
              if ( IsCompositionInputWindow() )
                v35 = 0;
              else
                *v23 = 1;
              y = v40.y;
              v54 = v41;
              x = v42;
              TransformRectBetweenCoordinateSpaces(&y, &v40.y, v40.x, BugCheckParameter2);
              *(_QWORD *)&v28.left = v54;
              v28.right = (LONG)x;
              v25 = v35;
              v26 = 1;
              _TTUpdateBestTarget(
                (int *)v40.x,
                a2,
                (struct tagPNTRWINDOWHITTTESTARGS *)(unsigned __int16)v35,
                (struct tagWND *)&v33,
                0,
                (const struct tagPOINT *)1,
                (struct tagRECT *)1,
                y,
                v28,
                (unsigned int)v30);
              if ( !v25 || !*(_DWORD *)(BugCheckParameter2 + 60) )
                v26 = 0;
              *v32 = v26;
            }
          }
        }
      }
    }
  }
  return v36;
}
