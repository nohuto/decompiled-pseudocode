/*
 * XREFs of PerfSelectionPTStates @ 0x1C0001240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfSelectionPTStates(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rsi
  unsigned int v11; // r10d
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 i; // rbx
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // rax
  __int64 v18; // [rsp+70h] [rbp+48h]

  v10 = *(_QWORD *)(a1 + 24);
  if ( (a7 & 1) != 0 )
  {
    v11 = *(_DWORD *)(v10 + 64);
  }
  else
  {
    v11 = *(_DWORD *)(v10 + 68);
    if ( !v11 )
      v11 = 1;
  }
  v12 = *(_QWORD *)(v10 + 56);
  if ( (a7 & 2) != 0 )
  {
    v13 = 0;
    for ( i = *(_QWORD *)(v10 + 56); v13 < v11; ++v13 )
    {
      i = v12 + 32LL * v13;
      if ( *(unsigned __int8 *)(i + 24) <= a2 )
        break;
    }
    if ( v13 == v11 )
      v13 = v11 - 1;
  }
  else
  {
    v13 = v11;
    do
      i = v12 + 32LL * --v13;
    while ( *(unsigned __int8 *)(i + 24) < a2 && v13 );
  }
  for ( ; *(unsigned __int8 *)(i + 24) < a3; i = v12 + 32LL * --v13 )
  {
    if ( !v13 )
      break;
  }
  for ( ; *(unsigned __int8 *)(i + 24) > a4; i = v12 + 32LL * ++v13 )
  {
    if ( v13 == *(_DWORD *)(v10 + 64) - 1 )
      break;
  }
  if ( a9 )
  {
    v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v10 + 32);
    v18 = v13;
    if ( v17 )
      HIDWORD(v18) = v17(a5, a7);
    *a9 = v18;
  }
  if ( a8 )
    *a8 = *(_DWORD *)(i + 16);
  return *(unsigned __int8 *)(i + 24);
}
