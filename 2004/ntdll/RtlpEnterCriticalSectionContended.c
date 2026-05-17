/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x18002FAF0
 * Callers:
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x180063370 (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180083A60 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  bool v6; // bp
  char v7; // r15
  char v8; // al
  char v9; // r12
  __int64 v10; // r8
  signed __int32 v11; // eax
  int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  int i; // ecx
  signed __int32 v16; // eax
  unsigned int v17; // edi
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned __int32 v20; // ebx
  unsigned int v21; // ebx
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r11
  signed __int32 v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // [rsp+60h] [rbp+8h]

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    RtlpInitializeStaticCriticalSection();
  v5 = 0LL;
  v6 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v5 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v6 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  v7 = 0;
  v8 = 1;
  v9 = 0;
LABEL_5:
  v10 = 0LL;
  while ( 1 )
  {
    if ( v8 )
    {
      v11 = *(_DWORD *)(a1 + 8);
      a4 = a1 + 8;
      v12 = 3;
      if ( !v9 )
        v12 = 1;
      if ( (v11 & 1) != 0 && v11 == _InterlockedCompareExchange((volatile signed __int32 *)a4, v11 ^ v12, v11) )
        goto LABEL_20;
      v13 = 10 * v5;
      if ( MEMORY[0x7FFE036A] > 1u )
        break;
    }
LABEL_31:
    LOBYTE(a4) = 0;
    _m_prefetchw((const void *)(a1 + 8));
    v19 = *(unsigned int *)(a1 + 8);
    if ( v9 )
    {
      if ( (v19 & 2) != 0 )
        goto LABEL_39;
      v20 = v19 ^ 3;
      a4 = v19 & 1;
      if ( (v19 & 1) == 0 )
        v20 = v19 - 2;
    }
    else if ( (v19 & 1) != 0 )
    {
      a4 = 1LL;
      v20 = v19 ^ 1;
    }
    else
    {
      v20 = v19 - 4;
      if ( (((_BYTE)v19 - 4) & 2) == 0 )
        v20 = v19 - 6;
    }
    if ( v20 == (_DWORD)v19 )
      goto LABEL_39;
    if ( (_DWORD)v19 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v20, v19) )
    {
      if ( (_BYTE)a4 )
        goto LABEL_20;
      v9 = 1;
      v19 = v20;
LABEL_39:
      RtlpWaitOnCriticalSection(a1, v19, v10, a4);
      v7 = 1;
      if ( v6 && v5 > 0x64 )
        --v5;
      v8 = 1;
      goto LABEL_5;
    }
    v21 = v10;
    if ( (_DWORD)v10 )
    {
      if ( (unsigned int)v10 < 0x1FFF )
        v21 = 2 * v10;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_55;
      v21 = 64;
    }
    v10 = v21;
    v22 = __rdtsc();
    v29 = 0;
    v23 = 10 * (((v21 - 1) & (unsigned int)v22) + v21) / MEMORY[0x7FFE02D6];
    if ( v23 )
    {
      do
      {
        _mm_pause();
        ++v29;
      }
      while ( v29 < v23 );
    }
LABEL_55:
    v8 = 0;
  }
  if ( a1 != -8 && MEMORY[0x7FFE0297] )
  {
    v24 = __rdtsc();
    v25 = v24 + v13;
    while ( 1 )
    {
      __asm { monitorx rax, rcx, rdx }
      if ( (*(_DWORD *)a4 & 1) != 0 )
      {
        v26 = *(_DWORD *)a4;
        if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)a4, v26 ^ v12, v26) )
          break;
      }
      v27 = v24;
      v28 = __rdtsc();
      v24 = v28;
      if ( v28 <= v27 || v28 >= v25 )
        goto LABEL_31;
      __asm { mwaitx  rax, rcx, rbx }
    }
  }
  else
  {
    if ( MEMORY[0x7FFE02D6] == 12 )
      v14 = v13 / 0xC;
    else
      v14 = v13 / MEMORY[0x7FFE02D6];
    for ( i = 0; ; ++i )
    {
      if ( (*(_DWORD *)a4 & 1) != 0 )
      {
        v16 = *(_DWORD *)a4;
        if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)a4, v16 ^ v12, v16) )
          break;
      }
      if ( i == v14 )
        goto LABEL_31;
      _mm_pause();
    }
  }
LABEL_20:
  if ( v6 )
  {
    if ( !v7 && v5 < 0x7D0 )
      LODWORD(v5) = v5 + 1;
    v17 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v5) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v17 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v17;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
