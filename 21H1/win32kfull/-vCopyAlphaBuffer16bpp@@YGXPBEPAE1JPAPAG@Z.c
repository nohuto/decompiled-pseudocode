/*
 * XREFs of ?vCopyAlphaBuffer16bpp@@YGXPBEPAE1JPAPAG@Z @ 0x1D5034
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vCopyAlphaBuffer16bpp(
        const unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int16 **a5)
{
  unsigned __int8 *v5; // edx
  unsigned __int16 *v6; // ecx
  const unsigned __int8 *v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // edi

  v5 = a2;
  v6 = (unsigned __int16 *)&a3[(unsigned __int8)a2 & 3];
  v7 = a1;
  *a5 = v6;
  if ( ((unsigned __int8)a2 & 2) != 0 )
  {
    if ( (unsigned __int8)(*a1 - 1) < 0x71u )
      *v6 = *(_WORD *)a2;
    v5 = a2 + 2;
    ++v6;
    v7 = a1 + 1;
    v8 = a4 - 1;
  }
  else
  {
    v8 = a4;
  }
  if ( (int)(v8 - 2) >= 0 )
  {
    v9 = v8 >> 1;
    do
    {
      if ( (unsigned __int8)(*v7 - 1) < 0x71u || (unsigned __int8)(v7[1] - 1) < 0x71u )
        *(_DWORD *)v6 = *(_DWORD *)v5;
      v5 += 4;
      v6 += 2;
      v7 += 2;
      --v9;
    }
    while ( v9 );
  }
  if ( (((_BYTE)v8 - 2) & 1) != 0 && (unsigned __int8)(*v7 - 1) < 0x71u )
    *v6 = *(_WORD *)v5;
}
