/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C01681E4
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004C314 (-InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
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
        char a9,
        char a10)
{
  int v13; // eax
  char v14; // dl
  char v15; // al
  DXGADAPTER *v16; // rcx
  __int64 v17; // rax
  DXGK_VIRTUAL_GPU_PARAV *v18; // rcx

  *(_QWORD *)(a1 + 16) = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 40) = a6;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v13 = 45;
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 16;
  *(_DWORD *)(a1 + 104) = -1;
  *(_QWORD *)(a1 + 112) = a3;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 56;
  if ( a7 != 2 )
    v13 = 51;
  *(_DWORD *)(a1 + 164) = v13;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 1;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 64;
  *(_DWORD *)(a1 + 232) = 41;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 64;
  *(_DWORD *)(a1 + 264) = 55;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 11;
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
  *(_DWORD *)(a1 + 796) = 64;
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_DWORD *)(a1 + 792) = 0;
  *(_DWORD *)(a1 + 800) = -1;
  *(_QWORD *)(a1 + 1848) = a8;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0x1000000;
  *(_BYTE *)(a1 + 1869) ^= (*(_BYTE *)(a1 + 1869) ^ *(_BYTE *)(*(_QWORD *)(a2 + 16) + 209LL)) & 1;
  v14 = *(_BYTE *)(a1 + 1869) & 0xE1;
  v15 = BYTE1(*(_DWORD *)(a6 + 424)) & 1;
  *(_WORD *)(a1 + 1870) = 0;
  *(_DWORD *)(a1 + 1872) = 0;
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_BYTE *)(a1 + 1869) = v14 | (2 * (v15 | (4 * (a9 & 1 | (2 * (a10 & 1))))));
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
  if ( v16 || (v16 = *(DXGADAPTER **)(a2 + 16), *((_QWORD *)v16 + 349)) && (*(_QWORD *)(a1 + 1848) = v16) != 0LL )
  {
    if ( !*((_QWORD *)v16 + 349) )
    {
      WdLogSingleEntry1(1LL, 645LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pDisplayAdapter->IsDisplayAdapter()",
        645LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = *(DXGADAPTER **)(a1 + 1848);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v16) )
    {
      WdLogSingleEntry1(1LL, 646LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pDisplayAdapter->IsCoreResourceSharedOwner()",
        646LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1848) + 24LL), 1uLL);
    *(_DWORD *)(a1 + 1856) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1848) + 2792LL) + 96LL);
  }
  *(_BYTE *)(a1 + 1868) = (*(_DWORD *)(a6 + 424) & 4) != 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2732LL) )
  {
    v17 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 1871) = 1;
    *(_BYTE *)(v17 + 337) = 1;
  }
  v18 = *(DXGK_VIRTUAL_GPU_PARAV **)(a1 + 112);
  if ( v18 )
    DXGK_VIRTUAL_GPU_PARAV::InsertDxgDevice(v18, (struct _LIST_ENTRY *)(a1 + 120));
  return a1;
}
