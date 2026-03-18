/*
 * XREFs of _NtUserNotifyIMEStatus@12 @ 0xA5820
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxNotifyIMEStatus@12 @ 0xA58A2 (_xxxNotifyIMEStatus@12.c)
 */

int __stdcall NtUserNotifyIMEStatus(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v3 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v7 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v7;
    v8 = v4;
    HMLockObject(v4);
    if ( (*_gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v5, a2, a3);
      v3 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x78);
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
