/*
 * XREFs of UserGetClientRgn @ 0x1C01E82F8
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00856F8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286094 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0043F90 (CalcVisRgn.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

HRGN __fastcall UserGetClientRgn(unsigned __int64 a1, _OWORD *a2, int a3)
{
  struct tagWND *v5; // rax
  struct tagWND *v6; // rbx
  unsigned int v7; // r9d
  HRGN v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = (struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( a3 )
      v7 = (4 * (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 4)) | 1;
    else
      v7 = 24;
    CalcVisRgn(&v9, v5, v5, v7);
    *a2 = *(_OWORD *)(*((_QWORD *)v6 + 5) + 104LL);
  }
  return v9;
}
