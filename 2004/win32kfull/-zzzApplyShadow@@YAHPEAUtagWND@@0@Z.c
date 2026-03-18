/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013514C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     _GetLayeredWindowAttributes @ 0x1C01353EC (_GetLayeredWindowAttributes.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013548C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzApplyShadow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  unsigned int v5; // ebx
  HDC CompatibleDC; // rax
  HDC v8; // rdi
  HBITMAP WindowShadow; // r14
  __int64 v10; // rdx
  LONG v11; // r8d
  struct tagPOINT v13; // [rsp+50h] [rbp-18h] BYREF
  struct tagSIZE v14; // [rsp+58h] [rbp-10h] BYREF
  int v15; // [rsp+A0h] [rbp+38h] BYREF
  int v16; // [rsp+A8h] [rbp+40h] BYREF
  char v17; // [rsp+B0h] [rbp+48h] BYREF
  struct tagPOINT v18; // [rsp+B8h] [rbp+50h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v4 = *((_QWORD *)a2 + 5);
  v5 = 0;
  v13 = 0LL;
  v16 = 0;
  *(_DWORD *)(v4 + 288) = *(_DWORD *)(v2 + 288);
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v8 = CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  WindowShadow = GenerateWindowShadow(a1, CompatibleDC);
  if ( !WindowShadow )
  {
    GreDeleteDC(v8);
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(_DWORD *)(v10 + 88);
  v18.x = v11;
  v18.y = *(_DWORD *)(v10 + 92);
  v14.cx = *(_DWORD *)(v10 + 96) - *(_DWORD *)(v10 + 88) + 5;
  v14.cy = *(_DWORD *)(v10 + 100) - *(_DWORD *)(v10 + 92) + 5;
  if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
    v18.x = v11 - 5;
  v15 = 33488896;
  if ( !(unsigned int)GetLayeredWindowAttributes(a1, &v17, (char *)&v15 + 2, &v16) || (v16 & 2) == 0 )
    BYTE2(v15) = -1;
  ++gdwDeferWinEvent;
  LOBYTE(v5) = (int)zzzUpdateLayeredWindow(a2, 0LL, &v18, &v14, v8, &v13, 0, (struct _BLENDFUNCTION *)&v15, 2u, 0LL) >= 0;
  GreDeleteDC(v8);
  GreDeleteObject(WindowShadow);
  zzzEndDeferWinEventNotify();
  return v5;
}
