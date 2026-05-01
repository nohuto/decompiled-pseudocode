/*
 * XREFs of ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x180136D2C
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180025984 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        __int64 a2,
        unsigned int *a3)
{
  return Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
           a2,
           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3,
           a3);
}
