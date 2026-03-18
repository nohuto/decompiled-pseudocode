/*
 * XREFs of ProcessorpIndexInstance @ 0x1C00979D8
 * Callers:
 *     ProcessorAddInstance @ 0x1C0097870 (ProcessorAddInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpIndexInstance(int a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r8
  int v6; // ecx
  int v7; // edi
  __int64 v8; // rbx
  _OWORD *i; // r9
  _OWORD *PoolWithTag; // rax
  __int64 *v12; // rax
  _OWORD *v13; // rax
  _QWORD *v14; // rax

  v2 = *(unsigned __int16 *)(a2 + 4);
  v5 = *(_QWORD *)(ProcessorGroupByNumber + 8 * v2);
  if ( !v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_WORD *)PoolWithTag + 16) = v2;
    *((_DWORD *)PoolWithTag + 9) = *(_DWORD *)(a2 + 20);
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 1;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 1;
    v12 = (__int64 *)qword_1C0081568;
    if ( *(__int64 **)qword_1C0081568 != &ProcessorGroupListHead )
      goto LABEL_20;
    *(_QWORD *)(v5 + 8) = qword_1C0081568;
    *(_QWORD *)v5 = &ProcessorGroupListHead;
    *v12 = v5;
    qword_1C0081568 = v5;
    *(_QWORD *)(ProcessorGroupByNumber + 8 * v2) = v5;
  }
  v6 = 1;
  if ( *(_DWORD *)(a2 + 20) != 1 )
    v6 = *(_DWORD *)(v5 + 36);
  if ( v6 == *(_DWORD *)(v5 + 36) )
  {
    if ( v6 == 3 )
      v7 = *(_DWORD *)(a2 + 16);
    else
      v7 = 0;
  }
  else
  {
    v7 = (a1 << 16) | 0xFFFF;
  }
  v8 = v5 + 16;
  for ( i = *(_OWORD **)(v5 + 16); i != (_OWORD *)v8; i = *(_OWORD **)i )
  {
    if ( *((_DWORD *)i + 4) == v7 )
      goto LABEL_10;
  }
  v13 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
  i = v13;
  if ( !v13 )
    return 3221225626LL;
  *v13 = 0LL;
  v13[1] = 0LL;
  *((_QWORD *)v13 + 4) = 0LL;
  *((_DWORD *)v13 + 4) = v7;
  *((_DWORD *)v13 + 8) = *(unsigned __int8 *)(a2 + 6);
  v14 = *(_QWORD **)(v8 + 8);
  if ( *v14 != v8 )
LABEL_20:
    __fastfail(3u);
  *(_QWORD *)i = v8;
  *((_QWORD *)i + 1) = v14;
  *v14 = i;
  *(_QWORD *)(v8 + 8) = i;
LABEL_10:
  *((_QWORD *)i + 3) |= 1LL << *(_BYTE *)(a2 + 6);
  return 0LL;
}
