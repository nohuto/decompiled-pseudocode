/*
 * XREFs of ?QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z @ 0x1C002D4C4
 * Callers:
 *     imp_WdfRegistryQueryString @ 0x1C002CF70 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C002D190 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0070630 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C00708F0 (imp_WdfRegistryQueryUnicodeString.c)
 * Callees:
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0015510 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 */

__int64 __fastcall FxRegKey::QueryValue(
        FxRegKey *this,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  return FxRegKey::_QueryValue(
           this->m_Globals,
           this->m_Key,
           ValueName,
           ValueLength,
           Value,
           ValueLengthQueried,
           ValueType);
}
