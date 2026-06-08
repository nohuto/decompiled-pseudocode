/*
 * XREFs of PerfSelectionPTStates @ 0x1C00010F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfSelectionPTStates(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  __int64 v9; // r10
  unsigned int v10; // ecx
  __int64 v11; // r11
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 v18; // [rsp+70h] [rbp+48h]

  v9 = *(_QWORD *)(a1 + 24);
  if ( (a7 & 1) != 0 )
  {
    v10 = *(_DWORD *)(v9 + 64);
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 68);
    if ( !v10 )
      v10 = 1;
  }
  v11 = *(_QWORD *)(v9 + 56);
  if ( (a7 & 2) != 0 )
  {
    v12 = 0;
    v13 = *(_QWORD *)(v9 + 56);
    if ( v10 )
    {
      v16 = *(_QWORD *)(v9 + 56);
      do
      {
        v13 = v16;
        if ( *(unsigned __int8 *)(v16 + 24) <= a2 )
          break;
        ++v12;
        v16 += 32LL;
      }
      while ( v12 < v10 );
    }
    if ( v12 == v10 )
      v12 = v10 - 1;
  }
  else
  {
    v12 = v10;
    do
      v13 = v11 + 32LL * --v12;
    while ( *(unsigned __int8 *)(v13 + 24) < a2 && v12 );
  }
  for ( ; *(unsigned __int8 *)(v13 + 24) < a3; v13 = v11 + 32LL * --v12 )
  {
    if ( !v12 )
      break;
  }
  for ( ; *(unsigned __int8 *)(v13 + 24) > a4; v13 = v11 + 32LL * ++v12 )
  {
    if ( v12 == *(_DWORD *)(v9 + 64) - 1 )
      break;
  }
  if ( a9 )
  {
    v17 = *(__int64 (__fastcall **)(_QWORD))(v9 + 32);
    v18 = v12;
    if ( v17 )
      HIDWORD(v18) = v17(a5);
    *a9 = v18;
  }
  if ( a8 )
    *a8 = *(_DWORD *)(v13 + 16);
  return *(unsigned __int8 *)(v13 + 24);
}
