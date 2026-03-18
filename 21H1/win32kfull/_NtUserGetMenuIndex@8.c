/*
 * XREFs of _NtUserGetMenuIndex@8 @ 0x16378C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserGetMenuIndex(int a1, int a2)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // edx
  _DWORD *v7; // eax

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHmenu(a1);
  if ( !v3 || (v4 = ValidateHmenu(a2)) == 0 )
  {
LABEL_8:
    v5 = v2;
    goto LABEL_9;
  }
  v5 = -1;
  v6 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 24);
  if ( v6 )
  {
    v7 = (_DWORD *)(*(_DWORD *)(v3 + 56) + 8);
    while ( *v7 != v4 )
    {
      ++v2;
      v7 += 20;
      if ( v2 >= v6 )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v5;
}
