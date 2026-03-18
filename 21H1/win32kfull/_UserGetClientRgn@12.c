/*
 * XREFs of _UserGetClientRgn@12 @ 0x154297
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 * Callees:
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __fastcall UserGetClientRgn(unsigned int a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = 0;
  v4 = (_DWORD *)HMValidateHandleNoSecure(a1, 1);
  v5 = v4;
  if ( v4 )
  {
    if ( a3 )
      v6 = (4 * (*(_BYTE *)(v4[5] + 23) & 4)) | 1;
    else
      v6 = 24;
    CalcVisRgn((int)&v10, v4, (int)v4, (struct tagWND *)v6);
    v7 = (_DWORD *)(v5[5] + 68);
    *a2 = *v7++;
    v8 = a2 + 1;
    *v8 = *v7++;
    *++v8 = *v7;
    v8[1] = v7[1];
  }
  return v10;
}
