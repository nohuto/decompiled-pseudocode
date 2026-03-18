/*
 * XREFs of ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x18023FE60
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EB6DC (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801F56DC (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800546C4 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::EnqueueSetEvent(CD3DDevice *this, void *a2)
{
  int v3; // ebx
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *((_DWORD *)this + 282);
  if ( v3 < 0 )
  {
    v6 = *((_DWORD *)this + 282);
    v9 = 3862;
    goto LABEL_8;
  }
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 73))(
         *((_QWORD *)this + 73),
         &GUID_05008617_fbfd_4051_a790_144884b4f6a9,
         &v10);
  v3 = v5;
  if ( v5 < 0 )
  {
    v9 = 3864;
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 128LL))(v10, a2);
  v3 = v5;
  if ( v5 < 0 )
  {
    v9 = 3866;
LABEL_5:
    v6 = v5;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v6, v9, 0LL);
  }
  v7 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v3, 0);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v10);
  return v7;
}
