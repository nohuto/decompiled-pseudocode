/*
 * XREFs of _RtlIoDecodeMemIoResource@16 @ 0x4B356430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlIoDecodeMemIoResource(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // eax
  char v5; // bl
  int v6; // esi
  int v7; // ecx

  v4 = 0;
  v5 = *(_BYTE *)(a1 + 1);
  v6 = 0;
  v7 = 0;
  if ( v5 == 3 || v5 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 12);
  }
  else if ( (*(_WORD *)(a1 + 4) & 0x200) != 0 )
  {
    v4 = (unsigned __int64)*(unsigned int *)(a1 + 12) >> 24;
    v6 = *(_DWORD *)(a1 + 8) << 8;
    v7 = *(_DWORD *)(a1 + 12) << 8;
  }
  else if ( (*(_WORD *)(a1 + 4) & 0x400) != 0 )
  {
    v4 = (unsigned __int64)*(unsigned int *)(a1 + 12) >> 16;
    v6 = *(_DWORD *)(a1 + 8) << 16;
    v7 = *(_DWORD *)(a1 + 12) << 16;
  }
  else if ( (*(_WORD *)(a1 + 4) & 0x800) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 12);
  }
  if ( a2 )
  {
    *a2 = v7;
    a2[1] = v4;
  }
  if ( a3 )
  {
    *a3 = *(_DWORD *)(a1 + 16);
    a3[1] = *(_DWORD *)(a1 + 20);
  }
  if ( a4 )
  {
    *a4 = *(_DWORD *)(a1 + 24);
    a4[1] = *(_DWORD *)(a1 + 28);
  }
  return v6;
}
