/*
 * XREFs of ?ColorMatch@@YGKVXEPALOBJ@@T_PAL_ULONG@@PAK@Z @ 0x222D2D
 * Callers:
 *     ?ptransMatchAPal@@YGPAU_TRANSLATE@@PAVDC@@VXEPALOBJ@@1HPAK2@Z @ 0x222F82 (-ptransMatchAPal@@YGPAU_TRANSLATE@@PAVDC@@VXEPALOBJ@@1HPAK2@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall ColorMatch(int *this, int a2, int a3)
{
  int *v3; // esi
  unsigned int result; // eax
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // edx
  _DWORD *v8; // ecx
  unsigned int v9; // esi
  int v10; // ecx
  unsigned int v12; // [esp+8h] [ebp-14h]
  _DWORD *v13; // [esp+Ch] [ebp-10h]
  unsigned int v14; // [esp+14h] [ebp-8h]

  v3 = this;
  if ( (a3 & 0x2000000) != 0 )
  {
    result = (unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 20) ? (unsigned __int16)a3 : 0;
    *this = 0;
    return result;
  }
  if ( (a3 & 0x1000000) != 0 )
  {
    *this = 0xFFFFFFF;
    return 0;
  }
  v12 = 0;
  v5 = 0;
  v6 = 0xFFFFFFF;
  v7 = 0xFFFFFFF;
  v14 = 0xFFFFFFF;
  if ( !*(_DWORD *)(a2 + 20) )
    goto LABEL_15;
  v8 = *(_DWORD **)(a2 + 76);
  v9 = *(_DWORD *)(a2 + 20);
  v13 = v8;
  do
  {
    v10 = *v8;
    if ( (v10 & 0x10000000) == 0 || (v10 & 0x1000000) != 0 )
      goto LABEL_13;
    v7 = v14;
    if ( (BYTE1(v10) - BYTE1(a3)) * (BYTE1(v10) - BYTE1(a3))
       + ((unsigned __int8)v10 - (unsigned __int8)a3) * ((unsigned __int8)v10 - (unsigned __int8)a3)
       + (BYTE2(v10) - BYTE2(a3)) * (BYTE2(v10) - (unsigned int)BYTE2(a3)) < v14 )
    {
      v7 = (BYTE1(v10) - BYTE1(a3)) * (BYTE1(v10) - BYTE1(a3))
         + ((unsigned __int8)v10 - (unsigned __int8)a3) * ((unsigned __int8)v10 - (unsigned __int8)a3)
         + (BYTE2(v10) - BYTE2(a3)) * (BYTE2(v10) - BYTE2(a3));
      v12 = v5;
      v14 = v7;
    }
    if ( !v7 )
      break;
    v9 = *(_DWORD *)(a2 + 20);
LABEL_13:
    ++v5;
    v8 = ++v13;
  }
  while ( v5 < v9 );
  v3 = this;
  v6 = 0xFFFFFFF;
LABEL_15:
  if ( (a3 & 0x4000000) == 0 )
    v6 = v7;
  result = v12;
  *v3 = v6;
  return result;
}
