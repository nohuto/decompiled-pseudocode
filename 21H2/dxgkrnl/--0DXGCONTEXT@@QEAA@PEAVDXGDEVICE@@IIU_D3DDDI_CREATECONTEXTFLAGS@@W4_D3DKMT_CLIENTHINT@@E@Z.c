/*
 * XREFs of ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016B958
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016A9E0 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHINT@@@Z @ 0x1C016BB7C (-GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CL.c)
 */

DXGCONTEXT *__fastcall DXGCONTEXT::DXGCONTEXT(
        DXGCONTEXT *this,
        struct DXGDEVICE *a2,
        int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        _D3DKMT_CLIENTHINT a6,
        char a7)
{
  int v7; // r10d
  int v9; // eax
  int v10; // ecx
  DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax

  v7 = 0;
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = a6;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_BYTE *)this + 296) = 0;
  *((_DWORD *)this + 82) = -1;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 64;
  *((struct _D3DDDI_CREATECONTEXTFLAGS *)this + 101) = a5;
  *((_DWORD *)this + 98) = a3;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 99) = a4;
  *((_QWORD *)this + 52) = (char *)this + 408;
  *((_QWORD *)this + 51) = (char *)this + 408;
  *((_BYTE *)this + 438) = a7;
  v9 = 45;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_WORD *)this + 218) = 0;
  *(_DWORD *)((char *)this + 439) = 0;
  v10 = *((_DWORD *)a2 + 108);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  if ( v10 != 2 )
    v9 = 51;
  *((_DWORD *)this + 117) = v9;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 118) = 59;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *(_OWORD *)((char *)this + 200) = 0LL;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_OWORD *)this + 10) = 0LL;
  while ( 1 )
  {
    a4 >>= 1;
    if ( !a4 )
      break;
    ++v7;
  }
  *((_DWORD *)this + 100) = v7;
  if ( (*((_BYTE *)a2 + 1869) & 1) == 0 )
  {
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(
                          *((DXGPROCESS **)a2 + 5),
                          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 240LL));
    *((_QWORD *)this + 61) = DXGPROCESS_RENDER_ADAPTER_INFO::GetClientStatistics(RenderAdapterInfo, a6);
  }
  return this;
}
