/*
 * XREFs of _NtUserSetFallbackForeground@8 @ 0x1694A1
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SetFallbackForeground@8 @ 0x141A87 (__SetFallbackForeground@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetFallbackForeground(int a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // esi
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( IAMThreadAccessGranted(_gptiCurrent) )
  {
    if ( a1 )
    {
      v3 = (_DWORD *)ValidateHwnd(a1);
      v4 = (int)v3;
      if ( !v3 || (*(_WORD *)(v3[5] + 30) & 0x3FFF) == 0x29D || !_IsTopLevelWindow(v3) )
        goto LABEL_14;
    }
    else
    {
      v4 = 0;
    }
    if ( v4 )
    {
      if ( a2 )
        goto LABEL_11;
    }
    else if ( !a2 )
    {
LABEL_11:
      v2 = _SetFallbackForeground(v4, a2);
      goto LABEL_12;
    }
LABEL_14:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_12;
  }
  UserSetLastError((struct _NT_TIB *)5);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v2;
}
