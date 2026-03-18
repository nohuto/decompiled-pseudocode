/*
 * XREFs of ?SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C006A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C006A6EC (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetHandleProperty(
        DirectComposition::CInteractionMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  if ( a2 )
    return 3221225485LL;
  else
    return DirectComposition::CInteractionMarshaler::SetInputSinkHelper(this, a3, a4);
}
