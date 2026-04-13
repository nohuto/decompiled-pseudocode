/*
 * XREFs of ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x180032034
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x18002BBD0 (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x180040D18 (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find_first_of(char *a1, _WORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rbx
  char *v8; // rax
  char *i; // rax
  __int64 v10; // r8
  _WORD *v11; // rdx

  if ( *a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    if ( v4 )
    {
      v5 = *((_QWORD *)a1 + 2);
      if ( a3 < v5 )
      {
        if ( *((_QWORD *)a1 + 3) < 8uLL )
          v6 = a1;
        else
          v6 = *(char **)a1;
        v7 = (unsigned __int64)&v6[2 * v5];
        if ( *((_QWORD *)a1 + 3) < 8uLL )
          v8 = a1;
        else
          v8 = *(char **)a1;
        for ( i = &v8[2 * a3]; (unsigned __int64)i < v7; i += 2 )
        {
          v10 = v4;
          v11 = a2;
          while ( *v11 != *(_WORD *)i )
          {
            ++v11;
            if ( !--v10 )
            {
              v11 = 0LL;
              break;
            }
          }
          if ( v11 )
          {
            if ( *((_QWORD *)a1 + 3) >= 8uLL )
              a1 = *(char **)a1;
            return (i - a1) >> 1;
          }
        }
      }
    }
  }
  return -1LL;
}
