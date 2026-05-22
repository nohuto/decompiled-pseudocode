/*
 * XREFs of ?QueryInterface@ContextualProcessorBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019950
 * Callers:
 *     ?QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C7F0 (-QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C800 (-QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C810 (-QueryInterface@ContextualProcessorBuffer@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C820 (-QueryInterface@ContextualProcessorBuffer@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::QueryInterface(
        ContextualProcessorBuffer *this,
        const struct _GUID *a2,
        ContextualProcessorBuffer **a3)
{
  ContextualProcessorBuffer *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( !v5 )
      goto LABEL_5;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data4;
    if ( !v7 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v4 = (ContextualProcessorBuffer *)((char *)v4 + 16);
      goto LABEL_6;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
    if ( !v8 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      goto LABEL_6;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4;
    if ( !v9 )
    {
LABEL_5:
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v4 = (ContextualProcessorBuffer *)((char *)v4 + 8);
LABEL_6:
      *a3 = v4;
      return 0LL;
    }
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_44a1acf6_adc3_4f86_a1fa_2611c6340bc9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_44a1acf6_adc3_4f86_a1fa_2611c6340bc9.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_44a1acf6_adc3_4f86_a1fa_2611c6340bc9.Data4;
    if ( !v10 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v4 = (ContextualProcessorBuffer *)((char *)v4 + 24);
      goto LABEL_6;
    }
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v11 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v4 = (ContextualProcessorBuffer *)((char *)v4 + 32);
      goto LABEL_6;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)0x80070057LL,
      v12);
    return 2147942487LL;
  }
}
