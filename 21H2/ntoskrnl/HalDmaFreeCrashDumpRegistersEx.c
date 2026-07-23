/*
 * XREFs of HalDmaFreeCrashDumpRegistersEx @ 0x1403A71C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpDmaFreeMapRegisters @ 0x1404C7CF8 (HalpDmaFreeMapRegisters.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 */

__int64 __fastcall HalDmaFreeCrashDumpRegistersEx(__int64 a1, signed int a2)
{
  __int64 v3; // rbp
  int v4; // eax
  int v5; // eax
  __int64 v7; // r14
  char v8; // al
  _DWORD *v9; // rdx
  char v10; // cl
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi

  if ( !a1 || (unsigned int)a2 > 1 )
    return 3221225485LL;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 4LL * a2 + 272);
  if ( !v4 )
    return 3221225473LL;
  v5 = v4 - 1;
  *(_DWORD *)(a1 + 4LL * a2 + 272) = v5;
  if ( !v5 )
  {
    v7 = 2LL;
    if ( *(_DWORD *)(a1 + 4LL * a2 + 264) )
    {
      v15 = *(_QWORD *)(a1 + 8LL * a2 + 248);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 56) = v15;
        v15 = *(_QWORD *)(a1 + 8 * v3 + 248);
      }
      if ( *(_DWORD *)(a1 + 512) == 2 )
      {
        _mm_lfence();
        v16 = *(_QWORD *)(a1 + 8 * v3 + 248);
        v17 = *(_QWORD *)(a1 + 504);
        HalpIommuDomainUnmapLogicalRange(*(_QWORD *)(v17 + 40), *(_QWORD *)(v16 + 24));
        HalpDomainLaDelete(v17, *(_QWORD *)(v16 + 24));
        v15 = *(_QWORD *)(a1 + 8 * v3 + 248);
      }
      HalpDmaFreeMapRegisters(a1, v15, *(unsigned int *)(a1 + 4 * v3 + 264));
      *(_QWORD *)(a1 + 8 * v3 + 248) = 0LL;
      *(_DWORD *)(a1 + 4 * v3 + 264) = 0;
    }
    v8 = 1;
    v9 = (_DWORD *)(a1 + 272);
    do
    {
      v10 = 0;
      if ( *v9++ == 0 )
        v10 = v8;
      v8 = v10;
      --v7;
    }
    while ( v7 );
    if ( v10 )
    {
      v12 = (_QWORD *)(a1 + 280);
      v13 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
  }
  return 0LL;
}
