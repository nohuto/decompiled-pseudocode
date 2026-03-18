/*
 * XREFs of ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C001A53C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C03649C8 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001A56C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall DXGADAPTER::GetDeviceDescriptor(DXGADAPTER *this, unsigned int a2, unsigned __int16 *a3)
{
  const unsigned __int16 *v4; // r8

  v4 = (const unsigned __int16 *)*((_QWORD *)this + 201);
  if ( v4 )
  {
    RtlStringCbCopyW(a3, a2, v4);
  }
  else if ( a2 >= 2 )
  {
    if ( a3 )
      *a3 = 0;
  }
}
