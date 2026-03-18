/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C001A858
 * Callers:
 *     RIMGetKbdExId @ 0x1C001A61C (RIMGetKbdExId.c)
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 *     RIMVirtCreateDev @ 0x1C0153148 (RIMVirtCreateDev.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0163668 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016E8B8 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C016F730 (rimDoVirtRimDevChange.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B8BCC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B8E6C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rbp
  const wchar_t *v12; // rbx
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // rdx
  const wchar_t *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-18h]
  __int64 v23; // [rsp+58h] [rbp-10h]
  __int64 v24; // [rsp+70h] [rbp+8h]

  v24 = a1;
  v6 = -1LL;
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = 10LL;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      v18,
      v17,
      0LL);
    a1 = v24;
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v10 = 2 * v6 + 2;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v12 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v19, v12, v10, 0LL, v20, v21, v22, v23);
}
