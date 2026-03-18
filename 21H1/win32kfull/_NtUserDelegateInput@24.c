/*
 * XREFs of _NtUserDelegateInput@24 @ 0xABD64
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserDelegateInput(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  _DWORD *v7; // ebx
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // esi
  int v13; // ecx
  _DWORD *v14; // esi
  _DWORD *v15; // esi
  int i; // ecx
  int v18; // ecx
  int v19; // [esp-4h] [ebp-10h]
  int v20; // [esp+14h] [ebp+8h]
  _DWORD *v21; // [esp+20h] [ebp+14h]

  v6 = 0;
  EnterCrit(0, 1);
  v7 = (_DWORD *)ValidateHwnd(a4);
  if ( v7 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_34;
    if ( a1 )
    {
      v8 = (_DWORD *)PtiFromThreadId(a1);
      if ( !v8 )
        goto LABEL_34;
    }
    else
    {
      v8 = (_DWORD *)_gptiCurrent;
    }
    v9 = v7[5];
    if ( *(char *)(v9 + 11) >= 0 && *(char *)(v9 + 12) >= 0 )
    {
      v21 = (_DWORD *)v7[2];
      v20 = v21[58];
      if ( v20 == PsGetCurrentProcessWin32Process() )
      {
        v10 = v7[38];
        if ( v10 )
        {
          if ( !a3 && (_DWORD *)v7[39] == v8 && v8[177] == a2 && !v8[178] && v10 == a5 )
          {
            v18 = 1242;
LABEL_36:
            UserSetLastError((struct _NT_TIB *)v18);
            goto LABEL_25;
          }
        }
        else if ( v20 == v8[58] && v21 != v8 && *(_DWORD *)(v8[59] + 288) == 1 && v21[62] == v8[62] && !v21[177] )
        {
          v11 = 3;
          v12 = v7 + 7;
          v7[39] = v8;
          while ( v11 )
          {
            ++v12;
            --v11;
          }
          v13 = 3;
          v14 = v8 + 54;
          while ( v13 )
          {
            ++v14;
            --v13;
          }
          v15 = v21 + 54;
          for ( i = 3; i; --i )
            ++v15;
          v7[38] = a5;
          v8[172] |= 0x2000u;
          v8[66] |= 0xC0u;
          ++v8[179];
          v8[177] = a2;
          v8[178] = a3;
          ++v21[179];
          v6 = 1;
          goto LABEL_25;
        }
      }
      v19 = 5;
LABEL_35:
      v18 = v19;
      goto LABEL_36;
    }
LABEL_34:
    v19 = 87;
    goto LABEL_35;
  }
LABEL_25:
  UserSessionSwitchLeaveCrit();
  return v6;
}
