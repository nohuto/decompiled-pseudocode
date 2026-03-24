/*
 * XREFs of CmpGetRegistryNamespaceRootForSilo @ 0x140715CC0
 * Callers:
 *     CmpParseKey @ 0x1406F8C10 (CmpParseKey.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14035FF90 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x140905AF0 (PsGetParentSilo.c)
 */

__int64 __fastcall CmpGetRegistryNamespaceRootForSilo(__int64 ParentSilo)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v3 = 0LL;
    PsGetPermanentSiloContext(ParentSilo, CmpSiloContextSlot, &v3);
    if ( v3 )
    {
      result = *(_QWORD *)(v3 + 32);
      if ( result )
        break;
    }
    ParentSilo = PsGetParentSilo(ParentSilo);
  }
  return result;
}
