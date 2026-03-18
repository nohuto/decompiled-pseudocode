/*
 * XREFs of ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C02E688C
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C017C6C0 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C02C184C (-QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentId(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // rax
  ADAPTER_DISPLAY **v5; // rbx
  int LastCompletedPresentId; // edi
  _BYTE v9[144]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 231);
  if ( v5 == *(ADAPTER_DISPLAY ***)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 624) + 8LL) + 480LL))(*((_QWORD *)this + 96));
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)v5, 0LL);
  LastCompletedPresentId = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL);
  if ( LastCompletedPresentId >= 0 )
    LastCompletedPresentId = ADAPTER_DISPLAY::QueryLastCompletedPresentId(v5[349], a2, a3);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
  return (unsigned int)LastCompletedPresentId;
}
