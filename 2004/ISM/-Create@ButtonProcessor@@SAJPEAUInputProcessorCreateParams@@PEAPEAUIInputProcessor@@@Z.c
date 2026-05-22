/*
 * XREFs of ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180021E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800222C4 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180023A7C (--0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180028410 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  ButtonProcessor *v4; // rax
  ButtonProcessor *v5; // rdi
  int ChildInputProcessor; // eax
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  HKEY v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-38h]
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (ButtonProcessor *)RefCountedObject::operator new(0x88uLL);
  if ( v4 )
    v5 = ButtonProcessor::ButtonProcessor(v4, *a1, a1[1]);
  else
    v5 = 0LL;
  if ( !v5 )
  {
    v7 = -2147024882;
    v9 = 100LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)v5 + 104);
  ChildInputProcessor = CoreUICreate((char *)v5 + 104);
  v7 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    v10 = 54LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor,
      v13);
    goto LABEL_7;
  }
  *((_WORD *)v5 + 60) = 0;
  if ( IsEdition(0x3DDA1uLL) )
  {
    v11 = (HKEY)*((_QWORD *)v5 + 14);
    if ( v11 )
    {
      *((_QWORD *)v5 + 14) = 0LL;
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)v11 + 16LL))(v11);
    }
    RegistryWatcher::Create(
      v11,
      L"SYSTEM\\INPUT\\BUTTONS",
      v5,
      (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
      (struct RegistryWatcher **)v5 + 14);
    *(_DWORD *)(*((_QWORD *)v5 + 4) + 4LL) |= 4u;
    v14[0] = *((_QWORD *)v5 + 4);
    v14[2] = v5;
    v14[1] = *((_QWORD *)v5 + 3);
    v12 = *((_QWORD *)v5 + 16);
    if ( v12 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    ChildInputProcessor = CreateChildInputProcessor(4LL, v14, (char *)v5 + 128);
    v7 = ChildInputProcessor;
    if ( ChildInputProcessor < 0 )
    {
      v10 = 83LL;
      goto LABEL_14;
    }
  }
  v7 = 0;
LABEL_7:
  if ( v7 >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  v9 = 103LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
    (const char *)(unsigned int)v7,
    v13);
  return (unsigned int)v7;
}
