/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C012EB98
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C012E9A0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004354C (-InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::DXGDEVICE(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        char a9)
{
  int v11; // eax
  char v13; // cl
  char v14; // dl
  __int64 v15; // rdx
  DXGADAPTER *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  DXGK_VIRTUAL_GPU_PARAV *v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 40) = a6;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v11 = 36;
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 10;
  *(_DWORD *)(a1 + 104) = -1;
  *(_QWORD *)(a1 + 112) = a3;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 56;
  if ( a7 != 2 )
    v11 = 41;
  *(_DWORD *)(a1 + 164) = v11;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 1;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 53;
  *(_DWORD *)(a1 + 232) = 41;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 53;
  *(_DWORD *)(a1 + 264) = 55;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 6;
  *(_DWORD *)(a1 + 296) = -1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 324) = 1;
  *(_DWORD *)(a1 + 328) = 57;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 356) = 1;
  *(_DWORD *)(a1 + 360) = 58;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 1;
  *(_DWORD *)(a1 + 392) = -1;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_DWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 420) = 1;
  *(_DWORD *)(a1 + 424) = -1;
  *(_DWORD *)(a1 + 456) = a5;
  *(_DWORD *)(a1 + 432) = a7;
  *(_QWORD *)(a1 + 436) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 472) = a1 + 464;
  *(_QWORD *)(a1 + 464) = a1 + 464;
  *(_QWORD *)(a1 + 488) = a1 + 480;
  *(_QWORD *)(a1 + 480) = a1 + 480;
  *(_QWORD *)(a1 + 504) = a1 + 496;
  *(_QWORD *)(a1 + 496) = a1 + 496;
  *(_QWORD *)(a1 + 520) = a1 + 512;
  *(_QWORD *)(a1 + 512) = a1 + 512;
  *(_QWORD *)(a1 + 536) = a1 + 528;
  *(_QWORD *)(a1 + 528) = a1 + 528;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 564) = 1;
  *(_DWORD *)(a1 + 568) = -1;
  *(_DWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_DWORD *)(a1 + 796) = 53;
  *(_DWORD *)(a1 + 792) = 0;
  *(_DWORD *)(a1 + 800) = -1;
  *(_QWORD *)(a1 + 1848) = a8;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0x1000000;
  *(_BYTE *)(a1 + 1869) ^= (*(_BYTE *)(a1 + 1869) ^ *(_BYTE *)(*(_QWORD *)(a2 + 16) + 209LL)) & 1;
  v13 = *(_BYTE *)(a1 + 1869) & 0xF1;
  v14 = (8 * (a9 & 1)) | (*(_BYTE *)(a6 + 347) >> 4) & 2;
  *(_WORD *)(a1 + 1870) = 0;
  *(_DWORD *)(a1 + 1872) = 0;
  *(_BYTE *)(a1 + 1869) = v13 | v14;
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1896) = 1LL;
  *(_WORD *)(a1 + 1904) = 0;
  *(_BYTE *)(a1 + 1906) = 0;
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_OWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  memset((void *)(a1 + 632), 0, 0x80uLL);
  *(_OWORD *)(a1 + 616) = 0LL;
  memset((void *)(a1 + 824), 0, 0x80uLL);
  memset((void *)(a1 + 952), 0, 0x240uLL);
  *(_OWORD *)(a1 + 120) = 0LL;
  memset((void *)(a1 + 1528), 0, 0x140uLL);
  if ( (*(_BYTE *)(a1 + 1869) & 1) == 0 && a4 )
  {
    *(_QWORD *)(a1 + 448) = *a4;
    *a4 = 0LL;
  }
  *(_QWORD *)(a1 + 816) = a1 + 808;
  *(_QWORD *)(a1 + 808) = a1 + 808;
  v16 = *(DXGADAPTER **)(a1 + 1848);
  if ( v16 || (v16 = *(DXGADAPTER **)(a2 + 16), *((_QWORD *)v16 + 337)) && (*(_QWORD *)(a1 + 1848) = v16) != 0LL )
  {
    if ( !*((_QWORD *)v16 + 337) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v22 + 24) = 695LL;
      WdLogEvent5_WdAssertion(v22);
      v16 = *(DXGADAPTER **)(a1 + 1848);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v16) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v23 + 24) = 696LL;
      WdLogEvent5_WdAssertion(v23);
    }
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1848) + 24LL), 1uLL);
    *(_DWORD *)(a1 + 1856) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1848) + 2696LL) + 80LL);
  }
  *(_BYTE *)(a1 + 1868) = *(_BYTE *)(a6 + 346) != 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2636LL) )
  {
    v19 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 1871) = 1;
    *(_BYTE *)(v19 + 297) = 1;
  }
  v20 = *(DXGK_VIRTUAL_GPU_PARAV **)(a1 + 112);
  if ( v20 )
    DXGK_VIRTUAL_GPU_PARAV::InsertDxgDevice(v20, (struct _LIST_ENTRY *)(a1 + 120));
  return a1;
}
