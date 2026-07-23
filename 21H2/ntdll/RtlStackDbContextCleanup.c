/*
 * XREFs of RtlStackDbContextCleanup @ 0x180118524
 * Callers:
 *     RtlpHpStackTraceDisable @ 0x180109034 (RtlpHpStackTraceDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall RtlStackDbContextCleanup(__int64 a1)
{
  _BYTE *v1; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  _BYTE *i; // rdx
  _QWORD *v6; // r8
  _QWORD *j; // rcx
  _BYTE *v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  unsigned __int64 result; // rax
  _BYTE *v12; // rdx
  _QWORD *v13; // r8
  _QWORD *k; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi

  v1 = *(_BYTE **)(a1 + 24);
  v3 = v1;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    v4 = (_QWORD *)*v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
LABEL_7:
      for ( i = v1 + 8; ; i += 8 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)i;
      v1 = i;
      v4 = *(_QWORD **)i;
    }
    else
    {
      v3 = v4;
    }
LABEL_12:
    if ( !v4 )
      break;
    v6 = v3;
    for ( j = v1; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v3 )
      {
        *j = *v3;
        --*(_DWORD *)(a1 + 16);
        *v3 |= 0x8000000000000002uLL;
        v3 = j;
        goto LABEL_20;
      }
    }
    v6 = 0LL;
LABEL_20:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v6, *(_QWORD *)(a1 + 64));
  }
  v8 = *(_BYTE **)(a1 + 8);
  v9 = v8;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_27;
    v10 = (_QWORD *)*v9;
    result = *v9 & 0x8000000000000002uLL;
    if ( result == 0x8000000000000002uLL )
    {
      result = MEMORY[0];
      v10 = (_QWORD *)*v9;
    }
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
LABEL_27:
      v12 = v8 + 8;
      result = *(_QWORD *)(a1 + 8);
      while ( 1 )
      {
        if ( (unsigned __int64)v12 >= result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        {
          v10 = 0LL;
          goto LABEL_32;
        }
        if ( (*v12 & 1) == 0 )
          break;
        v12 += 8;
      }
      v9 = *(_QWORD **)v12;
      v8 = v12;
      v10 = *(_QWORD **)v12;
    }
    else
    {
      v9 = v10;
    }
LABEL_32:
    if ( !v10 )
      break;
    v13 = v9;
    for ( k = v8; (*k & 1) == 0; k = (_QWORD *)*k )
    {
      if ( (_QWORD *)*k == v9 )
      {
        *k = *v9;
        --*(_DWORD *)a1;
        *v9 |= 0x8000000000000002uLL;
        v9 = k;
        goto LABEL_40;
      }
    }
    v13 = 0LL;
LABEL_40:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v13, *(_QWORD *)(a1 + 64));
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a1 + 24);
  if ( v15 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v15, *(_QWORD *)(a1 + 64));
  if ( v16 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v16, *(_QWORD *)(a1 + 64));
  return result;
}
