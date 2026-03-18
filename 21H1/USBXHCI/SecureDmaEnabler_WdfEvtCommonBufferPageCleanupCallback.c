/*
 * XREFs of SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x1C0077310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_Unmap @ 0x1C004F578 (SecureDmaEnabler_Unmap.c)
 */

__int64 __fastcall SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0060450);
  if ( *(_DWORD *)(result + 96) )
    return SecureDmaEnabler_Unmap(*(_QWORD *)(result + 24), result + 88);
  return result;
}
