/*
 * XREFs of _vAlphaPerPixelAndConst@16 @ 0x22B84D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vAlphaPerPixelAndConst(unsigned int *a1, int a2, int a3, unsigned int a4)
{
  int result; // eax
  unsigned int v5; // ebx
  unsigned int *v6; // edi
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // esi
  int v11; // edx
  int v12; // ebx
  int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // esi
  int v17; // ecx
  int v18; // [esp+10h] [ebp+8h]
  int v19; // [esp+14h] [ebp+Ch]
  int v20; // [esp+18h] [ebp+10h]
  unsigned int v21; // [esp+1Ch] [ebp+14h]

  result = a3;
  v5 = HIWORD(a4);
  v21 = HIWORD(a4);
  if ( a3 )
  {
    v6 = a1;
    v7 = a2 - (_DWORD)a1;
    v19 = a2 - (_DWORD)a1;
    do
    {
      v8 = *(unsigned int *)((char *)v6 + v7);
      v20 = --result;
      v9 = HIBYTE(v8);
      if ( HIBYTE(v8) )
      {
        v10 = v8;
        v11 = v8 & 0xFF00FF;
        v18 = (unsigned __int8)v5;
        v12 = (*v6 >> 8) & 0xFF00FF;
        v13 = (v10 >> 8) & 0xFF00FF;
        if ( (_BYTE)v9 == 0xFF )
        {
          v14 = 255 * v12 + 8388736 + v18 * (v13 - v12);
          v15 = (v14 + ((v14 >> 8) & 0xFF00FF)) ^ ((v14 + ((v14 >> 8) & 0xFFFF00FF)) ^ ((v18 * (v11 - (*v6 & 0xFF00FF))
                                                                                       + 8388736
                                                                                       + 255 * (*v6 & 0xFF00FF)
                                                                                       + (((v18
                                                                                          * (v11 - (*v6 & 0xFF00FF))
                                                                                          + 8388736
                                                                                          + 255 * (*v6 & 0xFF00FF)) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
        }
        else
        {
          v16 = (v13 * v18 + 8388736 + (((unsigned int)(v13 * v18 + 8388736) >> 8) & 0xFF00FF)) ^ ((v13 * v18
                                                                                                  + 8388736
                                                                                                  + (((unsigned int)(v13 * v18 + 8388736) >> 8) & 0xFFFF00FF)) ^ ((v11 * v18 + 8388736 + (((unsigned int)(v11 * v18 + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
          v17 = 255 - HIBYTE(v16);
          v15 = v16
              + ((v17 * v12 + 8388736 + (((unsigned int)(v17 * v12 + 8388736) >> 8) & 0xFF00FF)) ^ ((v17 * v12 + 8388736 + (((unsigned int)(v17 * v12 + 8388736) >> 8) & 0xFFFF00FF)) ^ ((v17 * (*v6 & 0xFF00FF) + 8388736 + (((v17 * (*v6 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF);
        }
        LOBYTE(v5) = v21;
        *v6 = v15;
        result = v20;
      }
      v7 = v19;
      ++v6;
    }
    while ( result );
  }
  return result;
}
