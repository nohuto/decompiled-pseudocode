/*
 * XREFs of _NtUserFillWindow@16 @ 0xBF3BE
 * Callers:
 *     <none>
 * Callees:
 *     _xxxFillWindow@16 @ 0x720DE (_xxxFillWindow@16.c)
 */

int __stdcall NtUserFillWindow(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v8; // [esp+8h] [ebp-18h] BYREF
  int v9; // [esp+Ch] [ebp-14h]
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]
  int v14; // [esp+2Ch] [ebp+Ch]

  v8 = 0;
  v4 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a2);
  v14 = v5;
  if ( v5 )
  {
    v11 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v11;
    v12 = v5;
    HMLockObject(v5);
    if ( a3 )
    {
      if ( !a1 )
      {
        v6 = 0;
        goto LABEL_5;
      }
      v6 = ValidateHwnd(a1);
      if ( v6 )
      {
LABEL_5:
        v8 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v8;
        v9 = v6;
        if ( v6 )
          HMLockObject(v6);
        v4 = xxxFillWindow(v6, v14, a3, a4);
        ThreadUnlock1();
      }
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
