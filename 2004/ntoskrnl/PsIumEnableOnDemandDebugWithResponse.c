/*
 * XREFs of PsIumEnableOnDemandDebugWithResponse @ 0x1409095B4
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14088C67C (VslEnableOnDemandDebugWithResponse.c)
 */

__int64 __fastcall PsIumEnableOnDemandDebugWithResponse(void *a1, const void *a2, unsigned int a3)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v5 = ObReferenceObjectByHandleWithTag(
         a1,
         0x2000u,
         (POBJECT_TYPE)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x79517350u,
         &Object,
         0LL);
  if ( v5 >= 0 )
  {
    v5 = VslEnableOnDemandDebugWithResponse((__int64)Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  }
  return (unsigned int)v5;
}
