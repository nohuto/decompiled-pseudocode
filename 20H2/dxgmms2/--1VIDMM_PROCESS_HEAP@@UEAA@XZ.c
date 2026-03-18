/*
 * XREFs of ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C00CC618
 * Callers:
 *     ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C0029640 (--_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0022AC8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(VIDMM_PROCESS_HEAP *this, __int64 a2, __int64 a3)
{
  DXGFASTMUTEX *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax

  *(_QWORD *)this = &VIDMM_PROCESS_HEAP::`vftable';
  v4 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v4 )
    DXGFASTMUTEX::`scalar deleting destructor'(v4, a2, a3);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((VIDMM_PROCESS_HEAP **)this + 26) != (VIDMM_PROCESS_HEAP *)((char *)this + 208) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2);
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 2LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 24) != (VIDMM_PROCESS_HEAP *)((char *)this + 192) )
  {
    v6 = WdLogNewEntry5_WdCriticalError(v4, a2);
    *(_QWORD *)(v6 + 24) = 270LL;
    *(_QWORD *)(v6 + 32) = 2LL;
    *(_QWORD *)(v6 + 40) = 1LL;
    *(_OWORD *)(v6 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 28) != (VIDMM_PROCESS_HEAP *)((char *)this + 224) )
  {
    v7 = WdLogNewEntry5_WdCriticalError(v4, a2);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(_QWORD *)(v7 + 24) = 270LL;
    *(__m128i *)(v7 + 32) = si128;
    *(_OWORD *)(v7 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 30) != (VIDMM_PROCESS_HEAP *)((char *)this + 240) )
  {
    v9 = WdLogNewEntry5_WdCriticalError(v4, a2);
    v10 = 2LL;
    v11 = 2LL;
    *(_QWORD *)(v9 + 24) = 270LL;
    v12 = (_QWORD *)(v9 + 32);
    do
    {
      *v12++ = v10++;
      --v11;
    }
    while ( v11 );
    *(_OWORD *)(v9 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 32) != (VIDMM_PROCESS_HEAP *)((char *)this + 256) )
  {
    v13 = WdLogNewEntry5_WdCriticalError(v4, a2);
    *(_QWORD *)(v13 + 24) = 270LL;
    *(_QWORD *)(v13 + 32) = 2LL;
    *(_QWORD *)(v13 + 40) = 4LL;
    *(_OWORD *)(v13 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 34) != (VIDMM_PROCESS_HEAP *)((char *)this + 272) )
  {
    v14 = WdLogNewEntry5_WdCriticalError(v4, a2);
    *(_QWORD *)(v14 + 24) = 270LL;
    *(_QWORD *)(v14 + 32) = 2LL;
    *(_QWORD *)(v14 + 40) = 5LL;
    *(_OWORD *)(v14 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
