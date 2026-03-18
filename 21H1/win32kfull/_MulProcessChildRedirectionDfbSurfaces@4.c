/*
 * XREFs of _MulProcessChildRedirectionDfbSurfaces@4 @ 0x206950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulProcessChildRedirectionDfbSurfaces(int a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  int v3; // edi
  _DWORD *v4; // ecx
  int v5; // eax
  int v7; // [esp+Ch] [ebp-4h]
  _DWORD *v8; // [esp+18h] [ebp+8h]

  v1 = HmgShareLock(a1, 5);
  v2 = 0;
  v3 = 1;
  v4 = *(_DWORD **)(v1 + 16);
  v8 = v4;
  v7 = *v4;
  if ( *(_DWORD *)(*v4 + 8) )
  {
    do
    {
      v5 = *(_DWORD *)(v4[1] + 4 * v2) - 16;
      if ( (*(_BYTE *)(v5 + 76) & 1) != 0 )
      {
        if ( !pProcessDfbSurfacesInternal(v5, 1) )
        {
          v3 = 0;
          break;
        }
        v4 = v8;
      }
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v7 + 8) );
  }
  DEC_SHARE_REF_CNT(v1);
  return v3;
}
