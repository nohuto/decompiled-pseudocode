/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0060FE0
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0061144 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rbx
  struct _RTL_GENERIC_TABLE *v3; // rax
  __int64 v4; // rdi
  struct _ERESOURCE *v5; // rax
  NTSTATUS v6; // esi
  __int64 result; // rax

  v2 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x74634344u);
  v4 = (__int64)v3;
  if ( v3 )
    RtlInitializeGenericTable(
      v3,
      DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
      DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
      0LL);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v2 = v5;
    if ( v5 )
      memset(v5, 0, sizeof(struct _ERESOURCE));
    else
      v2 = 0LL;
    if ( v2 )
    {
      v6 = ExInitializeResourceLite(v2);
      if ( v6 >= 0 )
        goto LABEL_8;
    }
    else
    {
      v6 = -1073741801;
    }
    Win32FreePool(v4);
  }
  else
  {
    v6 = -1073741801;
  }
  v4 = 0LL;
  if ( v2 )
  {
    Win32FreePool((__int64)v2);
    v2 = 0LL;
  }
LABEL_8:
  *(_QWORD *)a1 = v4;
  result = (unsigned int)v6;
  *((_QWORD *)a1 + 1) = v2;
  return result;
}
