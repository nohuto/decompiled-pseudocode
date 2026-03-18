/*
 * XREFs of _AssociateShellFrameAppThreads@8 @ 0x141C0E
 * Callers:
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 * Callees:
 *     <none>
 */

int __fastcall AssociateShellFrameAppThreads(int a1, int a2)
{
  int result; // eax
  struct _LIST_ENTRY *v5; // esi
  int v6; // ebx
  struct _LIST_ENTRY *v7; // eax
  int v8; // edi
  unsigned int v9; // edx
  struct _LIST_ENTRY *Flink; // eax

  result = Win32AllocPoolZInit(20, 2037609301);
  v5 = (struct _LIST_ENTRY *)result;
  if ( result )
  {
    *(_DWORD *)(result + 8) = a1;
    *(_DWORD *)(result + 12) = a2;
    v6 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v8 = MEMORY[0xFFDF0324];
      v9 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v8 = MEMORY[0xFFDF0324];
          v9 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v5 = (struct _LIST_ENTRY *)result;
        v6 = MEMORY[0xFFDF0004];
      }
      v7 = (struct _LIST_ENTRY *)(v6 * (v8 << 8) + (((unsigned int)v6 * (unsigned __int64)v9) >> 24));
    }
    else
    {
      v7 = (struct _LIST_ENTRY *)(((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24);
    }
    v5[2].Flink = v7;
    Flink = gShellFrameAppThreadsAssociationList.Flink;
    if ( gShellFrameAppThreadsAssociationList.Flink->Blink != &gShellFrameAppThreadsAssociationList )
      __fastfail(3u);
    v5->Flink = gShellFrameAppThreadsAssociationList.Flink;
    v5->Blink = &gShellFrameAppThreadsAssociationList;
    Flink->Blink = v5;
    gShellFrameAppThreadsAssociationList.Flink = v5;
    return 1;
  }
  return result;
}
