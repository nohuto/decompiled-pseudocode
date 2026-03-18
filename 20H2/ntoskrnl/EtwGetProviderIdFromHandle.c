/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x14039F3E8
 * Callers:
 *     EtwWriteEndScenario @ 0x1407845F0 (EtwWriteEndScenario.c)
 *     EtwWriteStartScenario @ 0x1407846B0 (EtwWriteStartScenario.c)
 *     WdiDispatchControl @ 0x140785500 (WdiDispatchControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1405F4B34 (EtwpReferenceGuidEntry.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
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
