/*
 * XREFs of ?QueryInterface@BamoActivationControllerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019AE0
 * Callers:
 *     ?QueryInterface@BamoActivationControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B610 (-QueryInterface@BamoActivationControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoActivationControllerProxy::QueryInterface(
        BamoActivationControllerProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  char *v5; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_11;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4739ef9b_2c9a_a4ae_1c5a_9cb0b6854bfe.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4739ef9b_2c9a_a4ae_1c5a_9cb0b6854bfe.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4739ef9b_2c9a_a4ae_1c5a_9cb0b6854bfe.Data4;
  if ( v4 )
  {
    v5 = 0LL;
  }
  else
  {
LABEL_11:
    v5 = (char *)this + 8;
    if ( !this )
      v5 = 0LL;
  }
  *a3 = v5;
  if ( !v5 )
    return 2147500034LL;
  (**(void (__fastcall ***)(BamoActivationControllerProxy *))this)(this);
  return 0LL;
}
