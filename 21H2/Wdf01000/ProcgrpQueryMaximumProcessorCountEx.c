/*
 * XREFs of ProcgrpQueryMaximumProcessorCountEx @ 0x1C0091F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcgrpQueryMaximumProcessorCountEx(unsigned __int16 GroupNumber)
{
  if ( (unsigned __int16)(GroupNumber - 1) > 0xFFFDu )
    return ((__int64 (*)(void))WPP_GLOBAL_WDF_Control.SecurityDescriptor)();
  else
    return 0LL;
}
