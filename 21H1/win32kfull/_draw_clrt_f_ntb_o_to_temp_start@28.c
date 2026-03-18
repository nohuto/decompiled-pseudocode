/*
 * XREFs of _draw_clrt_f_ntb_o_to_temp_start@28 @ 0x1D5452
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrClearTypeGlyph@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D50BD (-vOrClearTypeGlyph@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 */

int __stdcall draw_clrt_f_ntb_o_to_temp_start(unsigned int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7)
{
  unsigned int v7; // esi
  int v8; // edx
  int v9; // ebx
  unsigned int v10; // edi
  int result; // eax
  unsigned __int8 *v12; // [esp+0h] [ebp-Ch]
  unsigned int v13; // [esp+4h] [ebp-8h]
  int v14; // [esp+14h] [ebp+8h]

  v7 = a1;
  v8 = *(_DWORD *)(a1 + 12) - a7;
  v9 = *(_DWORD *)(a1 + 8) - a4;
  v10 = a1 + 16 * a2;
  v14 = v8;
  while ( v7 < v10 )
  {
    vOrClearTypeGlyph(
      *(_DWORD *)(**(_DWORD **)(v7 + 4) + 8),
      **(_DWORD **)(v7 + 4),
      (struct _GLYPHBITS *)(***(_DWORD ***)(v7 + 4) + a3 + v9 + a5 * (v8 + *(_DWORD *)(**(_DWORD **)(v7 + 4) + 4))),
      a5,
      v12,
      v13);
    v9 += a6;
    v7 += 16;
    v8 = v14;
  }
  return result;
}
