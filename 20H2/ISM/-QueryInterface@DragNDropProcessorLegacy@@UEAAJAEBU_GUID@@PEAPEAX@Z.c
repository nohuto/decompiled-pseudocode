/*
 * XREFs of ?QueryInterface@DragNDropProcessorLegacy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180175AE0
 * Callers:
 *     ?QueryInterface@DragNDropProcessorLegacy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004CD20 (-QueryInterface@DragNDropProcessorLegacy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::QueryInterface(
        DragNDropProcessorLegacy *this,
        const struct _GUID *a2,
        DragNDropProcessorLegacy **a3)
{
  DragNDropProcessorLegacy *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(DragNDropProcessorLegacy *))(*(_QWORD *)this + 8LL))(this);
LABEL_11:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(DragNDropProcessorLegacy *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DragNDropProcessorLegacy *)((char *)v4 + 8);
    goto LABEL_11;
  }
  return 2147500034LL;
}
