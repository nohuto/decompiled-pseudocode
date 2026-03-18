/*
 * XREFs of ?vConvertAndSaveBGRATo4@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BCF1
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_BGR32ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z @ 0x225931 (-XLATEOBJ_BGR32ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

char __userpurge vConvertAndSaveBGRATo4@<al>(
        unsigned int *a1@<ebx>,
        unsigned __int8 *a2,
        unsigned int *a3,
        int a4,
        int a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  unsigned __int8 *v8; // esi
  unsigned __int8 *Xlate555; // eax
  const unsigned __int8 *v10; // ecx
  int v11; // edi
  unsigned int *v12; // ebx
  unsigned int *v13; // edi
  unsigned __int8 v14; // bl
  unsigned __int8 *v16; // [esp+Ch] [ebp+8h]
  unsigned int v17; // [esp+10h] [ebp+Ch]
  int v18; // [esp+14h] [ebp+10h]
  unsigned int *v19; // [esp+18h] [ebp+14h]

  v8 = &a2[a5 >> 1];
  Xlate555 = XLATEOBJ_pGetXlate555((int)a6, a1);
  v10 = Xlate555;
  v16 = Xlate555;
  if ( Xlate555 )
  {
    v11 = a4;
    if ( a4 )
    {
      v12 = a3;
      if ( (a5 & 1) != 0 )
      {
        v12 = a3 + 1;
        LOBYTE(Xlate555) = *v8 & 0xF0 | XLATEOBJ_BGR32ToPalSurf(a6, Xlate555, *a3);
        v10 = v16;
        *v8++ = (unsigned __int8)Xlate555;
        v11 = a4 - 1;
      }
      if ( v11 >= 2 )
      {
        v17 = (unsigned int)v11 >> 1;
        v18 = v11 - 2 * ((unsigned int)v11 >> 1);
        v13 = v12;
        while ( 1 )
        {
          v14 = XLATEOBJ_BGR32ToPalSurf(a6, v10, v13[1]);
          LOBYTE(Xlate555) = 16 * XLATEOBJ_BGR32ToPalSurf(a6, v16, *v13);
          v13 += 2;
          *v8++ = (unsigned __int8)Xlate555 | v14;
          if ( !--v17 )
            break;
          v10 = v16;
        }
        v19 = v13;
        v11 = v18;
        v12 = v19;
      }
      if ( v11 )
      {
        LOBYTE(Xlate555) = *v8 & 0xF | (16 * XLATEOBJ_BGR32ToPalSurf(a6, v16, *v12));
        *v8 = (unsigned __int8)Xlate555;
      }
    }
  }
  return (char)Xlate555;
}
