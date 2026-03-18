/*
 * XREFs of ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E5BBC
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E5EDC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?GetClientStatistics@DXGPROCESS_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHINT@@@Z @ 0x1C00E5DE8 (-GetClientStatistics@DXGPROCESS_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHIN.c)
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
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_BYTE *)this + 312) = 0;
  *((_DWORD *)this + 86) = -1;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 53;
  *((struct _D3DDDI_CREATECONTEXTFLAGS *)this + 105) = a5;
  *((_DWORD *)this + 102) = a3;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 103) = a4;
  *((_QWORD *)this + 54) = (char *)this + 424;
  *((_QWORD *)this + 53) = (char *)this + 424;
  *((_BYTE *)this + 454) = a7;
  v9 = 36;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_WORD *)this + 226) = 0;
  *(_DWORD *)((char *)this + 455) = 0;
  v10 = *((_DWORD *)a2 + 108);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  if ( v10 != 2 )
    v9 = 41;
  *((_DWORD *)this + 121) = v9;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 122) = 59;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *(_OWORD *)((char *)this + 200) = 0LL;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_OWORD *)this + 10) = 0LL;
  while ( 1 )
  {
    a4 >>= 1;
    if ( !a4 )
      break;
    ++v7;
  }
  *((_DWORD *)this + 104) = v7;
  if ( (*((_BYTE *)a2 + 1869) & 1) == 0 )
    *((_QWORD *)this + 63) = DXGPROCESS_ADAPTER_INFO::GetClientStatistics(
                               *(DXGPROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 48LL)
                                                           + 8LL
                                                           * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
                                                                             + 232LL)),
                               a6);
  return this;
}
