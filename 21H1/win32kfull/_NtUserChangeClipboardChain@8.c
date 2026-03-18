/*
 * XREFs of _NtUserChangeClipboardChain@8 @ 0x15FFC8
 * Callers:
 *     <none>
 * Callees:
 *     _xxxChangeClipboardChain@8 @ 0x182FF0 (_xxxChangeClipboardChain@8.c)
 */

int __stdcall NtUserChangeClipboardChain(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v6; // [esp+8h] [ebp-18h] BYREF
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]
  int v12; // [esp+28h] [ebp+8h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v2 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v12 = v3;
  if ( v3 )
  {
    v9 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v9;
    v10 = v3;
    HMLockObject(v3);
    if ( a2 )
    {
      v4 = ValidateHwnd(a2);
      if ( !v4 )
      {
LABEL_9:
        ThreadUnlock1();
        goto LABEL_10;
      }
    }
    else
    {
      v4 = 0;
    }
    v6 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v6;
    v7 = v4;
    if ( v4 )
      HMLockObject(v4);
    v2 = xxxChangeClipboardChain(v12, v4);
    ThreadUnlock1();
    goto LABEL_9;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v2;
}
