/*
 * XREFs of AcpiTranslatePepDeviceControlResources @ 0x1C00B16F0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1730 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResources(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return AcpiTranslatePepDeviceControlResourcesInternal(
           *(_QWORD *)(RootDeviceExtension + 728),
           *(_QWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 24),
           a4,
           *(void **)(a1 + 32),
           a1 + 40);
}
