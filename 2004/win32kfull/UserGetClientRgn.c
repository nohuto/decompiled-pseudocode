/*
 * XREFs of UserGetClientRgn @ 0x1C01E8FB8
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C004FCF8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0287604 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     CalcVisRgn @ 0x1C0072BA0 (CalcVisRgn.c)
 */

HRGN __fastcall UserGetClientRgn(unsigned __int64 a1, _OWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r9d
  HRGN v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = HMValidateHandleNoSecure(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( a3 )
      v7 = (4 * (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4)) | 1;
    else
      v7 = 24;
    CalcVisRgn(&v9, v5, (struct tagWND *)v5, v7);
    *a2 = *(_OWORD *)(*(_QWORD *)(v6 + 40) + 104LL);
  }
  return v9;
}
