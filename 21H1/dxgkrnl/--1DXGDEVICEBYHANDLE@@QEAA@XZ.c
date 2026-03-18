/*
 * XREFs of ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C003C8E0
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C0284230 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE(DXGDEVICEBYHANDLE *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v1 + 16), (struct DXGDEVICE *)v1);
  }
}
