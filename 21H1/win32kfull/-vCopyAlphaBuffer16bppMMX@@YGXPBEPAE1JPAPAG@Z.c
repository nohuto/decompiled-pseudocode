/*
 * XREFs of ?vCopyAlphaBuffer16bppMMX@@YGXPBEPAE1JPAPAG@Z @ 0xFB0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vCopyAlphaBuffer16bppMMX(
        const unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4,
        unsigned __int8 **a5)
{
  unsigned __int8 *v5; // edx
  unsigned __int8 *v6; // ecx
  const unsigned __int8 *v7; // edi
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // esi
  unsigned __int8 *v11; // [esp+18h] [ebp+10h]
  int v12; // [esp+1Ch] [ebp+14h]

  v5 = a2;
  v6 = &a3[(unsigned __int8)a2 & 7];
  v11 = v6;
  v7 = a1;
  *a5 = v6;
  if ( ((unsigned __int8)a2 & 2) != 0 )
  {
    if ( (unsigned __int8)(*a1 - 1) < 0x71u )
      *(_WORD *)v6 = *(_WORD *)a2;
    v5 = a2 + 2;
    v6 += 2;
    a2 += 2;
    v7 = a1 + 1;
    v11 = v6;
    v8 = a4 - 1;
  }
  else
  {
    v8 = a4;
  }
  if ( ((unsigned __int8)v5 & 4) != 0 && v8 >= 2 )
  {
    v8 -= 2;
    if ( (unsigned __int8)(*v7 - 1) < 0x71u || (unsigned __int8)(v7[1] - 1) < 0x71u )
      *(_DWORD *)v6 = *(_DWORD *)v5;
    v5 += 4;
    v6 += 4;
    a2 = v5;
    v7 += 2;
    v11 = v6;
  }
  v9 = v8 - 4;
  if ( v9 >= 0 )
  {
    v10 = (unsigned int)(v9 + 4) >> 2;
    v12 = v10;
    LOBYTE(v9) = -4 * v10 + v9;
    do
    {
      if ( (unsigned __int8)(*v7 - 1) < 0x71u || (unsigned __int8)(v7[1] - 1) < 0x71u )
      {
        if ( (unsigned __int8)(v7[2] - 1) < 0x71u || (unsigned __int8)(v7[3] - 1) < 0x71u )
        {
          *(_QWORD *)v11 = *(_QWORD *)a2;
          v10 = v12;
        }
        else
        {
          *(_DWORD *)v6 = *(_DWORD *)v5;
        }
      }
      else if ( (unsigned __int8)(v7[2] - 1) < 0x71u || (unsigned __int8)(v7[3] - 1) < 0x71u )
      {
        *((_DWORD *)v6 + 1) = *((_DWORD *)v5 + 1);
      }
      v5 += 8;
      v6 += 8;
      v7 += 4;
      a2 = v5;
      --v10;
      v11 = v6;
      v12 = v10;
    }
    while ( v10 );
  }
  if ( (v9 & 2) != 0 )
  {
    if ( (unsigned __int8)(*v7 - 1) < 0x71u || (unsigned __int8)(v7[1] - 1) < 0x71u )
      *(_DWORD *)v6 = *(_DWORD *)v5;
    v5 += 4;
    v6 += 4;
    v7 += 2;
  }
  if ( (v9 & 1) != 0 && (unsigned __int8)(*v7 - 1) < 0x71u )
    *(_WORD *)v6 = *(_WORD *)v5;
}
