/*
 * XREFs of ?QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@@Z @ 0x18009AD28
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180081CF0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008AC90 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18009A7BC (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBatch::QueueForRender(CDrawListEntryBatch *this, struct IDeviceTarget *a2)
{
  int v4; // ecx
  char *v5; // rcx
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  _DWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-30h] BYREF

  v4 = *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))((char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 12LL) + 8))(
                     (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 12LL) + 8,
                     v10)
                 + 8);
  *((_DWORD *)this + 18) = v4;
  if ( v4 == 1 )
    *((_DWORD *)this + 19) = *(_DWORD *)((**(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a2)(a2, v10) + 16);
  v5 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, _DWORD *))v5)(v5, v9);
  v6 = v9[0];
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = -1082130432;
  v7 = (float)v6;
  v8 = v9[1];
  *((_DWORD *)this + 17) = 1065353216;
  *((float *)this + 14) = 2.0 / v7;
  *((float *)this + 15) = -2.0 / (float)v8;
}
