/*
 * XREFs of ?vConvertAndSaveBGRATo8@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02C3C50
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C0147B00 (-XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z.c)
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0149564 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

char __fastcall vConvertAndSaveBGRATo8(__int64 a1, unsigned int *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  __int64 v6; // rdi
  __int64 v8; // rsi
  unsigned __int8 *Xlate555; // rax
  __int64 v10; // rbx
  const unsigned __int8 *v11; // rbp
  _BYTE *v12; // rdi

  v6 = a4;
  v8 = a3;
  Xlate555 = XLATEOBJ_pGetXlate555(a5);
  v10 = 0LL;
  v11 = Xlate555;
  if ( Xlate555 )
  {
    v12 = (_BYTE *)(a1 + v6);
    if ( v12 > &v12[v8] )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        LOBYTE(Xlate555) = XLATEOBJ_BGR32ToPalSurf(a5, v11, *a2);
        *v12 = (_BYTE)Xlate555;
        ++a2;
        ++v12;
        ++v10;
      }
      while ( v10 != v8 );
    }
  }
  return (char)Xlate555;
}
