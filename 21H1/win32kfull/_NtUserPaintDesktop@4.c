/*
 * XREFs of _NtUserPaintDesktop@4 @ 0x1673D5
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxInternalPaintDesktop@12 @ 0xE7CB0 (_xxxInternalPaintDesktop@12.c)
 */

int __stdcall NtUserPaintDesktop(HDC a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  EnterCrit(0, 1);
  v2 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v2 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 12);
    v5[0] = *(_DWORD *)(_gptiCurrent + 228);
    v5[2] = 0;
    *(_DWORD *)(_gptiCurrent + 228) = v5;
    v5[1] = v3;
    if ( v3 )
      HMLockObject(v3);
    v1 = xxxInternalPaintDesktop(v3, a1, 1);
    ThreadUnlock1();
  }
  else
  {
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
