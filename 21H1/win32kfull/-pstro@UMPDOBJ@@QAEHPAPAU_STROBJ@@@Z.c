/*
 * XREFs of ?pstro@UMPDOBJ@@QAEHPAPAU_STROBJ@@@Z @ 0x1F45AC
 * Callers:
 *     ?UMPDDrvTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x20F625 (-UMPDDrvTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 */

BOOL __thiscall UMPDOBJ::pstro(UMPDOBJ *this, struct _STROBJ **a2)
{
  unsigned int *v2; // esi
  void *v4; // ebx
  char *KernelPtr; // eax
  unsigned int v6; // ecx
  _DWORD *v7; // eax
  void *v10; // [esp+14h] [ebp-30h]
  void *Src; // [esp+18h] [ebp-2Ch] BYREF
  _DWORD v12[9]; // [esp+1Ch] [ebp-28h] BYREF

  v2 = (unsigned int *)*a2;
  if ( !*a2 )
    return 1;
  v4 = (void *)v2[8];
  Src = v4;
  if ( v4 )
  {
    if ( !UMPDOBJ::ThunkMemBlock(this, &Src, (void *)(2 * *v2)) )
      return 0;
    v4 = Src;
  }
  v10 = (void *)v2[7];
  Src = v10;
  if ( !v10 )
    goto LABEL_10;
  if ( !UMPDOBJ::ThunkMemBlock(this, &Src, (void *)(16 * *v2)) )
    return 0;
  v10 = Src;
  KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)Src);
  v6 = 0;
  if ( *v2 )
  {
    v7 = KernelPtr + 4;
    do
    {
      *v7 = 0;
      ++v6;
      v7 += 4;
    }
    while ( v6 < *v2 );
  }
LABEL_10:
  qmemcpy(v12, v2, sizeof(v12));
  v12[7] = v10;
  v12[8] = v4;
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 104), (void **)a2, 0x24u, v12) != 0;
}
