/*
 * XREFs of _SetWindowExtendedBoundsMargin@8 @ 0x258E8
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     ?AreMarginsEqual@@YG_NABUFRAME_MARGIN@@0@Z @ 0x259BC (-AreMarginsEqual@@YG_NABUFRAME_MARGIN@@0@Z.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __fastcall SetWindowExtendedBoundsMargin(struct tagQ *a1, _WORD *a2)
{
  int v5; // eax
  int v6; // esi
  const struct FRAME_MARGIN *v7; // [esp+0h] [ebp-34h]
  int v8; // [esp+0h] [ebp-34h]
  const struct FRAME_MARGIN *v9; // [esp+4h] [ebp-30h]
  struct tagINPUT_MESSAGE_SOURCE *v10; // [esp+4h] [ebp-30h]
  _BYTE v11[36]; // [esp+8h] [ebp-2Ch] BYREF
  int v12; // [esp+2Ch] [ebp-8h]
  int v13; // [esp+30h] [ebp-4h]

  if ( !IsProcessDwm(**(_DWORD **)(_gptiCurrent + 232)) )
    return -1073741790;
  memset(v11, 0, sizeof(v11));
  if ( !_GetWindowCompositionInfo(a1, v11) )
    return -1073741816;
  LOWORD(v12) = *a2;
  HIWORD(v12) = a2[4];
  LOWORD(v13) = a2[2];
  HIWORD(v13) = a2[6];
  if ( AreMarginsEqual(v7, v9) )
    return 0;
  v5 = Win32AllocPool(8, 2020832085);
  v6 = v5;
  if ( !v5 )
    return -1073741801;
  *(_DWORD *)v5 = v12;
  *(_DWORD *)(v5 + 4) = v13;
  if ( PostEventMessageEx((struct tagTHREADINFO *)0x1C, a1, 0, (struct tagWND *)v5, 0, 0, v8, v10) )
    return 0;
  Win32FreePool(v6);
  return -1073741823;
}
