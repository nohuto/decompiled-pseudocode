/*
 * XREFs of _NtUserRequestMoveSizeOperation@12 @ 0x16837F
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SG_NPAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x19FC05 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SG_NPAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserRequestMoveSizeOperation(int a1, unsigned int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v3 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
    if ( v6 != 669 && v6 != 671 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v4;
      HMLockObject(v4);
      if ( IsDesktopApp(*(_DWORD *)(_gptiCurrent + 232)) )
      {
        UserSetLastError((struct _NT_TIB *)5);
      }
      else if ( a2 > 8 )
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
      else
      {
        v3 = (unsigned __int8)CMoveSizeRequest::xxxRequestMoveSizeOperation(v5, a2, a3);
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
