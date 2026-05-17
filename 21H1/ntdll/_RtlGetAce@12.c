/*
 * XREFs of _RtlGetAce@12 @ 0x4B2EA0A0
 * Callers:
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlGetAce(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // edx
  unsigned int v4; // ebx

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u && a2 < *(unsigned __int16 *)(a1 + 4) )
  {
    v3 = a1 + 8;
    v4 = 0;
    *a3 = a1 + 8;
    if ( a2 )
    {
      while ( v3 < a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
      {
        v3 += *(unsigned __int16 *)(v3 + 2);
        ++v4;
        *a3 = v3;
        if ( v4 >= a2 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( v3 < a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
        return 0;
    }
  }
  return -1073741811;
}
