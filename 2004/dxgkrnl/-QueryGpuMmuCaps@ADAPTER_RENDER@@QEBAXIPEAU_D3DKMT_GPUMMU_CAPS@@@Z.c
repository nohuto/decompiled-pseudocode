/*
 * XREFs of ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C015BC38
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01248A0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::QueryGpuMmuCaps(ADAPTER_RENDER *this, __int64 a2, struct _D3DKMT_GPUMMU_CAPS *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  UINT v9; // eax
  UINT v10; // ecx

  v4 = (unsigned int)a2;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 2060LL) & 0x40) == 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 4005LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 141);
  if ( v7 )
    v8 = (_DWORD *)(v7 + 144 * v4);
  else
    v8 = 0LL;
  a3->Flags.Value = 0;
  v9 = *v8 & 1;
  a3->Flags.Value = v9;
  v10 = v9 | *v8 & 2;
  a3->Flags.Value = v10;
  a3->Flags.Value = v10 | (*v8 >> 2) & 4;
  a3->VirtualAddressBitCount = v8[2];
}
