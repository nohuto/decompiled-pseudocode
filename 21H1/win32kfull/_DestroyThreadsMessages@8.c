/*
 * XREFs of _DestroyThreadsMessages@8 @ 0x6FE90
 * Callers:
 *     <none>
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC3B74 (-RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z.c)
 *     _FreePointerMessageParams@4 @ 0x15A014 (_FreePointerMessageParams@4.c)
 */

_DWORD *__stdcall DestroyThreadsMessages(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v4; // edx
  struct tagQMSG *v5; // esi
  int v6; // esi
  int v7; // eax
  struct tagQMSG *v8; // ebx
  int v9; // ecx
  int v10; // edi
  struct tagMLIST *v11; // [esp+0h] [ebp-18h]
  struct tagQMSG *v12; // [esp+4h] [ebp-14h]
  _DWORD *v13; // [esp+20h] [ebp+8h]

  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(a1);
  result = a1 + 3;
  v4 = 0;
  v5 = (struct tagQMSG *)a1[3];
  v13 = a1 + 3;
  if ( v5 )
  {
    v7 = a2;
    do
    {
      v8 = *(struct tagQMSG **)v5;
      if ( *((_DWORD *)v5 + 17) == v7 )
      {
        v9 = a1[11];
        if ( (struct tagQMSG *)v9 == v5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
          {
            LOBYTE(v4) = 5;
            WPP_RECORDER_SF_qq(
              v9,
              v4,
              0x12u,
              18,
              (int)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
              (char)a1,
              a1[11]);
          }
          a1[11] = 0;
        }
        CleanEventMessage(v5);
        DelQEntry(a1 + 3, v5, 1);
        v7 = a2;
        v4 = 0;
      }
      v5 = v8;
    }
    while ( v8 );
    result = a1 + 3;
  }
  v6 = a1[7];
  if ( v6 )
  {
    do
    {
      v10 = *(_DWORD *)(v6 + 4);
      if ( *(_DWORD *)(v6 + 68) == a2 )
      {
        RemoveQMsgFromDeferList(v11, v12);
        CleanEventMessage((struct tagQMSG *)v6);
        if ( (*(_BYTE *)(v6 + 64) & 8) != 0 && !*(_DWORD *)(v6 + 60) )
        {
          if ( IsPointerInputMessage(*(_DWORD *)(v6 + 12)) )
            FreePointerMessageParams(v6);
        }
        Win32FreeToPagedLookasideList(_QEntryLookaside, v6);
      }
      result = v13;
      v6 = v10;
    }
    while ( v10 );
  }
  return result;
}
