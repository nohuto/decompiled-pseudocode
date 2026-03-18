/*
 * XREFs of ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C006DCFC
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEA_N@Z @ 0x1C006BA18 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006BD08 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::Allocate(CResourceStateUpdateSerializer *this, ULONG a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r10d
  unsigned int v4; // r11d
  unsigned int v5; // r8d
  signed int v8; // edi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  PVOID PoolWithQuotaTag; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8

  v2 = *((_DWORD *)this + 2);
  v3 = -1;
  v4 = -1;
  v5 = v2 + *((_DWORD *)this + 15);
  if ( v5 >= v2 )
    v4 = v2 + *((_DWORD *)this + 15);
  v8 = v5 < v2 ? 0xC0000095 : 0;
  *((_DWORD *)this + 2) = v4;
  if ( v5 >= v2 )
  {
    v9 = -1;
    v10 = v4 + *((_DWORD *)this + 17);
    if ( v10 >= v4 )
      v9 = v10;
    v8 = v10 < v4 ? 0xC0000095 : 0;
    *((_DWORD *)this + 2) = v9;
    if ( v10 >= v4 )
    {
      v11 = -1;
      v12 = v9 + *((_DWORD *)this + 14);
      if ( v12 >= v9 )
        v11 = v9 + *((_DWORD *)this + 14);
      v8 = v12 < v9 ? 0xC0000095 : 0;
      *((_DWORD *)this + 2) = v11;
      if ( v12 >= v9 )
      {
        v13 = -1;
        v14 = v11 + *((_DWORD *)this + 16);
        if ( v14 >= v11 )
          v13 = v11 + *((_DWORD *)this + 16);
        v8 = v14 < v11 ? 0xC0000095 : 0;
        *((_DWORD *)this + 2) = v13;
        if ( v14 >= v11 )
        {
          v15 = v13 + *((_DWORD *)this + 18);
          if ( v15 >= v13 )
            v3 = v13 + *((_DWORD *)this + 18);
          v8 = v15 < v13 ? 0xC0000095 : 0;
          *((_DWORD *)this + 2) = v3;
          if ( v15 >= v13 )
          {
            if ( v3 )
            {
              PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v3, a2);
              *(_QWORD *)this = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
                v8 = -1073741801;
            }
            if ( v8 >= 0 )
            {
              v17 = *((unsigned int *)this + 16);
              v18 = *(_QWORD *)this + *((unsigned int *)this + 15);
              *((_QWORD *)this + 3) = *(_QWORD *)this;
              v19 = v18 + *((unsigned int *)this + 17);
              *((_QWORD *)this + 5) = v18;
              v20 = v19 + *((unsigned int *)this + 14);
              *((_QWORD *)this + 2) = v19;
              *((_QWORD *)this + 4) = v20;
              *((_QWORD *)this + 6) = v20 + v17;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
