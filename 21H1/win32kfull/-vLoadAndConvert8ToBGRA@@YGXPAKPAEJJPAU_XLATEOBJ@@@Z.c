/*
 * XREFs of ?vLoadAndConvert8ToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C3E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vLoadAndConvert8ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  unsigned __int8 *v6; // edi
  int v7; // ebx
  ULONG v9; // edx
  ULONG cEntries; // [esp+14h] [ebp+10h]
  struct _XLATEOBJ *v11; // [esp+1Ch] [ebp+18h]

  if ( (a5->flXlate & 2) != 0 )
  {
    v11 = 0;
    v6 = &a2[a3];
    v7 = &a2[a3 + a4] >= &a2[a3] ? a4 : 0;
    if ( v7 )
    {
      do
      {
        v9 = *v6;
        cEntries = a5->cEntries;
        if ( v9 > cEntries )
          v9 %= cEntries;
        *a1++ = *(&a5[3].iUniq + v9) | 0xFF000000;
        ++v6;
        v11 = (struct _XLATEOBJ *)((char *)v11 + 1);
      }
      while ( v11 != (struct _XLATEOBJ *)v7 );
    }
  }
}
