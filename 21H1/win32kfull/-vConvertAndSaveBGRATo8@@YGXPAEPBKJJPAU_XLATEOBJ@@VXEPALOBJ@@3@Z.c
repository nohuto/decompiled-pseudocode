/*
 * XREFs of ?vConvertAndSaveBGRATo8@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BDBD
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_BGR32ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z @ 0x225931 (-XLATEOBJ_BGR32ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

unsigned __int8 *__userpurge vConvertAndSaveBGRATo8@<eax>(
        unsigned int *a1@<ebx>,
        int a2,
        unsigned int *a3,
        int a4,
        int a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  unsigned __int8 *result; // eax
  const unsigned __int8 *v9; // ebx
  _BYTE *v10; // esi
  unsigned __int8 *v12; // [esp+Ch] [ebp+8h]
  unsigned __int8 *v13; // [esp+18h] [ebp+14h]

  result = XLATEOBJ_pGetXlate555((int)a6, a1);
  v9 = result;
  if ( result )
  {
    v10 = (_BYTE *)(a5 + a2);
    v13 = 0;
    result = &v10[a4] >= v10 ? (unsigned __int8 *)a4 : 0;
    v12 = result;
    if ( result )
    {
      do
      {
        *v10++ = XLATEOBJ_BGR32ToPalSurf(a6, v9, *a3++);
        result = v13 + 1;
        v13 = result;
      }
      while ( result != v12 );
    }
  }
  return result;
}
