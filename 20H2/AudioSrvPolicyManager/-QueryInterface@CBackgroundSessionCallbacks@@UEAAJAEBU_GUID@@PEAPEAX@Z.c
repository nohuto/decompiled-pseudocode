/*
 * XREFs of ?QueryInterface@CBackgroundSessionCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017710
 * Callers:
 *     ?QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800197A0 (-QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBackgroundSessionCallbacks::QueryInterface(
        CBackgroundSessionCallbacks *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data4 )
    {
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
      v4 = *(_QWORD *)this;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      *a3 = this;
      v4 = *(_QWORD *)this;
    }
    (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(v4 + 8))(this);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
