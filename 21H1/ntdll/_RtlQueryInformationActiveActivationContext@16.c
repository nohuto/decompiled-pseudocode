/*
 * XREFs of _RtlQueryInformationActiveActivationContext@16 @ 0x4B2B3E80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 */

NTSTATUS __cdecl RtlQueryInformationActiveActivationContext(
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  ULONG_PTR *savedregs; // [esp+0h] [ebp+0h]

  return RtlQueryInformationActivationContext(
           1u,
           0,
           0,
           ActivationContextInformationClass,
           ActivationContextInformation,
           ActivationContextInformationLength,
           savedregs);
}
