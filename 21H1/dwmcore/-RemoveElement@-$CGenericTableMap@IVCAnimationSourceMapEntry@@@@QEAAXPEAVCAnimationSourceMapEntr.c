/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x180096768
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x18007E868 (--1CResource@@MEAA@XZ.c)
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x180096850 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        char *Buffer)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(Buffer + 8);
  if ( !RtlDeleteElementGenericTable(Table, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
