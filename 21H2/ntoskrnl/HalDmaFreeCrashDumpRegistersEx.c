/*
 * XREFs of HalDmaFreeCrashDumpRegistersEx @ 0x140398080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaFreeMapRegisters @ 0x14045746C (HalpDmaFreeMapRegisters.c)
 */

__int64 __fastcall HalDmaFreeCrashDumpRegistersEx(__int64 a1, signed int a2)
{
  __int64 v3; // rsi
  int v4; // eax
  int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  char v9; // al
  _DWORD *v10; // rdx
  __int64 v11; // r8
  char v12; // cl
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax

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
    if ( *(_DWORD *)(a1 + 4LL * a2 + 264) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * a2 + 248);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 56) = v7;
        v7 = *(_QWORD *)(a1 + 8 * v3 + 248);
      }
      if ( *(_DWORD *)(a1 + 512) == 3 )
      {
        _mm_lfence();
        v8 = *(_QWORD *)(a1 + 8 * v3 + 248);
        ((void (__fastcall *)(__int64, __int64))qword_140C4BE08)(v8 + 24, v7);
        ((void (__fastcall *)(_QWORD))qword_140C4BDF8)(*(_QWORD *)(v8 + 24));
        v7 = *(_QWORD *)(a1 + 8 * v3 + 248);
      }
      HalpDmaFreeMapRegisters(a1, v7, *(unsigned int *)(a1 + 4 * v3 + 264));
      *(_QWORD *)(a1 + 8 * v3 + 248) = 0LL;
      *(_DWORD *)(a1 + 4 * v3 + 264) = 0;
    }
    v9 = 1;
    v10 = (_DWORD *)(a1 + 272);
    v11 = 2LL;
    do
    {
      v12 = 0;
      if ( *v10++ == 0 )
        v12 = v9;
      v9 = v12;
      --v11;
    }
    while ( v11 );
    if ( v12 )
    {
      v14 = (_QWORD *)(a1 + 280);
      v15 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
  }
  return 0LL;
}
