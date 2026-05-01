/*
 * XREFs of sub_180012FA8 @ 0x180012FA8
 * Callers:
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_18003529C @ 0x18003529C (sub_18003529C.c)
 * Callees:
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800431A0 @ 0x1800431A0 (sub_1800431A0.c)
 *     sub_180043318 @ 0x180043318 (sub_180043318.c)
 *     sub_180043A14 @ 0x180043A14 (sub_180043A14.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_180044640 @ 0x180044640 (sub_180044640.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180012FA8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 *i; // rdi
  volatile signed __int64 *v9; // rdx
  int v10; // edi
  int v11; // r8d
  int v12; // r9d
  __int64 *Heap; // rax
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 **v19; // rdx
  void *v20; // rcx
  int v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  v6 = 0LL;
  if ( a2 == -2 )
    v4 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockShared(a1);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    v10 = -1073741058;
LABEL_12:
    RtlReleaseSRWLockShared(a1);
    goto LABEL_13;
  }
  v7 = a1 + 16;
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v7 )
    {
      v9 = 0LL;
      goto LABEL_9;
    }
    if ( (int)NtCompareObjects(i[3], v4) >= 0 )
      break;
  }
  v9 = 0LL;
  if ( (i[27] & 3) == 1 )
    v9 = i - 1;
LABEL_9:
  if ( v9 )
  {
    if ( _InterlockedIncrement64(v9) <= 1 )
      __fastfail(0xEu);
    *(_QWORD *)a3 = v9;
    v10 = 0;
    goto LABEL_12;
  }
  RtlReleaseSRWLockShared(a1);
  Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v15 = Heap;
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_15;
  }
  sub_180043C64(a1 - 312, Heap);
  v10 = sub_180043318(v15 + 5);
  if ( v10 >= 0 )
    v10 = 0;
  if ( v10 >= 0 )
  {
    sub_18001E380(v16);
    RtlAcquireSRWLockExclusive(a1);
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
    ++*(_DWORD *)(a1 + 80);
    v10 = sub_180043A14(a1 + 64, a1 + 72, (unsigned int)(*(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 80)));
    sub_18000F390();
    if ( v10 >= 0 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
        {
          v10 = -1073741058;
          goto LABEL_30;
        }
        v17 = sub_180044640(a1, v4, 15LL);
        if ( !v17 )
          break;
        if ( (*(_DWORD *)(v17 + 224) & 3) == 1 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)v17) <= 1 )
            __fastfail(0xEu);
          *(_QWORD *)a3 = v17;
          goto LABEL_29;
        }
        sub_180005700(a1, a1 + 32, 0LL);
      }
      v6 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v6 + 1;
      v10 = sub_1800431A0(v15, v4, v6);
      if ( v10 >= 0 )
      {
        ++*(_DWORD *)(a1 + 76);
        v18 = v15 + 1;
        v19 = *(__int64 ***)(a1 + 24);
        if ( *v19 != (__int64 *)v7 )
          __fastfail(3u);
        *v18 = v7;
        v15[2] = (__int64)v19;
        *v19 = v18;
        *(_QWORD *)(a1 + 24) = v18;
        RtlWakeAllConditionVariable(a1 + 32);
        *(_QWORD *)a3 = v15;
        v15 = 0LL;
LABEL_29:
        v10 = 0;
        goto LABEL_30;
      }
      v20 = (void *)v15[4];
      if ( v20 )
      {
        NtClose(v20);
        v15[4] = 0LL;
      }
    }
LABEL_30:
    --*(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  if ( v15 )
    sub_180026650(v15);
LABEL_13:
  if ( v10 >= 0 )
    v6 = *(_QWORD *)(*(_QWORD *)a3 + 216LL);
LABEL_15:
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v22 = v6;
    v21 = v10;
    sub_180063424((unsigned int)&dword_1800B31E0, (unsigned int)&unk_18009CE0B, v11, v12, (__int64)&v21, (__int64)&v22);
  }
  return (unsigned int)v10;
}
