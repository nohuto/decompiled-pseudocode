/*
 * XREFs of ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x180188E00
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::SupportedInputUpdated(GazeProcessor *this, struct IDWMSupportedInputTarget *a2)
{
  int v4; // eax
  __int64 v5; // rsi
  struct IDWMSupportedInputTarget **i; // rcx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  size_t size_of; // rax
  _QWORD *v11; // rax
  int v13; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, int *))(*(_QWORD *)a2 + 40LL))(a2, &v13);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      349LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = *((_QWORD *)this + 42);
  for ( i = *(struct IDWMSupportedInputTarget ***)v5;
        i != (struct IDWMSupportedInputTarget **)v5;
        i = (struct IDWMSupportedInputTarget **)*i )
  {
    if ( i[2] == a2 )
    {
      if ( (v13 & 0x4000) == 0 )
      {
        *(_QWORD *)i[1] = *i;
        *((_QWORD *)*i + 1) = i[1];
        --*((_QWORD *)this + 43);
        std::_Deallocate<16,0>(i, (const struct std::nothrow_t *)0x18);
        if ( !*((_QWORD *)this + 43) )
        {
          v14 = 0LL;
          LODWORD(v14) = 3;
          DWORD2(v14) = 0;
          v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 5) + 72LL))(
                 *((_QWORD *)this + 5),
                 **((unsigned int **)this + 6),
                 &v14);
          if ( v7 < 0 )
          {
            v8 = 380LL;
LABEL_17:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              v8,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
              (const char *)(unsigned int)v7);
            return 0LL;
          }
        }
      }
      return 0LL;
    }
  }
  if ( (v13 & 0x4000) != 0 )
  {
    if ( *((_QWORD *)this + 43) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list<T> too long");
    v9 = *(_QWORD **)(v5 + 8);
    v14 = (unsigned __int64)this + 336;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v11[2] = a2;
    *v11 = v5;
    v11[1] = v9;
    ++*((_QWORD *)this + 43);
    *(_QWORD *)(v5 + 8) = v11;
    *v9 = v11;
    if ( *((_QWORD *)this + 43) == 1LL )
    {
      v14 = 0LL;
      LODWORD(v14) = 3;
      DWORD2(v14) = 1;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 5) + 72LL))(
             *((_QWORD *)this + 5),
             **((unsigned int **)this + 6),
             &v14);
      if ( v7 < 0 )
      {
        v8 = 366LL;
        goto LABEL_17;
      }
    }
  }
  return 0LL;
}
