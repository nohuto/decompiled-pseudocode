/*
 * XREFs of SmProcessDeleteNotification @ 0x1409251EC
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x140239CC0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14030DF18 (SmKmStoreDeleteWhenEmpty.c)
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
