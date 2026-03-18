/*
 * XREFs of xxxSwitchWndProc @ 0x1C01F4ED0
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E3620 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0094BE8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C011D004 (xxxCancelCoolSwitch.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3568 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-20h] BYREF

  v16[2] = 0LL;
  v15 = 0LL;
  v7 = a2;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, a3, a4, 672, 1, &v15) )
    return v15;
  **((_QWORD **)a1 + 35) = a1;
  switch ( v7 )
  {
    case 1u:
      zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 17) + 88LL));
      break;
    case 0x10u:
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
      xxxCancelCoolSwitch();
      break;
    case 0x14u:
    case 0x3Au:
      v16[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v16;
      v16[1] = a1;
      HMLockObject(a1);
      xxxPaintSwitchWindow(a1, v9, v10, v11);
      ThreadUnlock1(v13, v12, v14);
      return 0LL;
  }
  return xxxDefWindowProc(a1, v7, a3, a4);
}
