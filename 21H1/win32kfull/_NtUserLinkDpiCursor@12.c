/*
 * XREFs of _NtUserLinkDpiCursor@12 @ 0x165CC9
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?LinkDpiCursor@@YGXPAUtagCURSOR@@0I@Z @ 0x14310B (-LinkDpiCursor@@YGXPAUtagCURSOR@@0I@Z.c)
 */

int __userpurge NtUserLinkDpiCursor@<eax>(struct tagCURSOR *a1@<ebx>, int a2, int a3, struct tagCURSOR *a4)
{
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int i; // eax
  unsigned int v11; // [esp+0h] [ebp-8h]

  v4 = 0;
  EnterCrit(0, 1);
  if ( !a4 )
    goto LABEL_14;
  v5 = HMValidateHandle(a2, 3);
  if ( v5 )
  {
    v6 = HMValidateHandle(a3, 3);
    v7 = v6;
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 44) & 0x1000) != 0 && (*(_DWORD *)(v5 + 44) & 0x1800) == 0 && *(_DWORD *)(v6 + 24) == v6 )
      {
        for ( i = *(_DWORD *)(v5 + 24); i; i = *(_DWORD *)(i + 20) )
        {
          if ( *(struct tagCURSOR **)(i + 40) == a4 )
            goto LABEL_12;
        }
        i = 0;
LABEL_12:
        if ( !i )
        {
          LinkDpiCursor(v7, v5, a4, a1, v11);
          v4 = 1;
          goto LABEL_15;
        }
      }
LABEL_14:
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v4;
}
