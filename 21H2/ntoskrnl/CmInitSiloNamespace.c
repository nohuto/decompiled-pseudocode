/*
 * XREFs of CmInitSiloNamespace @ 0x1405D2580
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmpStartSiloRegistryNamespace @ 0x1406225AC (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1406C4248 (CmpGetOrCreateContextForSiloNoRef.c)
 */

__int64 __fastcall CmInitSiloNamespace(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  result = CmpGetOrCreateContextForSiloNoRef(a1, &v2);
  if ( (int)result >= 0 )
  {
    result = CmpStartSiloRegistryNamespace(v2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
