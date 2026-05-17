/*
 * XREFs of _PfxRemovePrefix@8 @ 0x4B345310
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 */

int __stdcall PfxRemovePrefix(int a1, unsigned __int16 *a2)
{
  int result; // eax
  unsigned __int16 *v3; // esi
  unsigned __int16 *v4; // ecx
  unsigned __int16 *v5; // edi
  int v6; // edx
  int i; // eax

  result = *a2;
  if ( (__int16)result >= 513 && (__int16)result <= 514 )
  {
    v3 = a2 + 4;
    v4 = (unsigned __int16 *)*((_DWORD *)a2 + 2);
    if ( v4 != a2 + 4 )
    {
      do
      {
        v3 = v4;
        v4 = *(unsigned __int16 **)v4;
      }
      while ( v4 != v3 );
    }
    v5 = v3 - 4;
    result = (int)RtlDelete((_DWORD *)a2 + 2);
    if ( result )
    {
      if ( v3 != (unsigned __int16 *)result )
      {
        v6 = result - 8;
        for ( i = *((_DWORD *)v3 - 1); *(unsigned __int16 **)(i + 4) != v5; i = *(_DWORD *)(i + 4) )
          ;
        *(_WORD *)v6 = 513;
        *(_DWORD *)(i + 4) = v6;
        *(_DWORD *)(v6 + 4) = *((_DWORD *)v3 - 1);
        result = 514;
        *((_DWORD *)v3 - 1) = 0;
        *v5 = 514;
      }
    }
    else
    {
      for ( result = *((_DWORD *)v3 - 1); *(unsigned __int16 **)(result + 4) != v5; result = *(_DWORD *)(result + 4) )
        ;
      *(_DWORD *)(result + 4) = *((_DWORD *)v3 - 1);
    }
  }
  return result;
}
