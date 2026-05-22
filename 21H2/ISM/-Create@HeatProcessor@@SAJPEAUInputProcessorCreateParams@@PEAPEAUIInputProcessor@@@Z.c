/*
 * XREFs of ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801896D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801897E4 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 */

__int64 __fastcall HeatProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RefCountedObject::operator new(0x68uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = *(_QWORD *)a1;
    v4[7] = 0LL;
    v4[8] = 0LL;
    v4[3] = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 8) = 1;
    *((_BYTE *)v4 + 72) = 0;
    v4[6] = v7;
    v4[5] = v6;
    v4[10] = 0LL;
    *v4 = &HeatProcessor::`vftable';
    v4[1] = &HeatProcessor::`vftable'{for `IInputProcessor'};
    v4[2] = &HeatProcessor::`vftable'{for `IInputFocusListener'};
    v4[3] = &HeatProcessor::`vftable'{for `RefCountedObject'};
    v4[11] = 0LL;
    v4[12] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v9 = HeatProcessor::Initialize(
           (HeatProcessor *)v5,
           *(struct DeviceInfo **)a1,
           *((struct IInputProcessorHost **)a1 + 1));
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a2 = (struct IInputProcessor *)(v5 + 1);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
