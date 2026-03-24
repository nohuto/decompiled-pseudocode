/*
 * XREFs of PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E6AC
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B4020 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 */

__int64 __fastcall PnpiBiosInterruptCombineToIoDescriptor(
        int a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // ebp
  size_t v7; // r12
  unsigned int v9; // edi
  unsigned int v10; // r14d
  char *PoolWithTag; // rax
  unsigned __int8 v12; // di
  char *v13; // rbx
  __int16 v14; // ax
  char v15; // dl
  __int16 v16; // cx
  __int16 v17; // dx
  __int16 v18; // cx
  _BYTE *v19; // rdx
  __int64 v20; // rax
  int v21; // r8d

  v6 = *(unsigned __int8 *)(a2 + 4);
  v7 = a3;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v10 = a3 + 23 + 2 * v6;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x52706341u);
    v12 = 0;
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(v7 + 23 + 2 * v6));
      v14 = *(_WORD *)(v13 + 7);
      *(_WORD *)(v13 + 1) = v10 - 3;
      *v13 = -116;
      *(_DWORD *)(v13 + 3) = 65537;
      v15 = *(_BYTE *)(a2 + 3);
      if ( (v15 & 2) != 0 )
      {
        v14 |= 1u;
        *(_WORD *)(v13 + 7) = v14;
        v15 = *(_BYTE *)(a2 + 3);
      }
      v16 = v14 | 2;
      if ( (v15 & 4) == 0 )
        v16 = v14;
      *(_WORD *)(v13 + 7) = v16;
      v17 = v16 | 8;
      if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
        v17 = v16;
      *(_WORD *)(v13 + 7) = v17;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
        *(_WORD *)(v13 + 7) = v17 | 0x10;
      v13[9] = 0;
      *((_WORD *)v13 + 7) = 23;
      *(_DWORD *)(v13 + 10) = 0;
      v18 = 2 * v6 + 23;
      *(_WORD *)(v13 + 21) = 0;
      *(_WORD *)(v13 + 17) = v18;
      v19 = v13 + 23;
      *(_WORD *)(v13 + 19) = v18 + v7;
      do
      {
        v20 = v12++;
        *v19 = *(_BYTE *)(a2 + 4 * v20 + 5);
        v19 = v13 + 2;
      }
      while ( v12 < (unsigned __int16)v6 );
      v13[16] = *(_BYTE *)((unsigned int)(2 * v6 + 7) + a2);
      memmove(&v13[*(unsigned __int16 *)(v13 + 17)], (const void *)(a2 + (unsigned int)(2 * v6 + 8)), v7);
      v9 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, (_DWORD)v13, v21, a4, a5, a6);
      ExFreePoolWithTag(v13, 0x52706341u);
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
  return v9;
}
