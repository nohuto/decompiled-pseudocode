/*
 * XREFs of _NtUserSetWindowRgn@12 @ 0x9CB58
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSetWindowRgn@12 @ 0x9CBE8 (_xxxSetWindowRgn@12.c)
 */

int __stdcall NtUserSetWindowRgn(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v3 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v5 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
    if ( v5 != 669 && v5 != 671 )
    {
      v7 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v7;
      v8 = v4;
      HMLockObject(v4);
      v3 = xxxSetWindowRgn(a3);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
