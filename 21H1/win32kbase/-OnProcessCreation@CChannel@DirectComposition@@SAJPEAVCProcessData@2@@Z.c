/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0094570
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C00946D4 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rbx
  struct _RTL_GENERIC_TABLE *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  struct _ERESOURCE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  NTSTATUS v10; // esi
  __int64 result; // rax

  v2 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x74634344u);
  v6 = (__int64)v3;
  if ( v3 )
    RtlInitializeGenericTable(
      v3,
      (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
      0LL);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v2 = v7;
    if ( v7 )
      memset(v7, 0, sizeof(struct _ERESOURCE));
    else
      v2 = 0LL;
    if ( v2 )
    {
      v10 = ExInitializeResourceLite(v2);
      if ( v10 >= 0 )
        goto LABEL_8;
    }
    else
    {
      v10 = -1073741801;
    }
    Win32FreePool(v6, v8, v9);
  }
  else
  {
    v10 = -1073741801;
  }
  v6 = 0LL;
  if ( v2 )
  {
    Win32FreePool((__int64)v2, v4, v5);
    v2 = 0LL;
  }
LABEL_8:
  *(_QWORD *)a1 = v6;
  result = (unsigned int)v10;
  *((_QWORD *)a1 + 1) = v2;
  return result;
}
