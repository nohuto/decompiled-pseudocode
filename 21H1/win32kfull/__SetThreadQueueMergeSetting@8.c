/*
 * XREFs of __SetThreadQueueMergeSetting@8 @ 0x16D8DF
 * Callers:
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _FindShellFrameThreadFromAssociation@4 @ 0x141D67 (_FindShellFrameThreadFromAssociation@4.c)
 */

int __stdcall _SetThreadQueueMergeSetting(int a1, int a2)
{
  int v3; // eax
  struct _LIST_ENTRY *v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // [esp-8h] [ebp-Ch]

  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  v3 = PtiFromThreadId(a1);
  v4 = (struct _LIST_ENTRY *)v3;
  if ( !v3 || (*(_DWORD *)(v3 + 688) & 0x40000) != 0 || (*(_BYTE *)(v3 + 264) & 2) != 0 )
  {
    v6 = 1444;
    goto LABEL_19;
  }
  v5 = *(_DWORD *)(v3 + 232);
  if ( v5 == PsGetCurrentProcessWin32Process() )
  {
    if ( IsImmersiveAppRestricted(v5) )
    {
      if ( (a2 & 1) != 0 )
      {
        if ( v4[29].Blink[36].Flink != (struct _LIST_ENTRY *)1 || FindShellFrameThreadFromAssociation(v4) )
        {
          v6 = 170;
          goto LABEL_19;
        }
        v4[33].Flink = (struct _LIST_ENTRY *)((int)v4[33].Flink | 0xC0);
      }
      else
      {
        v4[33].Flink = (struct _LIST_ENTRY *)((int)v4[33].Flink & 0xFFFFFF3F);
      }
      return 1;
    }
    v7 = 50;
  }
  else
  {
    v7 = 5;
  }
  v6 = v7;
LABEL_19:
  UserSetLastError((struct _NT_TIB *)v6);
  return 0;
}
