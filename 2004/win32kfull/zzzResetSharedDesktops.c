/*
 * XREFs of zzzResetSharedDesktops @ 0x1C00521B0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C0072BA0 (CalcVisRgn.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  _DWORD *v14; // r9
  __int64 v16; // [rsp+20h] [rbp-28h]
  HRGN v17[2]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)v17 = *(_OWORD *)(*gpDispInfo + 24LL);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = (int)v17[0];
    v9 = (int)v17[1];
    v10 = (unsigned __int64)v17[0] >> 32;
    v11 = (unsigned __int64)v17[1] >> 32;
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) = v10;
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 96LL) = v9;
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 100LL) = v11;
      a1 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = v10;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = v9;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) = v11;
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
  }
  v17[0] = (HRGN)CreateEmptyRgn(a1);
  CalcVisRgn(v17);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 56LL), v17[0], 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzUpdateWindowsAfterModeChange(a2, a3);
  v13 = *(_QWORD **)(v5 + 8);
  if ( (*(_DWORD *)(*v13 + 64LL) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v13[3], 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v14 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 96LL) + 40LL);
  LODWORD(v16) = (v14[9] - v14[7]) / 2;
  HIDWORD(v16) = (v14[10] - v14[8]) / 2;
  gptSSCursor = v16;
  return zzzInternalSetCursorPos(v16, HIDWORD(v16), 2, 0);
}
