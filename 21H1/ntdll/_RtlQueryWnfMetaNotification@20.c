/*
 * XREFs of _RtlQueryWnfMetaNotification@20 @ 0x4B33BE50
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryWnfStateNameInformation@20 @ 0x4B2F3FC0 (_NtQueryWnfStateNameInformation@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall RtlQueryWnfMetaNotification(
        PVOID InfoBuffer,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        int a3,
        int a4,
        void *ExplicitScope)
{
  WNF_STATE_NAME StateName; // [esp+0h] [ebp-Ch] BYREF

  StateName.Data[0] = a3;
  StateName.Data[1] = a4;
  return NtQueryWnfStateNameInformation(&StateName, NameInfoClass, ExplicitScope, InfoBuffer, 4u);
}
