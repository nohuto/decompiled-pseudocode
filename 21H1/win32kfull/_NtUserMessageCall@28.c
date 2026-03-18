/*
 * XREFs of _NtUserMessageCall@28 @ 0x3C668
 * Callers:
 *     <none>
 * Callees:
 *     _NtUserfnNCDESTROY@28 @ 0x3C762 (_NtUserfnNCDESTROY@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserMessageCall(int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v7 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  if ( (a1 == 0xFFFF || a1 == -1) && (a6 == 695 || a6 == 696) )
  {
    v9 = -1;
  }
  else
  {
    v8 = ValidateHwnd(a1);
    v9 = v8;
    if ( !v8 )
      goto LABEL_11;
    v12 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v12;
    v13 = v8;
    HMLockObject(v8);
  }
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSetLastError(87);
  }
  else
  {
    if ( a2 >= 0x400 )
    {
      v10 = ((int (__stdcall *)(int, unsigned int, int, int, int))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(v9, a2, a3, a4, a5);
    }
    else
    {
      _mm_lfence();
      v10 = gapfnMessageCall[(unsigned __int8)MessageTable[a2]](v9, a2, a3, a4, a5, a6, a7 != 0);
    }
    v7 = v10;
  }
  if ( v9 != -1 )
    ThreadUnlock1();
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v7;
}
