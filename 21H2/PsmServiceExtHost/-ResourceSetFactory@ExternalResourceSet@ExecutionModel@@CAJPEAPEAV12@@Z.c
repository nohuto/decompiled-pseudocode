/*
 * XREFs of ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x1800020A0
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F18 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x1800021CC (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180045B18 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::ResourceSetFactory(
        struct ExecutionModel::ExternalResourceSet **a1)
{
  ExecutionModel::ExternalResourceSet *v2; // rax
  struct ExecutionModel::ExternalResourceSet *v3; // rbx
  int v4; // edi

  v2 = (ExecutionModel::ExternalResourceSet *)operator new(0x550uLL);
  if ( v2 )
    v3 = (struct ExecutionModel::ExternalResourceSet *)ExecutionModel::ExternalResourceSet::ExternalResourceSet(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = TpAllocTimer((char *)v3 + 1344, ExecutionModel::ExternalResourceSet::WatchdogTimerCallback, v3, 0LL);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      v3 = 0LL;
      v4 = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    v4 = -1073741801;
  }
  return v4 | 0x10000000u;
}
