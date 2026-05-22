/*
 * XREFs of ?QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065C90
 * Callers:
 *     ?QueryInterface@InputContext@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B20A0 (-QueryInterface@InputContext@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BACD0 (-QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RefCountedObject::QueryInterface(RefCountedObject *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v6; // rax

  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
    return 2147500034LL;
  (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)this + 8LL))(this);
  result = 0LL;
  *a3 = this;
  return result;
}
