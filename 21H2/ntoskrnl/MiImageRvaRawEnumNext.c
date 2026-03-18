/*
 * XREFs of MiImageRvaRawEnumNext @ 0x140690010
 * Callers:
 *     RtlpCompressRvaList @ 0x140700D70 (RtlpCompressRvaList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  int v5; // r14d
  _DWORD *v6; // r15
  unsigned int *v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int i; // ecx
  __int64 (__fastcall *v11)(_DWORD *, unsigned int *, unsigned int *); // rax
  int v12; // r9d
  __int64 v13; // rax
  unsigned int v14; // ecx
  _DWORD *v15; // r8
  __int64 result; // rax
  unsigned int v17; // ecx

  if ( !a1[78] )
    return 0LL;
  v4 = a1[36];
  v5 = 0;
  v6 = a1 + 38;
  v7 = a1 + 38;
  v8 = 0;
  v9 = 0;
  for ( i = v4; v9 < v4; i = v4 )
  {
    v11 = (__int64 (__fastcall *)(_DWORD *, unsigned int *, unsigned int *))*((_QWORD *)v7 + 2);
    if ( v11 )
    {
      v17 = *v7;
      if ( *v7 == a1[78] )
      {
        v17 = v11(a1, v7 + 6, v7 + 1);
        *v7 = v17;
      }
      if ( v17 )
      {
        if ( v8 )
        {
          if ( v8 >= v17 )
            v8 = v17;
        }
        else
        {
          v8 = v17;
        }
      }
    }
    v4 = a1[36];
    ++v9;
    v7 += 10;
  }
  if ( a2 && v8 )
  {
    v12 = 0;
    if ( v4 )
    {
      v13 = i;
      do
      {
        if ( *v6 == v8 )
          v12 |= v6[1];
        v6 += 10;
        --v13;
      }
      while ( v13 );
      v4 = i;
    }
    v14 = 0;
    if ( v4 )
    {
      v15 = a1 + 32;
      do
      {
        if ( (v12 & *v15) != 0 )
          v5 |= 1 << v14;
        ++v14;
        ++v15;
      }
      while ( v14 < a1[36] );
    }
    *a2 = v5;
  }
  result = v8;
  a1[78] = v8;
  return result;
}
