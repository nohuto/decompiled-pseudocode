/*
 * XREFs of _vAlphaPerPixelOnly@16 @ 0xF92B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vAlphaPerPixelOnly(_DWORD *a1, int *a2, int a3, int a4)
{
  _DWORD *v4; // edi
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebp
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int v12; // ecx
  _DWORD *v13; // [esp+0h] [ebp-1Ch]

  v4 = a1;
  v13 = &a1[a3];
  if ( a1 != v13 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *a2;
          v7 = HIBYTE(*a2++);
          if ( (_BYTE)v7 )
            break;
          if ( ++v4 == v13 )
            return;
        }
        if ( (_BYTE)v7 == 0xFF )
          break;
        v8 = 255 - v7;
        v9 = (255 - v7) * (*v4 & 0xFF00FF) + 8388736;
        v10 = (255 - v7) * ((*v4 & 0xFF00FFFF) >> 8) + 8388736;
        v11 = v8 * (*v4 & 0xFF00FF) + 8388736;
        v12 = (v8 * ((*v4++ & 0xFF00FFFF) >> 8) + 8388736) & 0xFF00FFFF;
        *(v4 - 1) = (((v9 + ((v11 & 0xFF00FFFF) >> 8)) & 0xFF00FFFF) >> 8) + v6 + ((v10 + (v12 >> 8)) & 0xFF00FF00);
        if ( v4 == v13 )
          return;
      }
      *v4++ = v6;
    }
    while ( v4 != v13 );
  }
}
