/*
 * XREFs of sub_1800226E0 @ 0x1800226E0
 * Callers:
 *     sub_1800223C0 @ 0x1800223C0 (sub_1800223C0.c)
 * Callees:
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_1800226E0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r9
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int16 v6; // r10
  unsigned int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  LOWORD(v5) = *(_WORD *)(v1 + 4);
  if ( (_WORD)v5 )
  {
    v6 = *(_WORD *)(v1 + 4);
    do
    {
      LOWORD(v5) = v6;
      if ( (*(_BYTE *)(v2 + 12LL * v4 + 4) & 1) != 0 )
      {
        v7 = 0;
        if ( v6 )
        {
          do
          {
            if ( v7 != v4 && *(_DWORD *)(v2 + 12LL * v7) == *(_DWORD *)(v2 + 12LL * v4) )
              *(_DWORD *)(v2 + 12LL * v7) = 0;
            v5 = *(unsigned __int16 *)(v1 + 4);
            ++v7;
          }
          while ( v7 < v5 );
        }
      }
      ++v4;
      v6 = v5;
    }
    while ( v4 < (unsigned __int16)v5 );
  }
  v8 = 0;
  v9 = 0;
  if ( (_WORD)v5 )
  {
    do
    {
      if ( *(_DWORD *)(v2 + 12LL * v9) )
      {
        v10 = *(_DWORD *)(v2 + 12LL * v9 + 4);
        if ( (v10 & 0x300) != 0
          || (v10 & 0xC00) != 0
          || (v10 & 0x3000) != 0
          || (v10 & 0x3F000000) != 0
          || (v10 & 2) != 0 )
        {
          if ( v8 != v9 )
          {
            v11 = 3LL * v8;
            *(_QWORD *)(v2 + 4 * v11) = *(_QWORD *)(v2 + 12LL * v9);
            *(_DWORD *)(v2 + 4 * v11 + 8) = *(_DWORD *)(v2 + 12LL * v9 + 8);
          }
          *(_DWORD *)(v2 + 12LL * v8++ + 4) &= ~1u;
        }
      }
      v5 = *(unsigned __int16 *)(v1 + 4);
      ++v9;
    }
    while ( v9 < v5 );
  }
  if ( v8 != (unsigned __int16)v5 )
  {
    v12 = (void *)(v2 + 12LL * v8);
    memmove(v12, (const void *)(v2 + 12LL * (unsigned __int16)v5), 16LL * *(unsigned __int16 *)(v1 + 6));
    *(_QWORD *)(a1 + 40) = v12;
    v13 = *(unsigned __int16 *)(v1 + 4) - v8;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 64) -= 12 * v13;
    *(_WORD *)(v1 + 4) = v8;
  }
  result = *(unsigned int *)(v1 + 8);
  *(_DWORD *)(v1 + 12) = result;
  return result;
}
