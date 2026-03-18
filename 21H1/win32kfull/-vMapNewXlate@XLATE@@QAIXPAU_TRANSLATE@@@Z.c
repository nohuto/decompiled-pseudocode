/*
 * XREFs of ?vMapNewXlate@XLATE@@QAIXPAU_TRANSLATE@@@Z @ 0x226041
 * Callers:
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XLATE::vMapNewXlate(XLATE *this, struct _TRANSLATE *a2)
{
  int v2; // esi
  _DWORD *v3; // ecx
  _DWORD *i; // ecx

  v2 = *((_DWORD *)this + 3);
  if ( a2 )
  {
    for ( i = (_DWORD *)((char *)this + 60); v2; --v2 )
    {
      *i = *((unsigned __int8 *)a2 + *i + 4);
      ++i;
    }
  }
  else if ( v2 )
  {
    v3 = (_DWORD *)((char *)this + 4 * v2 + 60);
    do
    {
      --v3;
      --v2;
      if ( *v3 >= 0xAu )
        *v3 += 236;
    }
    while ( v2 );
  }
}
