/*
 * XREFs of ?QueryInterface@CProtectedOutputController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140048910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProtectedOutputController::QueryInterface(
        CProtectedOutputController *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  void (__fastcall *v6)(CProtectedOutputController *, const struct _GUID *, void **, CProtectedOutputController *); // rax
  __int64 v7; // rax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147467262;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data4;
  if ( v5 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v7 )
      return v4;
    *a3 = this;
    v6 = *(void (__fastcall **)(CProtectedOutputController *, const struct _GUID *, void **, CProtectedOutputController *))(*(_QWORD *)this + 8LL);
  }
  else
  {
    *a3 = this;
    v6 = *(void (__fastcall **)(CProtectedOutputController *, const struct _GUID *, void **, CProtectedOutputController *))(*(_QWORD *)this + 8LL);
  }
  v4 = 0;
  v6(this, a2, a3, this);
  return v4;
}
