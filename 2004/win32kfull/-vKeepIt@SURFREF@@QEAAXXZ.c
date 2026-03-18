/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C02744D0
 * Callers:
 *     GreReferenceObject @ 0x1C00657F8 (GreReferenceObject.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00EEE58 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vKeepIt(SURFREF *this)
{
  INC_SHARE_REF_CNT(*(_QWORD *)this);
}
