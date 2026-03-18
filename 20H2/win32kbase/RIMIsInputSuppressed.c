/*
 * XREFs of RIMIsInputSuppressed @ 0x1C0166258
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C017767C (RIMProcessAnyPointerDeviceInput.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0178004 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r8d

  v1 = *(_DWORD *)(a1 + 1328);
  v2 = 0;
  if ( v1 == 1
    || v1 == 2
    && ((unsigned int)RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48)) & gWakeOnDeviceTypes) == 0 )
  {
    return 1;
  }
  return v2;
}
