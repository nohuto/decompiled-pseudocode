/*
 * XREFs of IsRemoteConnection @ 0x1C0009F24
 * Callers:
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BB53C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*IsRemoteConnection())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0250F50;
  if ( qword_1C0250F50 )
    return (__int64 (*)(void))qword_1C0250F50();
  return result;
}
