/*
 * XREFs of ?QueryInterface@TouchProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801994D0
 * Callers:
 *     ?QueryInterface@TouchProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D340 (-QueryInterface@TouchProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TouchProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D350 (-QueryInterface@TouchProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::QueryInterface(TouchProcessor *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  void *v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    *a3 = 0LL;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      v5 = (void *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
      *a3 = v5;
      if ( v5 )
        (*(void (__fastcall **)(TouchProcessor *))(*(_QWORD *)this + 8LL))(this);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
