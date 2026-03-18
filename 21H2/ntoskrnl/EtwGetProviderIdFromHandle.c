/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x14025A19C
 * Callers:
 *     WdiDispatchControl @ 0x1406E6A28 (WdiDispatchControl.c)
 *     EtwWriteStartScenario @ 0x14081C9F0 (EtwWriteStartScenario.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140796BF4 (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwGetProviderIdFromHandle(PVOID *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v6 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 40LL);
      ObfDereferenceObject(v6);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)a1[4]) )
  {
    *a3 = *(_OWORD *)((char *)a1[4] + 40);
    EtwpUnreferenceGuidEntry(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
