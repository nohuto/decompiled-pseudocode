/*
 * XREFs of _NtUserFlashWindowEx@4 @ 0x161709
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x74B40 (-ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

unsigned int __stdcall NtUserFlashWindowEx(unsigned int a1)
{
  unsigned int v1; // ebx
  const void *v2; // esi
  unsigned __int16 v3; // di
  struct tagHOOK **v4; // esi
  _BYTE v6[20]; // [esp+10h] [ebp-58h] BYREF
  _DWORD v7[5]; // [esp+24h] [ebp-44h] BYREF
  int v8; // [esp+38h] [ebp-30h] BYREF
  ULONG_PTR v9; // [esp+3Ch] [ebp-2Ch]
  int v10; // [esp+40h] [ebp-28h]
  ULONG_PTR BugCheckParameter2; // [esp+4Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  memset(v6, 0, sizeof(v6));
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v1 = 0;
  BugCheckParameter2 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v2 = (const void *)a1;
  if ( a1 + 20 < a1 || a1 + 20 > _MmUserProbeAddress )
    v2 = (const void *)_MmUserProbeAddress;
  qmemcpy(v7, v2, sizeof(v7));
  qmemcpy(v6, v7, sizeof(v6));
  ms_exc.registration.TryLevel = -2;
  if ( ValidateHWNDND(v7[1], &BugCheckParameter2) && v7[0] == 20 && (v3 = v7[2], (v7[2] & 0xFFFFFFF0) == 0) )
  {
    v8 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v8;
    v4 = (struct tagHOOK **)BugCheckParameter2;
    v9 = BugCheckParameter2;
    HMLockObject(BugCheckParameter2);
    v1 = xxxFlashWindow(v4, v3 | (LOWORD(v7[3]) << 16), v7[4]);
    ThreadUnlock1();
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
