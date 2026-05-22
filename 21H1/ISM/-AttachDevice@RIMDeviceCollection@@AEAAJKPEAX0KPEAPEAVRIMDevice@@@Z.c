/*
 * XREFs of ?AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z @ 0x180038654
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x1800385D0 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C80 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::AttachDevice(
        RIMDeviceCollection *this,
        __int64 a2,
        void *a3,
        void *a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebp
  int Device; // ebx
  struct RIMDevice **v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  struct RIMDevice *v17; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct RIMDevice *v22; // [rsp+60h] [rbp+8h] BYREF

  v9 = (*(__int64 (__fastcall **)(RIMDeviceCollection *))(*(_QWORD *)this + 104LL))(this);
  v10 = *(_QWORD *)this;
  v11 = v9;
  a6 = 0LL;
  v22 = 0LL;
  Device = (*(__int64 (__fastcall **)(RIMDeviceCollection *, void *, void *, _QWORD, unsigned int, struct RIMDevice ***))(v10 + 88))(
             this,
             a3,
             a4,
             a5,
             v9,
             &a6);
  if ( Device < 0 )
  {
    v19 = 1044LL;
    goto LABEL_27;
  }
  v13 = a6;
  if ( *((_DWORD *)this + 668) >= 0x100u )
  {
    Device = -2147024882;
    v20 = 975LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Device);
LABEL_20:
    v19 = 1046LL;
    goto LABEL_27;
  }
  Device = RIMDeviceCollection::FindDevice(this, 0, a6[2], 0LL, 0LL);
  if ( Device != -2147023728 )
  {
    Device = -2147024883;
    v20 = 983LL;
    goto LABEL_19;
  }
  v15 = 0LL;
  v16 = (_QWORD *)((char *)this + 624);
  while ( *v16 != v14 )
  {
    v15 = (unsigned int)(v15 + 1);
    ++v16;
    if ( (unsigned int)v15 >= 0x100 )
      goto LABEL_7;
  }
  *((_QWORD *)this + v15 + 78) = v13;
  ++*((_DWORD *)this + 668);
  Device = 0;
LABEL_7:
  if ( Device < 0 )
    goto LABEL_20;
  Device = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD, struct RIMDevice **))(*(_QWORD *)this + 64LL))(
             this,
             v11,
             &v22);
  if ( Device < 0 )
  {
    v19 = 1053LL;
  }
  else
  {
    v17 = v22;
    if ( v22 && *((_DWORD *)v22 + 1) )
    {
      *(_DWORD *)v22 = v11;
      NtRIMGetSourceProcessId(a3, a4, (char *)v17 + 16);
      if ( *(_DWORD *)v22 == *((_DWORD *)a6 + 10) && *((_DWORD *)v22 + 1) )
      {
        a6[4] = v22;
        if ( (*((_DWORD *)v22 + 1) & 0xFFFFFEFF) == 0 )
          return 0LL;
        Device = (*(__int64 (__fastcall **)(_QWORD, struct RIMDevice *, _QWORD))(**((_QWORD **)this + 2) + 40LL))(
                   *((_QWORD *)this + 2),
                   v22,
                   *((_QWORD *)this + 3));
        if ( Device >= 0 )
          return 0LL;
        v19 = 1089LL;
      }
      else
      {
        Device = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevice.cpp",
          (const char *)0x80070057LL);
        v19 = 1068LL;
      }
    }
    else
    {
      Device = -2147418113;
      v19 = 1063LL;
    }
  }
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)Device);
  return (unsigned int)Device;
}
