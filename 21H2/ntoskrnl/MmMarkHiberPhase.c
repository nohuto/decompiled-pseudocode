/*
 * XREFs of MmMarkHiberPhase @ 0x1409B154C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14099A1F0 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1402A3834 (MiIsRetpolineEnabled.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     MiGatherHiberRange @ 0x1409B1150 (MiGatherHiberRange.c)
 *     MiMarkHiberNotCachedPages @ 0x1409B119C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409B1308 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409B13A4 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 MmMarkHiberPhase()
{
  __int64 v0; // rsi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  _QWORD **v5; // rdi
  _QWORD *v6; // rax
  _QWORD *i; // rbx
  _QWORD **v8; // rax
  void *v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  MiMarkKernelPageTablePages();
  v13[1] = 0LL;
  v13[0] = MiGatherHiberRange;
  v0 = 2LL;
  MiGatherHiberRange((__int64)v13, (void *)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1LL, 2);
  MiMarkNonPagedHiberPhasePages(0xFFFFFA8000000000uLL, 48 * BugCheckParameter3 - 0x57FFFFFFFD1LL, 512);
  PoSetHiberRange(0LL, 0x14000u, qword_140C4EE08, 1uLL, 0x61676D4Du);
  PoSetHiberRange(0LL, 0x10000u, KeGetCurrentThread()->ApcState.Process, 0xA40uLL, 0x62706D4Du);
  Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( Flink )
    PoSetHiberRange(0LL, 0x10000u, Flink, 0x1000uLL, 0x62706D4Du);
  if ( MiIsRetpolineEnabled() )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      qword_140C4CCA0,
      8 * (((unsigned __int64)qword_140C4CC98 >> 6) + ((qword_140C4CC98 & 0x3F) != 0)),
      0x62706D4Du);
    PoSetHiberRange(0LL, 0x10000u, Base, (unsigned int)(dword_140C4CCC8 << 12), 0x62706D4Du);
  }
  MiMarkNonPagedHiberPhasePages(qword_140C4E288, qword_140C4E288 + qword_140C4E290 - 1, 0);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v2 = 0LL;
  v3 = 50LL;
  do
  {
    v4 = *(void **)((char *)MmUnloadedDrivers + v2 + 8);
    if ( v4 )
      PoSetHiberRange(0LL, 0x10000u, v4, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v2), 0x64736D4Du);
    v2 += 40LL;
    --v3;
  }
  while ( v3 );
  v5 = (_QWORD **)&xmmword_140C4EC88 + 1;
  do
  {
    v6 = *v5;
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      v8 = (_QWORD **)i[1];
      v9 = i;
      v10 = i;
      if ( v8 )
      {
        v11 = *v8;
        for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
          i = v11;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v10 )
            break;
          v10 = i;
        }
      }
      PoSetHiberRange(0LL, 0x10000u, v9, 0x440uLL, 0x6F496D4Du);
    }
    ++v5;
    --v0;
  }
  while ( v0 );
  return MiMarkHiberNotCachedPages();
}
