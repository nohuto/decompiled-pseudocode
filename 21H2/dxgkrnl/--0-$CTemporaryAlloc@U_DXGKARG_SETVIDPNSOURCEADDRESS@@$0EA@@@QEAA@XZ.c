/*
 * XREFs of ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x1C0021C60
 * Callers:
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C5840 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

_QWORD *__fastcall CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v5; // rax
  void *v6; // rbx

  v5 = (void *)operator new[](0x840uLL, 0x4B677844u, 64LL, a4);
  v6 = v5;
  if ( v5 )
    memset(v5, 0, 0x840uLL);
  else
    v6 = 0LL;
  *a1 = v6;
  return a1;
}
