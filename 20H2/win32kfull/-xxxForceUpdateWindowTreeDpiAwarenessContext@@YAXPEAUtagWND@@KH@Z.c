/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3D1C
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3D1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5CFC (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C003A034 (GetPrimaryMonitorRectForWindow.c)
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3D1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbp
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  __int64 i; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v13; // xmm0
  int v14; // ecx
  int v15; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-20h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5 = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v8 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  UpdateWindowMonitor(a1, v8);
  i = *((_QWORD *)a1 + 14);
  if ( !a3 )
    goto LABEL_16;
  PostEventMessageEx(
    *((struct tagTHREADINFO **)a1 + 2),
    *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
    0x18u,
    0LL,
    0,
    v5,
    0LL,
    0LL);
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v21, (__int64)a1, v10, v11);
  v13 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    (int)a1,
    126,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (unsigned __int16)(v13.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | (unsigned int)((v13.m128i_i32[1] << 16)
                                                                                                 - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16)));
  if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0 )
    goto LABEL_11;
  v14 = 1;
  v15 = (v7 & 0xF) == 2 && (v7 & 0x20000000) != 0;
  if ( (v5 & 0xF) != 2 || (v5 & 0x20000000) == 0 )
    v14 = 0;
  if ( v15 != v14 )
  {
LABEL_11:
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
      9u,
      a1,
      0x1Au,
      0x2AuLL,
      -1LL,
      0LL);
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
      9u,
      a1,
      0x1Au,
      0x2EuLL,
      -1LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 240LL) )
    goto LABEL_16;
  v22[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v22;
  v22[1] = a1;
  HMLockObject(a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    ThreadUnlock1(v18, v17, v19);
LABEL_16:
    if ( !i )
      break;
    v23[2] = 0LL;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v23[0] = *(_QWORD *)(v20 + 416);
    *(_QWORD *)(v20 + 416) = v23;
    v23[1] = i;
    HMLockObject(i);
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
