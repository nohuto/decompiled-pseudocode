/*
 * XREFs of EtwpCovSampCaptureFreeLookasides @ 0x140945138
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1405AD05C (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140405340 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405AD96C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampCaptureFreeLookasides(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rdi
  _SLIST_HEADER *i; // rbx
  _SLIST_HEADER *v4; // rdi
  _SLIST_HEADER *j; // rbx
  PSLIST_ENTRY v6; // rsi
  _QWORD *p_Next; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // r8

  v1 = a1 + 36;
  for ( i = (_SLIST_HEADER *)a1[36].Alignment; i != v1; i = (_SLIST_HEADER *)i->Alignment )
    EtwpCovSampLookasideFlushFreeListToCleanupList(i - 1);
  v4 = a1 + 37;
  for ( j = (_SLIST_HEADER *)a1[37].Alignment; j != v4; j = (_SLIST_HEADER *)j->Alignment )
  {
    v6 = RtlpInterlockedFlushSList(j - 1);
    while ( v6 )
    {
      p_Next = &v6->Next;
      v6 = v6->Next;
      v8 = p_Next[3];
      if ( *(_QWORD **)(v8 + 8) != p_Next + 3 || (v9 = (_QWORD *)p_Next[4], (_QWORD *)*v9 != p_Next + 3) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ExFreePoolWithTag(p_Next, 0x56777445u);
    }
    *((_DWORD *)&j[3].HeaderX64 + 2) = 0;
  }
}
