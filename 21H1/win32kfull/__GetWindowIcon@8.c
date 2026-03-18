/*
 * XREFs of __GetWindowIcon@8 @ 0xC4AB8
 * Callers:
 *     _NtUserInternalGetWindowIcon@8 @ 0xC4A70 (_NtUserInternalGetWindowIcon@8.c)
 *     _xxxSendShutdownData@8 @ 0x194F33 (_xxxSendShutdownData@8.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     ?_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z @ 0xC4B12 (-_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z.c)
 */

int __fastcall _GetWindowIcon(int a1, int a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  struct tagCURSOR *v8; // eax
  struct tagCURSOR *v10; // [esp+0h] [ebp-8h]
  bool v11; // [esp+4h] [ebp-4h]

  v4 = *(_DWORD *)(a1 + 20);
  if ( a2 == 1 )
    v5 = *(_DWORD *)(v4 + 172);
  else
    v5 = *(_DWORD *)(v4 + 168);
  if ( (HMValidateHandleNoRip(v5, 3)
     || ((v6 = *(_DWORD *)(a1 + 76), a2 != 1) ? (v7 = *(_DWORD *)(v6 + 64)) : (v7 = *(_DWORD *)(v6 + 48)),
         v7 || dword_26B8CC))
    && (v8 = _DuplicateCursor(v10, v11)) != 0 )
  {
    return *(_DWORD *)v8;
  }
  else
  {
    return 0;
  }
}
