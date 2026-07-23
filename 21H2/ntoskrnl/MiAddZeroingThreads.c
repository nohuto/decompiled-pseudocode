/*
 * XREFs of MiAddZeroingThreads @ 0x1403A56F0
 * Callers:
 *     MiReassessZeroThreads @ 0x1402397D4 (MiReassessZeroThreads.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402694D0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

__int64 __fastcall MiAddZeroingThreads(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  unsigned int v3; // esi
  __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r14
  int FirstSetRightGroupAffinity; // eax
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 232);
  v17 = 0LL;
  v2 = *(_DWORD *)(v1 + 164);
  v3 = *(_DWORD *)(v1 + 156);
  if ( v2 == *(_DWORD *)(v1 + 160) )
  {
    ++dword_140C2A284;
    return 3LL;
  }
  if ( v3 == v2 )
  {
    ++MiZeroThreadStats;
    return 4LL;
  }
  v5 = (unsigned int)dword_140C4DF24;
  v6 = 0;
  v7 = *(_DWORD *)(v1 + 156);
  if ( !v3 )
    goto LABEL_16;
  v8 = 0LL;
  while ( (*(_BYTE *)(v8 + *(_QWORD *)(v1 + 144) + 4) & 1) == 0 )
  {
LABEL_15:
    ++v6;
    v8 += 40LL;
    if ( v6 >= v3 )
      goto LABEL_16;
  }
  v17 = *(_OWORD *)(*(_QWORD *)(v8 + *(_QWORD *)(v1 + 144) + 8) + 280LL);
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v17);
  v10 = 0;
  if ( (_DWORD)v5 )
  {
    v11 = v5;
    do
    {
      v12 = KiProcessorBlock[FirstSetRightGroupAffinity];
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(_QWORD *)(v12 + 24);
      v15 = v10 + 1;
      if ( v13 != v14 )
        v15 = v10;
      ++FirstSetRightGroupAffinity;
      v10 = v15;
      --v11;
    }
    while ( v11 );
  }
  if ( v10 != (_DWORD)v5 )
  {
    if ( v10 )
      v7 = v6;
    goto LABEL_15;
  }
  if ( v6 != v3 )
  {
    ++*(_DWORD *)(v1 + 276);
LABEL_19:
    v16 = *(_QWORD *)(v1 + 144);
    ++*(_DWORD *)(v1 + 164);
    *(_BYTE *)(v16 + 40LL * v6 + 4) &= ~1u;
    KeSetEvent((PRKEVENT)(v16 + 40LL * v6 + 16), 0, 0);
    return 0LL;
  }
LABEL_16:
  v6 = v7;
  if ( v7 != v3 )
  {
    ++*(_DWORD *)(v1 + 280);
    goto LABEL_19;
  }
  ++*(_DWORD *)(v1 + 284);
  return 2LL;
}
