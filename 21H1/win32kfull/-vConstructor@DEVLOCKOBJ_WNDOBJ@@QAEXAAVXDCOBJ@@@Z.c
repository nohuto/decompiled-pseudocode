/*
 * XREFs of ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x1D86EC
 * Callers:
 *     ??0DEVLOCKOBJ_WNDOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0xF6A80 (--0DEVLOCKOBJ_WNDOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     _NtGdiSwapBuffers@4 @ 0x222B79 (_NtGdiSwapBuffers@4.c)
 * Callees:
 *     _UserGetHwnd@16 @ 0x1542EC (_UserGetHwnd@16.c)
 */

void __thiscall DEVLOCKOBJ_WNDOBJ::vConstructor(DEVLOCKOBJ_WNDOBJ *this, struct XDCOBJ *a2)
{
  int v3; // ebx
  int v4; // eax
  struct XDCOBJ *v5; // esi
  int *v6; // eax
  void *v7; // ecx
  int v8; // eax
  int v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v4 = *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = 0;
  v10 = v4;
  UserEnterUserCritSec();
  v5 = a2;
  DEVLOCKOBJ::bLock(this, a2, 0);
  v6 = *(int **)v5;
  if ( (*(_BYTE *)(*(_DWORD *)v5 + 24) & 1) == 0 || v6[5] )
  {
    v8 = v6[126];
    if ( v8 )
      v3 = *(_DWORD *)(v8 + 92);
    *((_DWORD *)this + 12) = v3;
  }
  else
  {
    v7 = (void *)*v6;
    v9 = *v6;
    a2 = 0;
    if ( !UserGetHwnd(v7, &a2, (int *)this + 12, v9) )
      EngSetLastError(6u);
  }
  if ( !v10 )
    UserLeaveUserCritSec();
}
