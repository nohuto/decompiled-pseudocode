/*
 * XREFs of ?Initialize@CCompositor@@IEAAJPEAUHMIL_CONNECTION__@@@Z @ 0x18004A12C
 * Callers:
 *     ?Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z @ 0x18004A07C (-Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::Initialize(CCompositor *this, struct HMIL_CONNECTION__ *a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx
  int Device3; // eax
  __int64 v7; // rdx
  struct IDwmChannel *v8; // rcx
  struct IDwmChannel *v9; // rax
  struct IDwmChannel *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = MilConnection_CreateChannel(a2, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x32u);
LABEL_14:
    v8 = v11;
    goto LABEL_8;
  }
  v5 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Device3 = DCompositionCreateDevice3(0LL, &GUID_cb139649_6d80_48e7_b54d_09737d84db47, (char *)this + 24);
  v4 = Device3;
  if ( Device3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Device3, 0x34u);
    goto LABEL_14;
  }
  v7 = *((_QWORD *)this + 2);
  v8 = 0LL;
  v9 = v11;
  v11 = 0LL;
  *((_QWORD *)this + 2) = v9;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v11;
  }
  v4 = 0;
LABEL_8:
  if ( v4 < 0 )
  {
    if ( !v8 )
      return (unsigned int)v4;
    (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v8 + 40LL))(v8);
    v8 = v11;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v4;
}
