/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x180053244
 * Callers:
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180049D5C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C3570 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CGeometryOnlyDrawListBrush *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 200);
}
