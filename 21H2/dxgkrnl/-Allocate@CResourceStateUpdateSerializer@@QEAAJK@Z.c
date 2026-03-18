/*
 * XREFs of ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C008198C
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C007FE94 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0080494 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::Allocate(CResourceStateUpdateSerializer *this, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // ecx
  unsigned int v9; // edi
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 Pool2; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx

  v2 = *((_DWORD *)this + 2);
  v4 = 0xFFFFFFFFLL;
  v5 = v2 + *((_DWORD *)this + 15);
  if ( v5 < v2 )
  {
    *((_DWORD *)this + 2) = -1;
    return (unsigned int)-1073741675;
  }
  else
  {
    v7 = -1;
    v8 = v5 + *((_DWORD *)this + 17);
    if ( v8 >= v5 )
      v7 = v8;
    v9 = v8 < v5 ? 0xC0000095 : 0;
    *((_DWORD *)this + 2) = v7;
    if ( v8 >= v5 )
    {
      v10 = 0xFFFFFFFFLL;
      v11 = v7 + *((_DWORD *)this + 14);
      if ( v11 >= v7 )
        v10 = v11;
      v9 = v11 < v7 ? 0xC0000095 : 0;
      *((_DWORD *)this + 2) = v10;
      if ( v11 >= v7 )
      {
        v12 = -1;
        v13 = v10 + *((_DWORD *)this + 16);
        if ( v13 >= (unsigned int)v10 )
          v12 = v10 + *((_DWORD *)this + 16);
        v9 = v13 < (unsigned int)v10 ? 0xC0000095 : 0;
        *((_DWORD *)this + 2) = v12;
        if ( v13 >= (unsigned int)v10 )
        {
          v14 = v12 + *((_DWORD *)this + 18);
          if ( v14 >= v12 )
            v4 = v14;
          v9 = v14 < v12 ? 0xC0000095 : 0;
          *((_DWORD *)this + 2) = v4;
          if ( v14 >= v12 )
          {
            if ( !(_DWORD)v4 || (Pool2 = ExAllocatePool2(257LL, v4, a2, v10), (*(_QWORD *)this = Pool2) != 0LL) )
            {
              v16 = *((unsigned int *)this + 16);
              v17 = *(_QWORD *)this + *((unsigned int *)this + 15);
              *((_QWORD *)this + 3) = *(_QWORD *)this;
              v18 = v17 + *((unsigned int *)this + 17);
              *((_QWORD *)this + 5) = v17;
              v19 = v18 + *((unsigned int *)this + 14);
              *((_QWORD *)this + 2) = v18;
              *((_QWORD *)this + 4) = v19;
              *((_QWORD *)this + 6) = v19 + v16;
            }
            else
            {
              return (unsigned int)-1073741801;
            }
          }
        }
      }
    }
  }
  return v9;
}
