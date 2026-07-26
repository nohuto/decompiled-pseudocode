/*
 * XREFs of ndisImmediateReadWritePort @ 0x1C00BDCC0
 * Callers:
 *     NdisImmediateReadPortUchar @ 0x1C00BE000 (NdisImmediateReadPortUchar.c)
 *     NdisImmediateReadPortUlong @ 0x1C00BE020 (NdisImmediateReadPortUlong.c)
 *     NdisImmediateReadPortUshort @ 0x1C00BE040 (NdisImmediateReadPortUshort.c)
 *     NdisImmediateWritePortUchar @ 0x1C00BE080 (NdisImmediateWritePortUchar.c)
 *     NdisImmediateWritePortUlong @ 0x1C00BE0B0 (NdisImmediateWritePortUlong.c)
 *     NdisImmediateWritePortUshort @ 0x1C00BE0E0 (NdisImmediateWritePortUshort.c)
 * Callees:
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C003BD24 (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 *     ndisStartMapping @ 0x1C00BDF20 (ndisStartMapping.c)
 */

void __fastcall ndisImmediateReadWritePort(__int64 a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, char a5)
{
  __int64 v5; // rcx
  char v8; // si
  SIZE_T v9; // rdi
  int v10; // r12d
  int v11; // r13d
  unsigned __int32 v12; // eax
  unsigned __int16 v13; // ax
  unsigned __int8 v14; // al
  union _LARGE_INTEGER v15; // [rsp+40h] [rbp-10h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v16; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  char v18; // [rsp+88h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v9 = a4;
  v18 = 0;
  v10 = *(_DWORD *)(v5 + 3720);
  v11 = *(_DWORD *)(v5 + 3724);
  BaseAddress = 0LL;
  v16 = 0LL;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 1u:
        *a3 = -1;
        break;
      case 2u:
        *(_WORD *)a3 = -1;
        break;
      case 4u:
        *(_DWORD *)a3 = -1;
        break;
    }
  }
  v15.QuadPart = 0LL;
  if ( !(unsigned int)ndisTranslateResources((struct _NDIS_MINIPORT_BLOCK *)v5, 1, (union _LARGE_INTEGER)a2, &v15, &v16) )
  {
    LODWORD(BaseAddress) = v15.LowPart;
    if ( !v16 )
    {
      if ( (int)ndisStartMapping(v10, v11, a2, v9, v10 != 0, (__int64)&BaseAddress, (__int64)&v18) < 0 )
        return;
      v8 = v18;
    }
    if ( a5 )
    {
      switch ( (_DWORD)v9 )
      {
        case 1:
          v14 = __inbyte((unsigned __int16)BaseAddress);
          *a3 = v14;
          break;
        case 2:
          v13 = __inword((unsigned __int16)BaseAddress);
          *(_WORD *)a3 = v13;
          break;
        case 4:
          v12 = __indword((unsigned __int16)BaseAddress);
          *(_DWORD *)a3 = v12;
          break;
      }
    }
    else
    {
      switch ( (_DWORD)v9 )
      {
        case 1:
          __outbyte((unsigned __int16)BaseAddress, *a3);
          break;
        case 2:
          __outword((unsigned __int16)BaseAddress, *(_WORD *)a3);
          break;
        case 4:
          __outdword((unsigned __int16)BaseAddress, *(_DWORD *)a3);
          break;
      }
    }
    if ( v8 )
      MmUnmapIoSpace(BaseAddress, v9);
  }
}
