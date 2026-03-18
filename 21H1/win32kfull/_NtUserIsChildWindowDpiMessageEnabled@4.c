/*
 * XREFs of _NtUserIsChildWindowDpiMessageEnabled@4 @ 0x8E33A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserIsChildWindowDpiMessageEnabled(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // edx
  int v8; // ebx
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
    if ( (*(_DWORD *)(v3[5] + 184) & 0xF) == 2 )
    {
      v4 = v3;
      do
      {
        v5 = v4[14];
        if ( v5 )
        {
          v6 = v4[3];
          v7 = 0;
          if ( v6 )
          {
            v8 = *(_DWORD *)(v6 + 4);
            if ( v8 )
              v7 = *(_DWORD *)(v8 + 12);
          }
          if ( v5 == v7 )
            break;
        }
        v4 = (_DWORD *)v4[14];
      }
      while ( v5 );
      if ( v3 == v4 || v4 && (*(_DWORD *)(v4[5] + 144) & 0x20000000) != 0 )
        v1 = 1;
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
