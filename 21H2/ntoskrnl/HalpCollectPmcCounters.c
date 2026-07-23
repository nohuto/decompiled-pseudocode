/*
 * XREFs of HalpCollectPmcCounters @ 0x1404BED60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HalpCollectPmcCounters(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r10
  int i; // r9d
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // r11
  __int64 *v14; // r8
  unsigned int j; // ebx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int16 v22; // [rsp+0h] [rbp-8h]

  if ( a1 )
  {
    _disable();
    v5 = 0LL;
    for ( i = v22 & 0x200; (unsigned int)v5 < *(_DWORD *)(a1 + 20); v5 = (unsigned int)(v5 + 1) )
    {
      v7 = 32LL * (unsigned int)v5;
      v8 = __readpmc(*(_DWORD *)(v7 + a1 + 28));
      v9 = *(_DWORD *)(v7 + a1 + 48);
      if ( v9 < 0x40 )
        v10 = (1LL << v9) - 1;
      else
        v10 = -1LL;
      v11 = v8 - *(_QWORD *)(v7 + a1 + 32);
      *(_QWORD *)(v7 + a1 + 32) = v8;
      v12 = *(_QWORD *)(v7 + a1 + 40) + (v11 & v10);
      *(_QWORD *)(v7 + a1 + 40) = v12;
      if ( a2 )
        *(_QWORD *)(a2 + 8 * v5) = v12;
    }
  }
  else
  {
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    v13 = (__int64 **)(HalpCounterSetInfo + 24 * v2);
    _disable();
    v14 = *v13;
    i = v22 & 0x200;
    while ( v14 != (__int64 *)v13 )
    {
      for ( j = 0; j < *((_DWORD *)v14 + 5); v14[v16 + 5] += v21 )
      {
        v16 = 4LL * j;
        v17 = __readpmc(HIDWORD(v14[v16 + 3]));
        v18 = v14[v16 + 6];
        v19 = v17;
        if ( v18 < 0x40 )
          v20 = (1LL << v18) - 1;
        else
          v20 = -1LL;
        ++j;
        v21 = v20 & (v17 - v14[v16 + 4]);
        v14[v16 + 4] = v19;
      }
      v14 = (__int64 *)*v14;
    }
  }
  if ( i )
    _enable();
}
