/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00BC76C
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4F68 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001C48 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x1C001794C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C005F060 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rdi
  __int64 **v10; // r13
  __int64 *v11; // rbx
  unsigned int i; // edi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  PSLIST_ENTRY v15; // r10
  __int64 v16; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v18; // rax
  _BYTE v20[8]; // [rsp+70h] [rbp-48h] BYREF
  DXGPUSHLOCK *v21; // [rsp+78h] [rbp-40h]
  int v22; // [rsp+80h] [rbp-38h]
  char v24; // [rsp+D8h] [rbp+20h]
  unsigned __int64 v25; // [rsp+F8h] [rbp+40h]

  v24 = a4;
  v9 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v21);
  v25 = a8 - a6;
  v10 = (__int64 **)((char *)a2 + 32 * v9 + 8 * v9 + 96);
  v22 = 2;
  v11 = *v10;
  for ( i = 0; v11 != (__int64 *)v10; v11 = (__int64 *)*v11 )
  {
    v13 = v11[11];
    if ( a7 <= v13 )
      break;
    v14 = v11[12];
    if ( a6 < v14 )
    {
      if ( a6 > v13 )
        v13 = a6;
      if ( a7 < v14 )
        v14 = a7;
      v15 = VIDMM_MAPPED_VA_RANGE::operator new();
      if ( v15 )
        v16 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v15,
                (__int64)a3,
                v13 + v25,
                v14 + v25,
                v24,
                v11[6],
                v13 + v11[8] - v11[11],
                (int)(*((_DWORD *)v11 + 14) << 28) >> 28,
                v11[10],
                v11[9],
                v11[14],
                v11[13],
                0);
      else
        v16 = 0LL;
      if ( !v16 )
      {
        i = -1073741801;
        break;
      }
      Blink = a5->Blink;
      v18 = (struct _LIST_ENTRY *)(v16 + 8);
      if ( Blink->Flink != a5 )
        __fastfail(3u);
      v18->Flink = a5;
      v18->Blink = Blink;
      Blink->Flink = v18;
      a5->Blink = v18;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return i;
}
