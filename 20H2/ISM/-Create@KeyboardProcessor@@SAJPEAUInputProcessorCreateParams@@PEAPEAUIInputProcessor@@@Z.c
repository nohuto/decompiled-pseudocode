/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180023D00
 * Callers:
 *     <none>
 * Callees:
 *     ??0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180023A28 (--0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180023E8C (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  KeyboardProcessor *v4; // rax
  KeyboardProcessor *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (KeyboardProcessor *)RefCountedObject::operator new(0x80uLL);
  if ( v4 )
    v5 = KeyboardProcessor::KeyboardProcessor(v4, *a1, a1[1]);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = *((_QWORD *)v5 + 6);
    if ( v6 )
    {
      *((_QWORD *)v5 + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = KeyboardModifierState::Create((struct KeyboardModifierState **)v5 + 6);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v7,
        v11);
    else
      v8 = 0;
    if ( v8 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    v10 = 71LL;
  }
  else
  {
    v8 = -2147024882;
    v10 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
    (const char *)(unsigned int)v8,
    v11);
  return (unsigned int)v8;
}
