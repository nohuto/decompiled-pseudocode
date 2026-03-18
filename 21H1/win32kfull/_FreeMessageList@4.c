/*
 * XREFs of _FreeMessageList@4 @ 0x9C39C
 * Callers:
 *     <none>
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC3B74 (-RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z.c)
 *     _FreePointerMessageParams@4 @ 0x15A014 (_FreePointerMessageParams@4.c)
 */

void __userpurge FreeMessageList(struct tagMLIST *a1@<ebx>, int a2)
{
  struct tagQMSG *v2; // esi
  int v3; // esi
  int v4; // ebx
  struct tagMLIST *v5; // [esp-4h] [ebp-Ch]
  struct tagQMSG *v6; // [esp+0h] [ebp-8h]

  while ( 1 )
  {
    v2 = *(struct tagQMSG **)a2;
    if ( !*(_DWORD *)a2 )
      break;
    CleanEventMessage(*(struct tagQMSG **)a2);
    DelQEntry((_DWORD *)a2, v2, 1);
  }
  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    v5 = a1;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      RemoveQMsgFromDeferList(v5, v6);
      CleanEventMessage((struct tagQMSG *)v3);
      if ( (*(_BYTE *)(v3 + 64) & 8) != 0 && !*(_DWORD *)(v3 + 60) )
      {
        if ( IsPointerInputMessage(*(_DWORD *)(v3 + 12)) )
          FreePointerMessageParams(v3);
      }
      Win32FreeToPagedLookasideList(_QEntryLookaside, v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
