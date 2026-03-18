/*
 * XREFs of ?vSolidFillRow1@@YGXPAU_ROW@@KJPAEKJK@Z @ 0x247DED
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidFillRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        ULONG Pattern,
        int a6,
        char a7)
{
  unsigned __int8 *v7; // esi
  int *v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  bool v14; // zf
  char v15; // [esp+8h] [ebp-4h]
  int v16; // [esp+1Ch] [ebp+10h]
  int v17; // [esp+1Ch] [ebp+10h]
  int v18; // [esp+20h] [ebp+14h]

  v7 = &a4[a6 * a3];
  if ( a2 )
  {
    v8 = (int *)a1;
    v15 = 5 - a7;
    do
    {
      v16 = v8[1];
      v18 = v16 >> v15;
      v9 = *v8 >> v15;
      v10 = (*v8 << a7) & 0x1F;
      v11 = v16 >> v15;
      v12 = (unsigned int)(&aulMsk)[v10];
      v17 = ((unsigned __int8)(*v8 << a7) + (unsigned __int8)((v16 - *v8) << a7)) & 0x1F;
      v13 = ~(unsigned int)(&aulMsk)[v17];
      if ( v9 == v11 )
      {
        v12 &= v13;
      }
      else if ( !v10 )
      {
        goto LABEL_8;
      }
      *(_DWORD *)&v7[4 * v9] = Pattern & v12 | *(_DWORD *)&v7[4 * v9] & ~v12;
      if ( v9 != v11 )
      {
        ++v9;
LABEL_8:
        if ( 4 * (v11 - v9) )
        {
          RtlFillMemoryUlong(&v7[4 * v9], 4 * (v11 - v9), Pattern);
          v11 = v18;
        }
        if ( v17 )
          *(_DWORD *)&v7[4 * v11] = Pattern & v13 | *(_DWORD *)&v7[4 * v11] & ~v13;
      }
      v7 += a6;
      v8 = (int *)((char *)a1 + 8);
      v14 = a2-- == 1;
      a1 = (struct _ROW *)((char *)a1 + 8);
    }
    while ( !v14 );
  }
}
