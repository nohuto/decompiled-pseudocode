/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x180070580
 * Callers:
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x180070668 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800ABB58 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        char *Buffer)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(Buffer + 8);
  if ( !RtlDeleteElementGenericTable(Table, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
