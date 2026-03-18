/*
 * XREFs of PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005F36C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B3428 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 */

__int64 __fastcall PnpiBiosInterruptCombineToIoDescriptor(
        int a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // esi
  size_t v7; // r14
  unsigned int v11; // edi
  __int16 v12; // bp
  __int64 Pool2; // rax
  unsigned __int8 v14; // dl
  __int64 v15; // rbx
  char v16; // al
  __int16 v17; // cx
  __int16 v18; // r8
  __int16 v19; // cx
  _BYTE *v20; // r8
  __int64 v21; // rax
  int v22; // r8d

  v6 = *(unsigned __int8 *)(a2 + 4);
  v7 = a3;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v12 = a3 + 23 + 2 * v6;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)a3 + 23 + 2 * v6, 1383097153LL);
    v14 = 0;
    v15 = Pool2;
    if ( Pool2 )
    {
      *(_BYTE *)Pool2 = -116;
      *(_WORD *)(Pool2 + 1) = v12 - 3;
      *(_DWORD *)(Pool2 + 3) = 65537;
      v16 = *(_BYTE *)(a2 + 3);
      if ( (v16 & 2) != 0 )
      {
        *(_WORD *)(v15 + 7) |= 1u;
        v16 = *(_BYTE *)(a2 + 3);
      }
      v17 = *(_WORD *)(v15 + 7) | 2;
      if ( (v16 & 4) == 0 )
        v17 = *(_WORD *)(v15 + 7);
      *(_WORD *)(v15 + 7) = v17;
      v18 = v17 | 8;
      if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
        v18 = v17;
      *(_WORD *)(v15 + 7) = v18;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
        *(_WORD *)(v15 + 7) = v18 | 0x10;
      *(_BYTE *)(v15 + 9) = 0;
      *(_WORD *)(v15 + 14) = 23;
      *(_DWORD *)(v15 + 10) = 0;
      v19 = 2 * v6 + 23;
      *(_WORD *)(v15 + 21) = 0;
      *(_WORD *)(v15 + 17) = v19;
      v20 = (_BYTE *)(v15 + 23);
      *(_WORD *)(v15 + 19) = v19 + v7;
      do
      {
        v21 = v14++;
        *v20 = *(_BYTE *)(a2 + 4 * v21 + 5);
        v20 = (_BYTE *)(v15 + 2);
      }
      while ( v14 < (unsigned __int16)v6 );
      *(_BYTE *)(v15 + 16) = *(_BYTE *)((unsigned int)(2 * v6 + 7) + a2);
      memmove((void *)(v15 + *(unsigned __int16 *)(v15 + 17)), (const void *)(a2 + (unsigned int)(2 * v6 + 8)), v7);
      v11 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v15, v22, a4, a5, a6);
      ExFreePoolWithTag((PVOID)v15, 0x52706341u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
