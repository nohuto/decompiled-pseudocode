/*
 * XREFs of _DwmAsyncRegisterSharedThumbnailVisual@36 @ 0xAABD8
 * Callers:
 *     _DwmAsyncRegisterSharedThumbnailVisualApiExt@36 @ 0xAABAE (_DwmAsyncRegisterSharedThumbnailVisualApiExt@36.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncRegisterSharedThumbnailVisual(
        PVOID Object,
        int a2,
        int a3,
        int a4,
        int a5,
        const void *a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // esi
  _WORD v12[3]; // [esp+10h] [ebp-6Ch] BYREF
  int v13; // [esp+16h] [ebp-66h]
  int v14; // [esp+1Ah] [ebp-62h]
  int v15; // [esp+1Eh] [ebp-5Eh]
  int v16; // [esp+22h] [ebp-5Ah]
  __int16 v17; // [esp+26h] [ebp-56h]
  int v18; // [esp+28h] [ebp-54h]
  int v19; // [esp+2Ch] [ebp-50h]
  int v20; // [esp+30h] [ebp-4Ch]
  int v21; // [esp+34h] [ebp-48h]
  int v22; // [esp+38h] [ebp-44h]
  _BYTE v23[45]; // [esp+3Ch] [ebp-40h] BYREF
  int v24; // [esp+69h] [ebp-13h]
  int v25; // [esp+6Dh] [ebp-Fh]
  int v26; // [esp+71h] [ebp-Bh]

  v10 = -1073741823;
  if ( Object )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v12[0] = 77;
    v12[1] = 101;
    v12[2] = 0x8000;
    v21 = a4;
    v22 = a5;
    v20 = a3;
    v18 = 1073741903;
    v19 = a2;
    qmemcpy(v23, a6, sizeof(v23));
    v24 = a8;
    v25 = a9;
    v26 = a7;
    v10 = LpcRequestPort(Object, v12);
    ObfDereferenceObject(Object);
  }
  return v10;
}
