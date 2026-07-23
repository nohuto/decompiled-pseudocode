/*
 * XREFs of KeMarkHiberPhase @ 0x1409AFEB8
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14099A1F0 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 */

void __fastcall KeMarkHiberPhase(_QWORD *Address)
{
  __int64 v1; // rbx
  char *v2; // r15
  __int64 *v3; // r15
  unsigned int i; // ebp
  __int64 v5; // r14
  void *v6; // r8
  _QWORD **v7; // r14
  __int64 v8; // rbp
  _QWORD *j; // rdi
  unsigned int v10; // ecx
  void *v11; // r8
  void *v12; // r8
  _QWORD *v13; // r8
  void *v14; // rdi
  ULONG_PTR v15; // rbx
  PVOID *k; // rbx

  v1 = Address[4];
  v2 = (char *)Address[1];
  if ( *(_DWORD *)(v1 + 36) )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      Address,
      ((((_DWORD)KeNumberProcessors_0 << 6) + 51903) & 0xFFFFF000) + 28672,
      0x6370654Bu);
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, Address, 0xB080uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v1, 0xAF00uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, v2, 0x68uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, &KiBootProcessorIdtSize, 0LL, 0x6370654Bu);
    v3 = (__int64 *)(v2 + 36);
    for ( i = 1; i <= 4; ++i )
    {
      v5 = *v3;
      if ( i - 1 <= 3 )
      {
        if ( KiKvaShadow )
        {
          PoSetHiberRange(0LL, 0x10000u, (PVOID)(v5 - 464), 0x200uLL, 0x6370654Bu);
          v6 = (void *)(*(_QWORD *)(v5 + 8) - 24544LL);
        }
        else
        {
          v6 = (void *)(v5 - 24576);
        }
        PoSetHiberRange(0LL, 0x10000u, v6, 0x6000uLL, 0x6370654Bu);
      }
      ++v3;
    }
  }
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 360), *(unsigned __int16 *)(v1 + 358), 0x7370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 344), *(unsigned __int16 *)(v1 + 342), 0x7370654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 12560) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeKernelStackSize),
    (unsigned int)KeKernelStackSize,
    0x7473654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 32552) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - 24576),
    0x6000uLL,
    0x6573654Bu);
  v7 = (_QWORD **)(v1 + 12480);
  v8 = 2LL;
  do
  {
    for ( j = *v7; j; j = (_QWORD *)*j )
      PoSetHiberRange(0LL, 0x10000u, j - 1, 0x40uLL, 0x7064654Bu);
    v7 += 5;
    --v8;
  }
  while ( v8 );
  v10 = 1232;
  if ( (KeFeatureBits & 0x800000) != 0 )
    v10 = KeXStateLength + 807;
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 34240), v10, 0x7873654Bu);
  v11 = *(void **)(v1 + 1728);
  if ( v11 )
    PoSetHiberRange(
      0LL,
      0x10000u,
      v11,
      MEMORY[0xFFFFF78000000600]
    - (unsigned __int64)MEMORY[0xFFFFF780000003E8]
    + (unsigned int)KiIptSaveAreaLength
    + 64LL,
      0x7373654Bu);
  v12 = *(void **)(v1 + 0x8000);
  if ( v12 )
    PoSetHiberRange(0LL, 0x10000u, v12, 0x428uLL, 0x7349654Bu);
  if ( qword_140C2B398 )
    PoSetHiberRange(0LL, 0x10000u, qword_140C2B398, 16 * (unsigned int)(unsigned __int8)qword_140C2B388, 0x7272744Du);
  if ( qword_140C2B3A0 )
    PoSetHiberRange(0LL, 0x10000u, qword_140C2B3A0, 0x58uLL, 0x7272744Du);
  v13 = *(_QWORD **)(v1 + 8);
  v14 = (void *)((v13[6] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  v15 = v13[7] - (_QWORD)v14;
  PoSetHiberRange(0LL, 0x10000u, v13, 0x898uLL, 0x6874654Bu);
  PoSetHiberRange(0LL, 0x10000u, v14, v15, 0x7473654Bu);
  for ( k = (PVOID *)KeBugCheckReasonCallbackListHead; k != &KeBugCheckReasonCallbackListHead; k = (PVOID *)*k )
    PoSetHiberRange(0LL, 0x10000u, k, 0x30uLL, 0x7473654Bu);
  PoSetHiberRange(0LL, 0x10000u, ExLeapSecondData, 0x1000uLL, 0x706C7845u);
}
