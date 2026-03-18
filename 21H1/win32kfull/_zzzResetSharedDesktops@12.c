/*
 * XREFs of _zzzResetSharedDesktops@12 @ 0x9B7CA
 * Callers:
 *     <none>
 * Callees:
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     ??4RedirectedRecttagWNDrcClient@tagWND@@QAEABUtagRECT@@ABU2@@Z @ 0x9B904 (--4RedirectedRecttagWNDrcClient@tagWND@@QAEABUtagRECT@@ABU2@@Z.c)
 *     ??4RedirectedRecttagWNDrcWindow@tagWND@@QAEABUtagRECT@@ABU2@@Z @ 0x9B93E (--4RedirectedRecttagWNDrcWindow@tagWND@@QAEABUtagRECT@@ABU2@@Z.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall zzzResetSharedDesktops(int a1, int a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int i; // esi
  int *v6; // ecx
  _DWORD *v7; // ecx
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rax
  _DWORD v12[2]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v13[4]; // [esp+14h] [ebp-14h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = (_DWORD *)(*_gpDispInfo + 12);
  v13[0] = *v4++;
  v13[1] = *v4++;
  v13[2] = *v4;
  v13[3] = v4[1];
  for ( i = *(_DWORD *)(v3 + 8); i; i = *(_DWORD *)(i + 16) )
  {
    tagWND::RedirectedRecttagWNDrcWindow::operator=(v13);
    tagWND::RedirectedRecttagWNDrcClient::operator=(v13);
  }
  v12[0] = CreateEmptyRgn();
  CalcVisRgn(
    (int)v12,
    *(_DWORD **)(*(_DWORD *)(a1 + 4) + 12),
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12),
    (struct tagWND *)1);
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  GreSelectVisRgn(*(_DWORD *)(_gpDispInfo + 28), v12[0], 1);
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  zzzUpdateWindowsAfterModeChange(a2, a3);
  v6 = *(int **)(a1 + 4);
  if ( (*(_BYTE *)(*v6 + 32) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v6[3], 0, 0);
  CCursorClip::ClearClip(_gpCursorClip);
  v7 = *(_DWORD **)(*(_DWORD *)(_gpDispInfo + 52) + 20);
  v8 = v7[6] - v7[4];
  v9 = v8 - HIDWORD(v8);
  v10 = v7[7] - v7[5];
  HIDWORD(v10) = ((int)v10 - HIDWORD(v10)) >> 1;
  _gptSSCursor[0] = v9 >> 1;
  _gptSSCursor[1] = HIDWORD(v10);
  return zzzInternalSetCursorPos((struct tagPOINT *)(v9 >> 1), SHIDWORD(v10), 2, 0);
}
