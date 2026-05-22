/*
 * XREFs of ?QueryInterface@OneCoreUAPInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A490
 * Callers:
 *     ?QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A6A0 (-QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A6B0 (-QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::QueryInterface(
        OneCoreUAPInputHost *this,
        const struct _GUID *a2,
        OneCoreUAPInputHost **a3)
{
  OneCoreUAPInputHost *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
      v4 = (OneCoreUAPInputHost *)((char *)v4 + 16);
      goto LABEL_9;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
LABEL_9:
      *a3 = v4;
      return 0LL;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
    if ( !v8 )
    {
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
      v4 = (OneCoreUAPInputHost *)((char *)v4 + 8);
      goto LABEL_9;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)0x80070057LL,
      v9);
    return 2147942487LL;
  }
}
