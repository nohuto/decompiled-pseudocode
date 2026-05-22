/*
 * XREFs of ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x18015F0EC
 * Callers:
 *     ?HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@PEAX@Z @ 0x18015F510 (-HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV-$map@PEAVV2PropertyReques.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1801647C8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18015545C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?GetHeaderRef@V2PropertyRequest@Holographic@Internal@Windows@@IEBAAEBUHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@XZ @ 0x18015CCE4 (-GetHeaderRef@V2PropertyRequest@Holographic@Internal@Windows@@IEBAAEBUHOLOGRAPHIC_DEVICE_PROPERT.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1801602E0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1801647C8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        unsigned __int64 a3,
        const char *a4)
{
  int v5; // esi
  __int64 *v7; // r14
  const struct HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2 *HeaderRef; // rbp
  unsigned __int64 v9; // rcx
  const char *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD); // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  void (__fastcall **v21)(Windows::Internal::Holographic::V2PropertyRequest *, _QWORD); // rax
  char *v22; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
  if ( (int)a2 < 0 )
    goto LABEL_40;
  if ( a3 < 0xC )
    v5 = wil::details::in1diag3::Log_HrMsg(
           retaddr,
           (void *)0x90,
           (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
           (const char *)0x8007000DLL,
           (int)"driver did not supply enough data for a complete header",
           v22);
  if ( v5 < 0 )
    goto LABEL_40;
  v7 = (__int64 *)((char *)this + 80);
  if ( a3 > *((_QWORD *)this + 11) - *((_QWORD *)this + 10) )
    v5 = wil::details::in1diag3::Log_HrMsg(
           retaddr,
           (void *)0x97,
           (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
           (const char *)0x8000FFFFLL,
           (int)"driver said it returned more data than the size of the output buffer",
           v22);
  if ( v5 < 0 )
    goto LABEL_40;
  HeaderRef = Windows::Internal::Holographic::V2PropertyRequest::GetHeaderRef(this, a2, a3, a4);
  v9 = *(unsigned int *)HeaderRef + 12LL;
  if ( a3 > v9 )
  {
    v10 = "driver returned more data than expected for header + value";
    v11 = 2147942413LL;
    v12 = 164LL;
LABEL_27:
    v13 = wil::details::in1diag3::Log_HrMsg(
            retaddr,
            (void *)v12,
            (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
            (const char *)v11,
            (int)v10,
            v22);
    goto LABEL_28;
  }
  if ( a3 >= v9 )
  {
    if ( *(_QWORD *)((char *)HeaderRef + 4) != **((_QWORD **)this + 9) )
      goto LABEL_29;
    v10 = "driver returned same ChangeId as input";
    v12 = 206LL;
    goto LABEL_26;
  }
  if ( a3 != 12 )
  {
    v10 = "driver returned more than header, but less than header + value";
    v11 = 2147942413LL;
    v12 = 173LL;
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 30) >= 0xAu )
  {
    LODWORD(v22) = 10;
    v13 = wil::details::in1diag3::Log_HrMsg(
            retaddr,
            (void *)0xB3,
            (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
            (const char *)0x8000FFFFLL,
            (int)"driver returned increasing value size >= %u times in a row",
            v22);
LABEL_28:
    v5 = v13;
LABEL_29:
    if ( v5 >= 0 )
    {
      v17 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)this + 14);
      if ( v17 )
        v5 = v17(*v7 + 12, *(unsigned int *)HeaderRef);
      if ( v5 >= 0 )
      {
        v18 = *v7;
        v19 = *((_QWORD *)this + 11) - *((_QWORD *)this + 10);
        if ( a3 >= v19 )
        {
          if ( a3 > v19 )
          {
            if ( a3 <= *((_QWORD *)this + 12) - v18 )
            {
              v20 = v18 + a3;
              memset_0(*((void **)this + 11), 0, v20 - *((_QWORD *)this + 11));
              *((_QWORD *)this + 11) = v20;
            }
            else
            {
              std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)this + 80, a3);
            }
          }
        }
        else
        {
          *((_QWORD *)this + 11) = v18 + a3;
        }
        **((_QWORD **)this + 9) = *(_QWORD *)((char *)HeaderRef + 4);
      }
    }
LABEL_40:
    v21 = *(void (__fastcall ***)(Windows::Internal::Holographic::V2PropertyRequest *, _QWORD))this;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 26) = v5;
    (*v21)(this, (unsigned int)v5);
    return;
  }
  v14 = *v7;
  v15 = *((_QWORD *)this + 11) - *((_QWORD *)this + 10);
  if ( v9 == v15 )
  {
    v10 = "driver returned only property header, even though output buffer was big enough for full value";
    v12 = 186LL;
LABEL_26:
    v11 = 2147549183LL;
    goto LABEL_27;
  }
  if ( v9 >= v15 )
  {
    if ( v9 > v15 )
    {
      if ( v9 <= *((_QWORD *)this + 12) - v14 )
      {
        v16 = v14 + v9;
        memset_0(*((void **)this + 11), 0, v14 + v9 - *((_QWORD *)this + 11));
        *((_QWORD *)this + 11) = v16;
      }
      else
      {
        std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)this + 80, v9);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 11) = v14 + v9;
  }
  *((_DWORD *)this + 26) = 0;
  ++*((_DWORD *)this + 30);
  Windows::Internal::Holographic::V2PropertyRequest::StartIo(this);
}
