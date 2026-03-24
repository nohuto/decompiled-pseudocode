/*
 * XREFs of ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C020EAA0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0126EB0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::QueryTrackedWorkloadSupport(
        DXGADAPTER *this,
        unsigned int a2,
        enum DXGK_ENGINE_TYPE a3,
        int *a4)
{
  unsigned int v4; // r10d
  unsigned int v7; // eax
  unsigned __int16 *v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8

  v4 = 0;
  *a4 = 0;
  if ( *((int *)this + 582) < 0x2000 )
    v7 = 1;
  else
    v7 = *((_DWORD *)this + 70);
  if ( a2 < v7 )
  {
    v8 = (unsigned __int16 *)(*((_QWORD *)this + 323) + 360LL * a2);
    if ( *((_QWORD *)v8 + 4) )
    {
      v9 = *v8;
      if ( *v8 )
      {
        v10 = 0LL;
        do
        {
          v11 = *((_QWORD *)v8 + 4);
          if ( *(_DWORD *)(v10 + v11) == a3 )
          {
            *a4 = (*(_DWORD *)(v10 + v11 + 68) >> 2) & 1;
            if ( (*(_BYTE *)(v10 + v11 + 68) & 4) == 0 )
              break;
          }
          ++v4;
          v10 += 74LL;
        }
        while ( v4 < v9 );
      }
    }
  }
  return 0LL;
}
