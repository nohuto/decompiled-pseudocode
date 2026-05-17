/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x1800FEB28
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800FE510 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800FE00C (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkHash @ 0x1800FE460 (RtlpHeapTrkHash.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackRemove(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *i; // rcx
  signed __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18016DBF0 + 8 * v7), v9, v10, v11);
  v12 = 2 * v8;
  for ( i = *(_QWORD **)(qword_18016DA80 + 8 * v12); i != (_QWORD *)(qword_18016DA80 + 8 * v12); i = (_QWORD *)*i )
  {
    v4 = (__int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v19 = (_QWORD *)*i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v20 = (_QWORD *)i[1], (_QWORD *)*v20 != i) )
        __fastfail(3u);
      *v20 = v19;
      v5 = 1;
      v19[1] = v20;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18016DBF0 + 8 * v7));
  if ( v5 )
  {
    v18 = *(_QWORD *)(v4 + 32);
    if ( v18 )
    {
      RtlpHeapTrkDereferenceStack(v18, v15, v16, v17);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_18016DC10, 0, v4);
  }
  return result;
}
