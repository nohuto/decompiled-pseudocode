/*
 * XREFs of ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18009FB18
 * Callers:
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x18009EC30 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001A3F0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v7; // rcx
  int v8; // r10d
  unsigned __int64 v9; // r9
  _WORD *v10; // r8
  __int64 v11; // rsi
  __int16 v12; // ax
  _WORD *v13; // rax

  v3 = a1[1];
  if ( v3 == -1 )
  {
    v7 = *a1;
    if ( v7 )
    {
      do
        ++v3;
      while ( *(_WORD *)(v7 + 2 * v3) );
    }
    else
    {
      v3 = 0LL;
    }
    a1[1] = v3;
  }
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
         (__int64)a1,
         v3 + a3);
  if ( v8 >= 0 )
  {
    v9 = a3 + 1;
    v10 = (_WORD *)(*a1 + 2 * a1[1]);
    if ( a3 > 0x7FFFFFFE )
    {
      if ( a3 != -1LL )
        *v10 = 0;
    }
    else
    {
      v11 = a2 - (_QWORD)v10;
      do
      {
        if ( v9 == 1 )
          break;
        v12 = *(_WORD *)((char *)v10 + v11);
        if ( !v12 )
          break;
        *v10++ = v12;
        --v9;
      }
      while ( v9 );
      v13 = v10 - 1;
      if ( v9 )
        v13 = v10;
      *v13 = 0;
    }
    a1[1] += a3;
  }
  return (unsigned int)v8;
}
