/*
 * XREFs of GreGetUFIPathname @ 0x1C027C068
 * Callers:
 *     NtGdiGetUFIPathname @ 0x1C02AE5A0 (NtGdiGetUFIPathname.c)
 * Callees:
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C027B984 (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

__int64 __fastcall GreGetUFIPathname(
        struct _UNIVERSAL_FONT_ID *a1,
        _DWORD *a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6,
        int *a7,
        _DWORD *a8,
        volatile void *Address,
        _DWORD *a10,
        unsigned int *a11)
{
  struct PFE *PFEFromUFI; // rax
  struct PFE *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r12
  SIZE_T v17; // rdi
  PVOID v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // r8d
  PVOID MappedBase; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR ViewSize[6]; // [rsp+28h] [rbp-30h] BYREF

  PFEFromUFI = ppfeGetPFEFromUFI(a1, a6 & 5, 1);
  v14 = PFEFromUFI;
  ViewSize[1] = (ULONG_PTR)PFEFromUFI;
  if ( !PFEFromUFI )
    return 0LL;
  v15 = *(_QWORD *)PFEFromUFI;
  if ( a5 )
    *a5 = *(_DWORD *)(v15 + 36);
  if ( a2 )
    *a2 = *(_DWORD *)(v15 + 32);
  if ( a3 )
  {
    v16 = *(unsigned int *)(v15 + 32);
    if ( (unsigned int)v16 > a4 )
      return 0LL;
    memmove(a3, *(const void **)(v15 + 24), 2 * v16);
    memset(&a3[2 * v16], 0, 2LL * (a4 - (unsigned int)v16));
  }
  if ( a7 )
    *a7 = *((_DWORD *)v14 + 3) & 0x40;
  if ( (*((_DWORD *)v14 + 3) & 0x40) == 0 )
    goto LABEL_17;
  ViewSize[0] = 0LL;
  v17 = *(unsigned int *)(**(_QWORD **)(v15 + 200) + 24LL);
  if ( a8 )
    *a8 = v17;
  if ( !Address )
    goto LABEL_17;
  MappedBase = 0LL;
  if ( MmMapViewInSessionSpace(*(PVOID *)(**(_QWORD **)(v15 + 200) + 32LL), &MappedBase, ViewSize) < 0 )
    return 0LL;
  ProbeForWrite(Address, v17, 1u);
  v18 = MappedBase;
  memmove((void *)Address, (char *)MappedBase + 16, v17);
  MmUnmapViewInSessionSpace(v18);
LABEL_17:
  if ( a10 )
  {
    if ( a11 )
    {
      *a10 = 0;
      *a11 = 0;
      v19 = *(_QWORD *)v14;
      if ( *(struct PDEV **)(*(_QWORD *)v14 + 88LL) == qword_1C0340A10 && !*(_DWORD *)(*(_QWORD *)(v19 + 80) + 8LL) )
      {
        v20 = *(_DWORD *)(v19 + 208);
        if ( v20 >= 4 && (v20 & 1) == 0 )
        {
          *a11 = (unsigned int)(*((_DWORD *)v14 + 22) - 1) >> 1;
          *a10 = 1;
        }
      }
    }
  }
  return 1LL;
}
