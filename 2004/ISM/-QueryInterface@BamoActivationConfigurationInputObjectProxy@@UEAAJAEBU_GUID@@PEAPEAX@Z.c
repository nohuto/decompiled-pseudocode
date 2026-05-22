/*
 * XREFs of ?QueryInterface@BamoActivationConfigurationInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019990
 * Callers:
 *     ?QueryInterface@BamoActivationConfigurationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B210 (-QueryInterface@BamoActivationConfigurationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoActivationConfigurationInputObjectProxy::QueryInterface(
        BamoActivationConfigurationInputObjectProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  char *v5; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4753c172_9138_4064_8603_1556e98a010f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4753c172_9138_4064_8603_1556e98a010f.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4753c172_9138_4064_8603_1556e98a010f.Data4;
    if ( v4 )
      goto LABEL_7;
  }
  if ( !this )
LABEL_7:
    v5 = 0LL;
  else
    v5 = (char *)this + 8;
  *a3 = v5;
  if ( !v5 )
    return 2147500034LL;
  (**(void (__fastcall ***)(BamoActivationConfigurationInputObjectProxy *))this)(this);
  return 0LL;
}
