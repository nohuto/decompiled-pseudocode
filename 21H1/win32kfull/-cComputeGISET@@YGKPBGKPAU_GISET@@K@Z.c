/*
 * XREFs of ?cComputeGISET@@YGKPBGKPAU_GISET@@K@Z @ 0xDF0B2
 * Callers:
 *     ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6 (-bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge cComputeGISET@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        unsigned __int16 *a3,
        unsigned int a4,
        struct _GISET *a5,
        unsigned int a6)
{
  unsigned __int16 *v6; // esi
  unsigned int v7; // eax
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // edx
  unsigned __int16 *v11; // ebx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v16; // [esp+Ch] [ebp-10h]
  unsigned __int16 v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]

  v6 = a3;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v18 = 0;
  v10 = 0;
  v16 = 0;
  v19 = 0;
  if ( a1 )
  {
    v11 = a3 + 5;
    do
    {
      v12 = v9 + 1;
      if ( v9 + 1 < v7 )
      {
        do
        {
          if ( *(unsigned __int16 *)(a2 + 2 * v12) - *(unsigned __int16 *)(a2 + 2 * v12 - 2) > 1 )
            break;
          ++v12;
        }
        while ( v12 < a1 );
        v6 = a3;
        v8 = v18;
        v9 = v16;
      }
      v17 = *(_WORD *)(a2 + 2 * v9);
      v13 = *(unsigned __int16 *)(a2 + 2 * v12 - 2) - v17 + 1;
      v8 += v13;
      v18 = v8;
      if ( v6 )
      {
        *(v11 - 1) = v17;
        *v11 = v13;
      }
      ++v19;
      v11 += 2;
      v7 = a1;
      v9 = v12;
      v16 = v12;
    }
    while ( v12 < a1 );
    v10 = v19;
  }
  if ( v6 )
  {
    *((_DWORD *)v6 + 1) = a4;
    *(_DWORD *)v6 = v8;
  }
  return v10;
}
