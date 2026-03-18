/*
 * XREFs of _MapDesktopObject @ 0x1C003C300
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C003E860 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = HMValidateHandle(a1, a2);
  v3 = v2;
  if ( v2
    && (v6 = _HMPheFromObject(v2), (*(_BYTE *)(v6 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v7),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *(_QWORD *)(v3 + 24))) != 0) )
  {
    return *(_QWORD *)v6 + *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
