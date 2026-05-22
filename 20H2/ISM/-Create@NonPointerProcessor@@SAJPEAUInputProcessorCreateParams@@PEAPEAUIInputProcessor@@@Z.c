/*
 * XREFs of ?Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180136420
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPointerDevice@@YAHPEBUDeviceInfo@@@Z @ 0x180148F4C (-IsPointerDevice@@YAHPEBUDeviceInfo@@@Z.c)
 */

__int64 __fastcall NonPointerProcessor::Create(const struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v7; // rax
  const struct DeviceInfo *v8; // rdx
  const struct DeviceInfo *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)IsPointerDevice(*a1) )
  {
    v4 = -2147024809;
    v5 = 33LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = RefCountedObject::operator new(0x48uLL);
  if ( !v7 )
  {
    v4 = -2147024882;
    v5 = 40LL;
    goto LABEL_3;
  }
  v8 = a1[1];
  v9 = *a1;
  v7[6] = 0LL;
  v7[7] = 0LL;
  v7[2] = &RefCountedObject::`vftable';
  *v7 = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  v7[1] = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
  v7[2] = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_DWORD *)v7 + 6) = 1;
  *((_BYTE *)v7 + 64) = 0;
  v7[5] = v9;
  v7[4] = v8;
  *a2 = (struct IInputProcessor *)v7;
  return 0LL;
}
