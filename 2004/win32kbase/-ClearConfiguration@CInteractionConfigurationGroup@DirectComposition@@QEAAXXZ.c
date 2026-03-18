/*
 * XREFs of ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C000EE94
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C000E710 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C000EF80 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

void __fastcall DirectComposition::CInteractionConfigurationGroup::ClearConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this)
{
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 16,
    0LL);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 40,
    0LL);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 64,
    0LL);
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 1;
  *((_DWORD *)this + 23) = -1;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 3) |= 0x1Fu;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 20) = 0;
}
