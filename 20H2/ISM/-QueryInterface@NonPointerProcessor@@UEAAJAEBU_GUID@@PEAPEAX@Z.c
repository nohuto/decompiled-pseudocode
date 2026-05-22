/*
 * XREFs of ?QueryInterface@NonPointerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019330
 * Callers:
 *     ?QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C350 (-QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@NonPointerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C360 (-QueryInterface@NonPointerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180121580 (-QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonPointerProcessor::QueryInterface(NonPointerProcessor *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(NonPointerProcessor *))(*(_QWORD *)this + 8LL))(this);
      v7 = 16LL;
      goto LABEL_9;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(NonPointerProcessor *))(*(_QWORD *)this + 8LL))(this);
      v7 = 8LL;
LABEL_9:
      *a3 = (char *)this + v7;
      return 0LL;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)0x80070057LL,
      v9);
    return 2147942487LL;
  }
}
