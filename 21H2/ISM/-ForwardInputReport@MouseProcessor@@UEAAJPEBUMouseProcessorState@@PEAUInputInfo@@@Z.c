/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180135C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800234E8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180121230 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180136150 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        const char *a4)
{
  char v6; // bp
  int v7; // esi
  char v8; // al
  int v9; // eax
  int v10; // eax
  struct InputInfo *v11; // rdx
  int v12; // eax
  const struct std::nothrow_t *v13; // rdx
  unsigned int v14; // esi
  const struct std::nothrow_t *v15; // rdx
  int v17; // ebx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct InputInfo *v20; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 120) )
  {
    if ( *((_DWORD *)a3 + 29) )
    {
      *((_DWORD *)a3 + 29) = 2 - (*((_BYTE *)a3 + 121) != 0);
    }
    else
    {
      v17 = MouseProcessor::SynthesizeMouseInput(a3);
      if ( v17 < 0 )
      {
        v18 = 322LL;
        goto LABEL_21;
      }
    }
    return 0LL;
  }
  v6 = 1;
  v7 = 0;
  v8 = *((_BYTE *)this + 121);
  if ( (*((_BYTE *)this + 96) & 0x10) != 0 )
  {
    if ( v8 )
    {
      v7 = 155670;
    }
    else
    {
      v7 = 90134;
      *((_BYTE *)this + 121) = 1;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 211) + 80LL))(
           *((_QWORD *)this + 211),
           0LL,
           166666LL);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        257LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
  else if ( v8 )
  {
    v7 = 286720;
    *((_BYTE *)this + 121) = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *))(**((_QWORD **)this + 211) + 96LL))(
            *((_QWORD *)this + 211),
            a2);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        268LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)a3 + 29) = 4;
  if ( !v6 )
  {
LABEL_19:
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 24LL))(
            *((_QWORD *)this + 13),
            *((unsigned int *)a3 + 25),
            *((unsigned int *)a3 + 26));
    if ( v17 < 0 )
    {
      v18 = 307LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v17);
      return (unsigned int)v17;
    }
    return 0LL;
  }
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (void **)&v20,
    0x168uLL,
    (__int64)a3,
    a4);
  v11 = v20;
  *(_DWORD *)v20 = 8;
  *((_DWORD *)v11 + 2) = *((_DWORD *)a3 + 2);
  *((_QWORD *)v11 + 2) = *((_QWORD *)a3 + 2);
  *((_DWORD *)v11 + 53) = 1;
  *((_DWORD *)v11 + 54) = 2;
  *((_DWORD *)v11 + 55) = 2;
  *((_DWORD *)v11 + 57) = v7;
  *((_DWORD *)v11 + 62) = *((_DWORD *)a3 + 25);
  *((_DWORD *)v11 + 63) = *((_DWORD *)a3 + 26);
  *((_QWORD *)v11 + 33) = *((_QWORD *)v11 + 31);
  *((_DWORD *)v11 + 70) = *((_DWORD *)v11 + 2);
  *((_QWORD *)v11 + 37) = *((_QWORD *)v11 + 2);
  v12 = (unsigned int)InjectionDevice::Inject((MouseProcessor *)((char *)this + 128), v11);
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( v20 )
      operator delete(v20, v13);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12D,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
    (const char *)(unsigned int)v12);
  if ( v20 )
    operator delete(v20, v15);
  return v14;
}
