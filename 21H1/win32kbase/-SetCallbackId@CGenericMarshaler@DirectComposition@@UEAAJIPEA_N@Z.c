/*
 * XREFs of ?SetCallbackId@CGenericMarshaler@DirectComposition@@UEAAJIPEA_N@Z @ 0x1C01D77A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C01D60C8 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetCallbackId(
        DirectComposition::CGenericMarshaler *this,
        __int64 a2,
        bool *a3)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CCallbackIdProperty>(
           (__int64)this,
           a2,
           a2,
           a3);
}
