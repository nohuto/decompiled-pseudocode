/*
 * XREFs of SmProcessDeleteNotification @ 0x14092649C
 * Callers:
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x1402CCAF0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1402D0BD0 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14034B3F8 (SmKmStoreDeleteWhenEmpty.c)
 */

void __fastcall SmProcessDeleteNotification(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // bx
  unsigned int v3; // ebx
  __int64 *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, &v6, 2, 0);
  if ( v1 )
  {
    v2 = *(_WORD *)(v1 + 16);
    CmSiFreeMemory((PPRIVILEGE_SET)v1);
    v3 = v2 & 0x3FF;
    v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    SmKmStoreDeleteWhenEmpty((__int64)&SmGlobals, *v4);
    v5 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    ExReleaseRundownProtection_0(v5 + 1);
  }
}
