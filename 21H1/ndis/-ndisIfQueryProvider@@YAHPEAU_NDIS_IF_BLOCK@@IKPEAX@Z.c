/*
 * XREFs of ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C01268B8
 * Callers:
 *     ndisNsiGetInterfaceRosInformation @ 0x1C00F9C30 (ndisNsiGetInterfaceRosInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisIfQueryProvider(struct _NDIS_IF_BLOCK *a1, __int64 a2, unsigned int a3, char *a4)
{
  struct _NDIS_IF_PROVIDER_BLOCK *ProviderHandle; // rax
  void *ProviderIfContext; // rcx
  __int64 (__fastcall *v8)(void *, __int64, unsigned int *); // rax
  unsigned int v9; // esi
  size_t v10; // r8
  char *v11; // rcx
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  ProviderHandle = a1->ProviderHandle;
  ProviderIfContext = a1->ProviderIfContext;
  v8 = (__int64 (__fastcall *)(void *, __int64, unsigned int *))*((_QWORD *)ProviderHandle + 7);
  v13 = a3;
  v9 = v8(ProviderIfContext, a2, &v13);
  if ( v9 )
  {
    v10 = a3;
    v11 = a4;
LABEL_5:
    memset(v11, 0, v10);
    return v9;
  }
  if ( v13 < a3 )
  {
    v11 = &a4[v13];
    v10 = a3 - v13;
    goto LABEL_5;
  }
  return v9;
}
