/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003764C
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800390FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  _WORD *v7; // rcx
  _WORD *v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  LPVOID v11; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  if ( v4 == -1LL )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_WORD **)a1;
    if ( v6 == -1 )
    {
      if ( v7 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( v7[v6] );
      }
      else
      {
        v6 = 0LL;
      }
      *(_QWORD *)(a1 + 8) = v6;
    }
    v4 = (v6 + 1) & -(__int64)(v7 != 0LL);
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( !v4 )
  {
    if ( is_mul_ok(v2, 2uLL) )
    {
      v8 = CoTaskMemAlloc(2 * v2);
      if ( v8 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v8;
        *v8 = 0;
        return v5;
      }
      return (unsigned int)-2147024882;
    }
    return (unsigned int)-2147024362;
  }
  if ( v2 > v4 )
  {
    v9 = 2 * v4;
    if ( !is_mul_ok(v4, 2uLL) )
    {
      v9 = -1LL;
      v5 = -2147024362;
    }
    if ( (v5 & 0x80000000) == 0 )
    {
      v10 = v4 + 2048;
      if ( v9 - v4 <= 0x800 )
        v10 = v9;
      if ( v2 > v10 )
        v10 = a2 + 1;
      v11 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v10);
      if ( v11 )
      {
        *(_QWORD *)(a1 + 16) = v10;
        *(_QWORD *)a1 = v11;
        return v5;
      }
      return (unsigned int)-2147024882;
    }
  }
  return v5;
}
