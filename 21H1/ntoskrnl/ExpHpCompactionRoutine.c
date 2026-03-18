/*
 * XREFs of ExpHpCompactionRoutine @ 0x1402AC430
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHeapFromVA @ 0x1402AC2AC (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x1402AC6EC (RtlpHpFreeHeap.c)
 *     ExpHpCompactSessionPools @ 0x14035D7BC (ExpHpCompactSessionPools.c)
 *     RtlpHpHeapCompact @ 0x14035DBEC (RtlpHpHeapCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1403FDDE0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall ExpHpCompactionRoutine(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r15d
  int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rsi
  _QWORD *v11; // r12
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  _QWORD *p_Next; // rcx
  unsigned __int64 v20; // rax
  PSLIST_ENTRY v21; // rax
  ULONG_PTR v22; // rdi
  __int64 HeapFromVA; // rax
  __int64 v24; // r9
  __int64 v25; // [rsp+20h] [rbp-68h]
  _OWORD v26[5]; // [rsp+30h] [rbp-58h]
  int v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = a1;
  v5 = a1;
  v26[0] = _mm_load_si128((const __m128i *)&_xmm);
  v6 = *((int *)v26 + 2 * a1);
  v7 = *((int *)v26 + 2 * v5 + 1);
  v28 = v6;
  v8 = v7;
  if ( dword_140C57F90 )
  {
    v29 = v6;
    do
    {
      v9 = v6;
      if ( v6 <= v8 )
      {
        do
        {
          v10 = qword_140C57FC0[1048 * v3 + v9];
          v11 = *(_QWORD **)(v10 + 40);
          if ( v11 )
          {
            v12 = 0LL;
            v13 = ~*v11;
            while ( v13 )
            {
              _BitScanForward64(&v20, v13);
              v13 ^= 1LL << v20;
              v21 = RtlpInterlockedFlushSList((PSLIST_HEADER)&v11[8 * (unsigned int)v20 + 8]);
              if ( v12 )
              {
                while ( 1 )
                {
                  p_Next = &v21->Next;
                  if ( !v21 )
                    break;
                  v21 = v21->Next;
                  *p_Next = v12;
                  v12 = p_Next;
                }
              }
              else
              {
                v12 = &v21->Next;
              }
            }
            while ( 1 )
            {
              v22 = (ULONG_PTR)v12;
              if ( !v12 )
                break;
              v12 = (_QWORD *)*v12;
              HeapFromVA = ExGetHeapFromVA(v22, a2, a3);
              RtlpHpFreeHeap(HeapFromVA, v22, 0LL, v24, v25);
            }
            v8 = v7;
          }
          v14 = *(__int16 *)(v10 + 278);
          a3 = *(_QWORD *)(v14 + v10 + 272) + *(_QWORD *)(v14 + v10 + 280);
          a2 = *(_QWORD *)(v14 + v10 + 264) >> *(_BYTE *)(v10 + 267);
          if ( a2 <= 8 )
            a2 = 8LL;
          if ( a3 > a2 )
            RtlpHpHeapCompact(v10);
          ++v9;
        }
        while ( v9 <= v8 );
        v6 = v29;
      }
      ++v3;
    }
    while ( v3 < dword_140C57F90 );
    v4 = a1;
    LODWORD(v6) = v28;
  }
  result = 3LL;
  v16 = (int)v6;
  if ( (int)v7 >= 3 )
    LODWORD(v7) = 3;
  while ( v16 <= (int)v7 )
  {
    v17 = qword_140CDAFC0[v16];
    result = *(__int16 *)(v17 + 278);
    v18 = *(_QWORD *)(result + v17 + 264) >> *(_BYTE *)(v17 + 267);
    if ( v18 <= 8 )
      v18 = 8LL;
    if ( *(_QWORD *)(result + v17 + 272) + *(_QWORD *)(result + v17 + 280) > v18 )
      result = RtlpHpHeapCompact(qword_140CDAFC0[v16]);
    ++v16;
  }
  if ( !v4 )
    result = ExpHpCompactSessionPools();
  if ( v4 == 1 )
    ExpHpGCScheduledNonPaged = 0;
  else
    ExpHpGCScheduledPaged = 0;
  return result;
}
