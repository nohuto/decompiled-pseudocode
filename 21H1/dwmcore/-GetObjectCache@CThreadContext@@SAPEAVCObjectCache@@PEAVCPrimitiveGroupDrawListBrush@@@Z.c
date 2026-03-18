/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180013618
 * Callers:
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x1800134C0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x180013534 (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEA.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18004C550 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CPrimitiveGroupDrawListBrush *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 232);
}
