/*
 * XREFs of _NtUserSetBridgeWindowChild@8 @ 0x1687E3
 * Callers:
 *     <none>
 * Callees:
 *     _ValidateHwndIAM@4 @ 0x25B92 (_ValidateHwndIAM@4.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 */

int __stdcall NtUserSetBridgeWindowChild(void *a1, void *a2)
{
  int v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD v7[3]; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v8[3]; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+20h] [ebp-4h]
  _DWORD *v10; // [esp+2Ch] [ebp+8h]

  v2 = 0;
  EnterCrit(0, 1);
  v9 = _gptiCurrent;
  if ( IAMThreadAccessGranted(_gptiCurrent) )
  {
    v3 = (_DWORD *)ValidateHwndIAM(a1);
    if ( v3
      && (v4 = (_DWORD *)ValidateHwndIAM(a2), (v10 = v4) != 0)
      && (*(_BYTE *)(v4[5] + 146) & 0x20) != 0
      && _IsTopLevelWindow(v4)
      && _IsTopLevelWindow(v3)
      && (v5 = v3[5], (*(_BYTE *)(v5 + 146) & 0x20) == 0)
      && (*(_BYTE *)(v5 + 23) & 8) == 0 )
    {
      v8[2] = 0;
      v7[2] = 0;
      v8[0] = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = v8;
      v8[1] = v3;
      HMLockObject(v3);
      v7[0] = *(_DWORD *)(v9 + 228);
      *(_DWORD *)(v9 + 228) = v7;
      v7[1] = v10;
      HMLockObject(v10);
      v2 = xxxSetBridgeWindowChild(v3, v10);
      ThreadUnlock1();
      ThreadUnlock1();
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
