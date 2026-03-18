/*
 * XREFs of _MapDesktopObject @ 0x1C0025C50
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C0026530 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = HMValidateHandle(a1, a2);
  v3 = v2;
  if ( v2
    && (v5 = _HMPheFromObject(v2), (*(_BYTE *)(v5 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *(_QWORD *)(v3 + 24))) != 0) )
  {
    return *(_QWORD *)v5 + *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
