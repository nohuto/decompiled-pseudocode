/*
 * XREFs of __MapDesktopObject@4 @ 0xA6EA0
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _MapDesktopObject(int a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  int CurrentProcessWin32Process; // eax
  _DWORD *DesktopView; // eax
  int v7; // [esp-4h] [ebp-Ch]

  _gbValidateHandleForIL = 0;
  v1 = HMValidateHandle(a1, 255);
  v2 = v1;
  if ( v1
    && (v3 = _HMPheFromObject(v1), (*(_BYTE *)(v3 + 13) & 0x40) == 0)
    && (v7 = *(_DWORD *)(v2 + 12),
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, v7)) != 0) )
  {
    return *(_DWORD *)v3 + DesktopView[2];
  }
  else
  {
    return 0;
  }
}
