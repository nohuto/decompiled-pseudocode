/*
 * XREFs of ?DIBtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUtagBITMAPINFOHEADER@@K@Z @ 0x18194A
 * Callers:
 *     ?xxxBMPtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUHBITMAP__@@PAUHPALETTE__@@@Z @ 0x1822DF (-xxxBMPtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUHBITMAP__@@PAUHPALETTE__@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?SizeOfDibColorTable@@YGKPAUtagBITMAPINFOHEADER@@@Z @ 0x181F99 (-SizeOfDibColorTable@@YGKPAUtagBITMAPINFOHEADER@@@Z.c)
 */

struct BITMAPV5HEADER *__fastcall DIBtoDIBV5(int a1, unsigned int a2)
{
  size_t v3; // ebx
  size_t v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  int v7; // eax
  size_t v8; // edi
  ULONG *v10; // [esp+0h] [ebp-40h]
  ULONG *v11; // [esp+0h] [ebp-40h]
  struct tagBITMAPINFOHEADER *v12; // [esp+0h] [ebp-40h]
  unsigned int v13; // [esp+0h] [ebp-40h]
  unsigned int *v14; // [esp+4h] [ebp-3Ch]
  unsigned int v17; // [esp+1Ch] [ebp-24h] BYREF
  size_t MaxCount; // [esp+20h] [ebp-20h]
  size_t v19; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v19 = 0;
  v17 = 0;
  MaxCount = 0;
  if ( *(_DWORD *)a1 != 40 )
    return 0;
  if ( ULongLongToULong(*(unsigned __int16 *)(a1 + 14) * (unsigned __int64)*(unsigned int *)(a1 + 4), v10) < 0 )
    return 0;
  if ( ULongLongToULong(abs32(*(_DWORD *)(a1 + 8)) * (unsigned __int64)(((MaxCount + 31) >> 3) & 0x1FFFFFFC), v11) < 0 )
    return 0;
  v3 = SizeOfDibColorTable(v12);
  MaxCount = v3;
  v4 = v19;
  if ( v19 + 124 < v19 )
    return 0;
  if ( (ULongAdd(v19 + 124, v3, (int *)&v17, v13, v14) & 0x80000000) != 0 )
    return 0;
  if ( a2 < v3 + v4 + 40 )
    return 0;
  v5 = (_DWORD *)Win32AllocPool(v17, 1650684757);
  v6 = v5;
  if ( !v5 )
    return 0;
  memset(v5, 0, 0x7Cu);
  qmemcpy(v6, (const void *)a1, 0x28u);
  ms_exc.registration.TryLevel = -2;
  *v6 = 124;
  v6[14] = 1934772034;
  v6[27] = 4;
  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    v7 = *(unsigned __int16 *)(a1 + 14);
    if ( v7 == 16 || v7 == 32 )
    {
      v6[10] = *(_DWORD *)(a1 + 40);
      v6[11] = *(_DWORD *)(a1 + 44);
      v6[12] = *(_DWORD *)(a1 + 48);
    }
  }
  v8 = MaxCount;
  if ( MaxCount )
    memcpy(v6 + 31, (const void *)(a1 + 40), MaxCount);
  memcpy((char *)v6 + v8 + 124, (const void *)(v8 + a1 + 40), v19);
  return (struct BITMAPV5HEADER *)v6;
}
