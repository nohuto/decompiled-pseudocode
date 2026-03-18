/*
 * XREFs of CmFcpMapSection @ 0x1407BC7FC
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140879504 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140879860 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140879E64 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 */

NTSTATUS __fastcall CmFcpMapSection(_QWORD *a1, _QWORD *a2)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  PVOID MappedBase; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+40h] [rbp+18h] BYREF

  MappedBase = 0LL;
  v3 = (void *)a1[1];
  if ( !v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *a2 = *a1;
    return 0;
  }
  ViewSize = 0LL;
  result = MmMapViewInSystemSpace(v3, &MappedBase, &ViewSize);
  if ( result >= 0 )
  {
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[1] = MappedBase;
    a2[2] = a1[2];
    *a2 = *a1;
    return 0;
  }
  return result;
}
