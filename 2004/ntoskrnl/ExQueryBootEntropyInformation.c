/*
 * XREFs of ExQueryBootEntropyInformation @ 0x140786960
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1406A4800 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExQueryBootEntropyInformation(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Parameter; // [rsp+30h] [rbp+8h] BYREF

  Parameter = a1;
  result = RtlRunOnceExecuteOnce(&ExpBootEntropyInit, ExpInitBootEntropyInformation, &Parameter, 0LL);
  if ( result >= 0 && Parameter != -1 )
    return -1073741823;
  return result;
}
