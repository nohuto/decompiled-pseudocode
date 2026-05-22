/*
 * XREFs of ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801998BC
 * Callers:
 *     ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x18019955C (--$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@W.c)
 * Callees:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180028410 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::RuntimeClassInitialize(
        PTPProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int ChildInputProcessor; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 4) = a2;
  v3 = (_QWORD *)((char *)this + 16);
  *((_QWORD *)this + 5) = a3;
  *((_DWORD *)a2 + 1) |= 6u;
  v10[2] = this;
  v5 = *((_QWORD *)this + 2);
  v10[0] = a2;
  v10[1] = a3;
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  ChildInputProcessor = CreateChildInputProcessor(2, (__int64)v10, (__int64)v3);
  if ( ChildInputProcessor < 0 )
  {
    v7 = 55LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    return (unsigned int)ChildInputProcessor;
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ChildInputProcessor = CreateChildInputProcessor(4, (__int64)v10, (__int64)this + 24);
  if ( ChildInputProcessor < 0 )
  {
    v7 = 60LL;
    goto LABEL_5;
  }
  return 0LL;
}
