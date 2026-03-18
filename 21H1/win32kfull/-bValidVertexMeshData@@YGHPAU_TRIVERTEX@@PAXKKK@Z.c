/*
 * XREFs of ?bValidVertexMeshData@@YGHPAU_TRIVERTEX@@PAXKKK@Z @ 0x216EA3
 * Callers:
 *     _NtGdiEngGradientFill@40 @ 0x218480 (_NtGdiEngGradientFill@40.c)
 * Callees:
 *     <none>
 */

int __userpurge bValidVertexMeshData@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        struct _TRIVERTEX *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // edi
  int v9; // esi
  _DWORD *i; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // esi

  if ( (unsigned int)a3 > 1 )
  {
    v8 = 16 * (_DWORD)a3 + a2 - 16;
    if ( a5 <= 1 )
    {
      v14 = 0;
      if ( a4 )
      {
        while ( 1 )
        {
          v15 = a2 + 16 * *(_DWORD *)(a1 + 8 * v14);
          if ( v15 < a2 )
            break;
          if ( v15 > v8 )
            break;
          v16 = a2 + 16 * *(_DWORD *)(a1 + 8 * v14 + 4);
          if ( v16 < a2 || v16 > v8 )
            break;
          if ( ++v14 >= (unsigned int)a4 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    if ( a5 == 2 )
    {
      v9 = 0;
      if ( a4 )
      {
        for ( i = (_DWORD *)(a1 + 8); ; i += 3 )
        {
          v11 = a2 + 16 * *(i - 2);
          if ( v11 < a2 )
            break;
          if ( v11 > v8 )
            break;
          v12 = a2 + 16 * *(i - 1);
          if ( v12 < a2 )
            break;
          if ( v12 > v8 )
            break;
          v13 = a2 + 16 * *i;
          if ( v13 < a2 || v13 > v8 )
            break;
          if ( ++v9 >= (unsigned int)a4 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
