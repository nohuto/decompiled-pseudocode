/*
 * XREFs of EtwTraceGdiTransformHandle @ 0x1C001F1BC
 * Callers:
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C001EF48 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C001F0B0 (HmgModifyHandleType.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003B020 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 * Callees:
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C0128914 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGdiTransformHandle(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    return McTemplateK0ppqqq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
