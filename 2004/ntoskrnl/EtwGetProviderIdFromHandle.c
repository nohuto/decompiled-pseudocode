/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x14039C298
 * Callers:
 *     EtwWriteEndScenario @ 0x140775FF0 (EtwWriteEndScenario.c)
 *     EtwWriteStartScenario @ 0x1407760B0 (EtwWriteStartScenario.c)
 *     WdiDispatchControl @ 0x140776F00 (WdiDispatchControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     EtwpReferenceGuidEntry @ 0x14066E2C4 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14066F5A8 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwGetProviderIdFromHandle(ULONG_PTR *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v7; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v7 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 40LL);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)EtwpReferenceGuidEntry(a1[4]) )
  {
    *a3 = *(_OWORD *)(a1[4] + 40);
    EtwpUnreferenceGuidEntry(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
