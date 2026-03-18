/*
 * XREFs of ?vLoadAndConvert4ToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C2EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vLoadAndConvert4ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  int v6; // ecx
  int v7; // esi
  unsigned __int8 *v8; // ebx
  ULONG cEntries; // ecx
  unsigned int v10; // edx
  unsigned int *v11; // ecx
  unsigned __int8 v12; // al
  ULONG v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG v16; // ecx
  bool v17; // zf
  ULONG v18; // esi
  unsigned int v19; // edx
  unsigned int *v20; // [esp+Ch] [ebp+8h]
  struct _XLATEOBJ *v21; // [esp+1Ch] [ebp+18h]

  if ( (a5->flXlate & 2) != 0 )
  {
    v6 = -a3 & 1;
    v7 = a4;
    v8 = &a2[a3 >> 1];
    if ( a4 < v6 )
      v6 = a4;
    if ( v6 )
    {
      cEntries = a5->cEntries;
      v10 = *v8 & 0xF;
      if ( v10 > cEntries )
        v10 %= cEntries;
      ++v8;
      *a1 = *(&a5[3].iUniq + v10) | 0xFF000000;
      v11 = a1 + 1;
      v7 = a4 - 1;
    }
    else
    {
      v11 = a1;
    }
    v20 = v11;
    if ( v7 >= 2 )
    {
      v21 = (struct _XLATEOBJ *)((unsigned int)v7 >> 1);
      v7 -= 2 * ((unsigned int)v7 >> 1);
      do
      {
        v12 = *v8;
        v13 = a5->cEntries;
        v14 = *v8 >> 4;
        if ( v14 > v13 )
        {
          v14 %= v13;
          v12 = *v8;
        }
        v15 = v12 & 0xF;
        *v20 = *(&a5[3].iUniq + v14) | 0xFF000000;
        v16 = a5->cEntries;
        if ( v15 > v16 )
          v15 %= v16;
        ++v8;
        v20[1] = *(&a5[3].iUniq + v15) | 0xFF000000;
        v11 = v20 + 2;
        v17 = v21 == (struct _XLATEOBJ *)1;
        v21 = (struct _XLATEOBJ *)((char *)v21 - 1);
        v20 += 2;
      }
      while ( !v17 );
    }
    if ( v7 )
    {
      v18 = a5->cEntries;
      v19 = *v8 >> 4;
      if ( v19 > v18 )
        v19 %= v18;
      *v11 = *(&a5[3].iUniq + v19) | 0xFF000000;
    }
  }
}
