/*
 * XREFs of SmpKeyedStoreCreate @ 0x1406559F4
 * Callers:
 *     SmProcessCreateNotification @ 0x1406F6BB4 (SmProcessCreateNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x140239CC0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 *     SSHSupportAllocateNonPaged @ 0x1402CBBF8 (SSHSupportAllocateNonPaged.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14030DF18 (SmKmStoreDeleteWhenEmpty.c)
 *     SmpDirtyStoreCreate @ 0x1406558E8 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, __int64 a2, LUID a3)
{
  int v3; // eax
  struct _PRIVILEGE_SET *v5; // rbx
  int v8; // edi
  struct _PRIVILEGE_SET *NonPaged; // rax
  int v10; // esi
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)&a3 + 2172LL);
  v16 = -1;
  v5 = 0LL;
  v8 = SmpDirtyStoreCreate(a2, (v3 & 1) != 0 ? 2048 : 512, 1, &v16);
  if ( v8 < 0 )
    goto LABEL_11;
  NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged(0x30uLL, 0x53506D73u);
  v5 = NonPaged;
  if ( !NonPaged )
  {
    v8 = -1073741670;
LABEL_11:
    v10 = v16;
    goto LABEL_5;
  }
  *(_OWORD *)&NonPaged->PrivilegeCount = 0LL;
  *(_OWORD *)&NonPaged->Privilege[0].Attributes = 0LL;
  *(_OWORD *)&NonPaged[1].Privilege[0].Luid.HighPart = 0LL;
  NonPaged->Privilege[0].Luid = a3;
  v10 = v16;
  LOWORD(NonPaged->Privilege[0].Attributes) = v16;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, &NonPaged->Privilege[0].Luid, 1, 0) )
  {
    v10 = -1;
    v5 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_5:
  if ( v10 != -1 )
  {
    v12 = v10 & 0x3FF;
    v13 = (__int64 *)SmKmStoreRefFromStoreIndex(a2, v12);
    SmKmStoreDeleteWhenEmpty(v14, *v13);
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, v12);
    ExReleaseRundownProtection_0(v15 + 1);
  }
  if ( v5 )
    CmSiFreeMemory(v5);
  return (unsigned int)v8;
}
