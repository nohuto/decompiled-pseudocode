/*
 * XREFs of ??1BUCKET@@QEAA@XZ @ 0x180487860
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1804878E0 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 */

void __fastcall BUCKET::~BUCKET(BUCKET *this)
{
  ((void (*)(void))CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy)();
  if ( *(_QWORD *)this )
    CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(this);
}
