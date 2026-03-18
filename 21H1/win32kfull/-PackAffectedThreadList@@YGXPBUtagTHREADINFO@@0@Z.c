/*
 * XREFs of ?PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z @ 0xC8478
 * Callers:
 *     _PackAffectedThreadsFromThreadCleanup@4 @ 0xA250C (_PackAffectedThreadsFromThreadCleanup@4.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 * Callees:
 *     ?InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z @ 0xA2540 (-InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z.c)
 *     _UnpackAffectedThreadList@0 @ 0xC843C (_UnpackAffectedThreadList@0.c)
 */

void __fastcall PackAffectedThreadList(int a1, int a2)
{
  int v2; // eax
  struct _LIST_ENTRY *v3; // esi
  struct _LIST_ENTRY *v4; // edi
  struct _LIST_ENTRY **p_Blink; // ebx
  struct _LIST_ENTRY **v6; // edi
  struct _LIST_ENTRY *v7; // ebx
  int v8; // ecx
  struct _LIST_ENTRY *v9; // eax
  struct _LIST_ENTRY *Flink; // eax
  struct _LIST_ENTRY **v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]

  v2 = a1;
  v12 = a2;
  v3 = 0;
  v4 = *(struct _LIST_ENTRY **)(a1 + 248);
  p_Blink = &v4[11].Blink;
  v11 = &v4[11].Blink;
  if ( !IsListEmpty(&gListAffectedThreadsForQueueRecalc) )
  {
    Flink = off_266254[1].Flink;
    if ( !Flink || Flink[31].Flink == v4 )
    {
      v3 = (gnThreadsAffectedForQueueRecalc & 0x3F) != 0 ? (struct _LIST_ENTRY *)&off_266254[1].Blink : 0;
    }
    else
    {
      UnpackAffectedThreadList();
      a2 = v12;
    }
    v2 = a1;
  }
  v6 = (struct _LIST_ENTRY **)*p_Blink;
  if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
  {
    while ( 1 )
    {
      v7 = (struct _LIST_ENTRY *)(v6 - 101);
      v8 = (int)*(v6 - 42);
      if ( (v8 == *(_DWORD *)(v2 + 236)
         || v8 == _gpqForeground
         || v8 == _gpqForegroundPrev
         || a2 && v8 == *(_DWORD *)(a2 + 236))
        && ((int)v7[33].Flink & 1) == 0
        && !InAffectedThreadList((struct _LIST_ENTRY *)(v6 - 101)) )
      {
        if ( (gnThreadsAffectedForQueueRecalc & 0x3F) == 0 )
        {
          v3 = (struct _LIST_ENTRY *)Win32AllocPoolZInit(768, 1767994197);
          if ( !v3 )
          {
            UnpackAffectedThreadList();
            return;
          }
        }
        v3[1].Flink = v7;
        v9 = off_266254;
        if ( off_266254->Flink != &gListAffectedThreadsForQueueRecalc )
          __fastfail(3u);
        v3->Flink = &gListAffectedThreadsForQueueRecalc;
        v3->Blink = v9;
        v9->Flink = v3;
        off_266254 = v3;
        v3 = (struct _LIST_ENTRY *)((char *)v3 + 12);
        ++gnThreadsAffectedForQueueRecalc;
      }
      v6 = (struct _LIST_ENTRY **)*v6;
      if ( v6 == v11 )
        return;
      a2 = v12;
      v2 = a1;
    }
  }
}
