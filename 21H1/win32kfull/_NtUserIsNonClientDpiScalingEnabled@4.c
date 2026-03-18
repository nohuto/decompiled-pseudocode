/*
 * XREFs of _NtUserIsNonClientDpiScalingEnabled@4 @ 0x8E5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserIsNonClientDpiScalingEnabled(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v10; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v1 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  EnterCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v10 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v10;
    v11 = v2;
    HMLockObject(v2);
    v4 = v3[5];
    if ( (*(_DWORD *)(v4 + 184) & 0xF) == 2 )
    {
      v5 = v3[14];
      if ( v5 )
      {
        v6 = v3[3];
        v7 = 0;
        if ( v6 )
        {
          v8 = *(_DWORD *)(v6 + 4);
          if ( v8 )
            v7 = *(_DWORD *)(v8 + 12);
        }
        if ( v5 == v7 && (*(_DWORD *)(v4 + 144) & 0x10000000) != 0 )
          v1 = 1;
      }
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
