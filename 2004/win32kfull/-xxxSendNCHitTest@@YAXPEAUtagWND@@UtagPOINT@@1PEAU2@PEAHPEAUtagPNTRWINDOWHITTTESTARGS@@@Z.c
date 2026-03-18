/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02168F0
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0216520 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0216B38 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02176F4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     DwmSyncHitTestQuery @ 0x1C00BAB30 (DwmSyncHitTestQuery.c)
 */

void __fastcall xxxSendNCHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // r15d
  __int64 v7; // rbx
  float *v9; // rax
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v15; // r14
  int *v16; // r12
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  struct tagPOINT v23; // [rsp+98h] [rbp+48h]
  struct tagPOINT v24; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+58h]

  v24 = a3;
  v23 = a2;
  v6 = 0;
  v7 = (__int64)a2;
  LODWORD(v22) = 0;
  if ( a4 )
  {
    v24.x += a4->x;
    v24.y += a4->y;
    v25 = (unsigned __int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (v9 = (float *)*((_QWORD *)a1 + 27)) != 0LL )
    {
      v10 = (int)(float)((float)(int)v25 * *v9);
      v11 = (int)(float)((float)SHIDWORD(v25) * v9[5]);
      v25 = __PAIR64__(v11, v10);
    }
    else
    {
      v11 = HIDWORD(v25);
      v10 = v25;
    }
    v23.x += v10;
    v23.y += v11;
    v7 = (__int64)v23;
    a3 = v24;
  }
  if ( PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), *(_QWORD *)&a3) )
  {
    v14 = (*(_BYTE *)(v13 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v13 + 104), v12);
    if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    {
      v15 = a6;
      v16 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
        && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0
        && v14 )
      {
        if ( gdwInAtomicOperation )
        {
          v17 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v18 = (void *)ReferenceDwmApiPort(v17);
        LODWORD(v22) = 1;
        UserSessionSwitchLeaveCrit(v20, v19, v21);
        DwmSyncHitTestQuery(
          v18,
          *(_QWORD *)a1,
          *(_DWORD *)v15,
          v7,
          *((_QWORD *)v15 + 1),
          *((_QWORD *)v15 + 2),
          -2,
          v16,
          &v22);
        EnterCrit(0LL, 1LL);
        v6 = v22;
      }
      if ( !*((_DWORD *)v15 + 21) || !v6 )
      {
        _InterlockedIncrement(&glSendMessage);
        *v16 = xxxSendTransformableMessageTimeout(
                 (unsigned __int64)a1,
                 0x84u,
                 0LL,
                 (struct _LARGE_STRING *)(LOWORD(v24.x) | (LOWORD(v24.y) << 16)),
                 0,
                 0,
                 0LL,
                 1,
                 0);
      }
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
}
