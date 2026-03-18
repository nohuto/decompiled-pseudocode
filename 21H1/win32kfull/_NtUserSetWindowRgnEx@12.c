/*
 * XREFs of _NtUserSetWindowRgnEx@12 @ 0x16A206
 * Callers:
 *     <none>
 * Callees:
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSetWindowRgn@12 @ 0x9CBE8 (_xxxSetWindowRgn@12.c)
 *     _MirrorRegion@12 @ 0x9CC70 (_MirrorRegion@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetWindowRgnEx(int a1, int a2, char a3)
{
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  int CurrentProcess; // eax
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v12 = 0;
  v3 = 1;
  v13 = 0;
  v14 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v4 = (_DWORD *)ValidateHwnd(a1);
  v5 = v4;
  if ( !v4 || (v6 = *(_WORD *)(v4[5] + 30) & 0x3FFF, v6 == 669) || v6 == 671 )
  {
    v3 = 0;
    goto LABEL_21;
  }
  v12 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v12;
  v13 = v5;
  HMLockObject(v5);
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v8 = UserValidateCopyRgn(a2);
        v9 = v8;
        if ( !v8
          || (v10 = v5[5], (*(_BYTE *)(v10 + 18) & 0x40) != 0)
          && v8 > 2
          && (!GreOffsetRgn(v8, -*(_DWORD *)(v10 + 52), -*(_DWORD *)(v10 + 56))
           || !MirrorRegion((int)v5, v9, 0)
           || !GreOffsetRgn(v9, *(_DWORD *)(v5[5] + 52), *(_DWORD *)(v5[5] + 56))) )
        {
          v3 = 0;
          goto LABEL_19;
        }
      }
      else
      {
        v9 = 1;
      }
      SelectWindowRgn((int)v5, (HRGN)v9, 0);
      goto LABEL_19;
    }
    v3 = xxxSetWindowRgn(v5, a2, a3 & 2);
  }
  else
  {
    v3 = 0;
    UserSetLastError((struct _NT_TIB *)5);
  }
LABEL_19:
  ThreadUnlock1();
LABEL_21:
  UserSessionSwitchLeaveCrit();
  return v3;
}
