/*
 * XREFs of MiRemoveUnusedSegments @ 0x14052A93C
 * Callers:
 *     MiProcessDereferenceList @ 0x140387CBC (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x1403BD5A0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiProcessDereferenceList @ 0x140387CBC (MiProcessDereferenceList.c)
 *     CcUnmapInactiveViews @ 0x1404EB620 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x140528DF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiShouldTrimUnusedSegments @ 0x14052AD64 (MiShouldTrimUnusedSegments.c)
 */

__int64 __fastcall MiRemoveUnusedSegments(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r15d
  unsigned __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 >= qword_140C52AE8 )
      v6 = 0LL;
    else
      v6 = qword_140C52AE8 - a2;
    v7 = 0;
  }
  else
  {
    v7 = 32;
    v6 = 0LL;
  }
  v8 = 1000LL * *(_QWORD *)(a1 + 6928) / qword_140C528D0;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 1696);
    v10 = v9;
    if ( v8 * (qword_140C4C9D8 / 0x3E8uLL) <= v9 )
      v10 = v8 * (qword_140C4C9D8 / 0x3E8uLL);
    if ( v10 )
    {
      v11 = v9 - v10;
      if ( v11 < 0x100000 )
        v11 = 0x100000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a2 )
          {
            if ( qword_140C52AE8 <= v6 )
              return v2;
          }
          else
          {
            if ( !v7 || qword_140C52AE8 < 9 * (qword_140C52B68 / 0xAuLL) )
              return v2;
            --v7;
          }
          if ( !(unsigned int)MiShouldTrimUnusedSegments() || *(_QWORD *)(a1 + 1696) <= v11 )
            return v2;
          if ( (++v3 & 0x3F) == 0 )
          {
            MiProcessDereferenceList(a1, 0);
            if ( v3 >= 0x80 )
              CcUnmapInactiveViews(0LL);
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          if ( *(_QWORD *)(a1 + 1704) != a1 + 1704 )
            break;
          if ( *(_QWORD *)(a1 + 1720) == a1 + 1720 )
          {
            if ( *(_DWORD *)(a1 + 108) || !(unsigned int)CcUnmapInactiveViews(0LL) )
              return v2;
          }
          else if ( (int)MiDeleteCachedSubsection(a1) >= 0 )
          {
            goto LABEL_30;
          }
        }
        if ( (unsigned int)MiDeleteCachedSegment(a1) )
LABEL_30:
          v2 = 1;
      }
    }
  }
  return 0LL;
}
