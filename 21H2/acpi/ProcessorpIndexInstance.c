/*
 * XREFs of ProcessorpIndexInstance @ 0x1C009DE1C
 * Callers:
 *     ProcessorAddInstance @ 0x1C009DCC0 (ProcessorAddInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpIndexInstance(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // esi
  __int64 v8; // r14
  __int64 i; // rbx
  int v10; // eax
  __int64 Pool2; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax

  v2 = *(unsigned __int16 *)(a2 + 4);
  v5 = *(_QWORD *)(ProcessorGroupByNumber + 8 * v2);
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(256LL, 48LL, 1232102209LL);
    v5 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_WORD *)(Pool2 + 32) = v2;
    *(_DWORD *)(Pool2 + 36) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    v13 = (__int64 *)qword_1C0080618;
    if ( *(__int64 **)qword_1C0080618 != &ProcessorGroupListHead )
      goto LABEL_23;
    *(_QWORD *)(v5 + 8) = qword_1C0080618;
    *(_QWORD *)v5 = &ProcessorGroupListHead;
    *v13 = v5;
    qword_1C0080618 = v5;
    *(_QWORD *)(ProcessorGroupByNumber + 8 * v2) = v5;
  }
  if ( *(_DWORD *)(a2 + 20) != 1 )
  {
    v6 = *(_DWORD *)(v5 + 36);
    goto LABEL_4;
  }
  v6 = 1;
  if ( *(_DWORD *)(v5 + 36) == 1 )
  {
LABEL_4:
    if ( v6 == 3 )
      v7 = *(_DWORD *)(a2 + 16);
    else
      v7 = 0;
    goto LABEL_6;
  }
  v7 = (a1 << 16) | 0xFFFF;
LABEL_6:
  v8 = v5 + 16;
  for ( i = *(_QWORD *)(v5 + 16); i != v8; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == v7 )
      goto LABEL_9;
  }
  v14 = ExAllocatePool2(256LL, 48LL, 1232102209LL);
  i = v14;
  if ( !v14 )
    return 3221225626LL;
  *(_DWORD *)(v14 + 16) = v7;
  *(_DWORD *)(v14 + 40) = *(unsigned __int8 *)(a2 + 6);
  v15 = *(__int64 **)(v5 + 24);
  if ( *v15 != v8 )
LABEL_23:
    __fastfail(3u);
  *(_QWORD *)i = v8;
  *(_QWORD *)(i + 8) = v15;
  *v15 = i;
  *(_QWORD *)(v5 + 24) = i;
LABEL_9:
  v10 = ProcessorPreferredCpuSetSpecified;
  *(_QWORD *)(i + 24) |= 1LL << *(_BYTE *)(a2 + 6);
  if ( v10 )
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx(&ProcessorpPreferredCpuSet, a1) )
    {
      *(_QWORD *)(i + 32) |= 1LL << *(_BYTE *)(a2 + 6);
      *(_BYTE *)(v5 + 40) = 1;
    }
  }
  return 0LL;
}
