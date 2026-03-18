/*
 * XREFs of _DwmAsyncUpdateDefaultDesktopThumbnail@24 @ 0x1D2AAC
 * Callers:
 *     _NtUserUpdateDefaultDesktopThumbnail@20 @ 0x16AD14 (_NtUserUpdateDefaultDesktopThumbnail@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncUpdateDefaultDesktopThumbnail(PVOID Object, int a2, int *a3, int *a4, char a5, int a6)
{
  int v7; // esi
  _WORD v9[3]; // [esp+8h] [ebp-4Ch] BYREF
  int v10; // [esp+Eh] [ebp-46h]
  int v11; // [esp+12h] [ebp-42h]
  int v12; // [esp+16h] [ebp-3Eh]
  int v13; // [esp+1Ah] [ebp-3Ah]
  __int16 v14; // [esp+1Eh] [ebp-36h]
  int v15; // [esp+20h] [ebp-34h]
  int v16; // [esp+24h] [ebp-30h]
  int v17; // [esp+28h] [ebp-2Ch]
  int v18; // [esp+2Ch] [ebp-28h]
  int v19; // [esp+30h] [ebp-24h]
  int v20; // [esp+34h] [ebp-20h]
  int v21; // [esp+38h] [ebp-1Ch]
  int v22; // [esp+3Ch] [ebp-18h]
  int v23; // [esp+40h] [ebp-14h]
  int v24; // [esp+44h] [ebp-10h]
  char v25; // [esp+48h] [ebp-Ch]
  int v26; // [esp+49h] [ebp-Bh]

  v7 = -1073741823;
  if ( Object )
  {
    v15 = 1073741897;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v9[0] = 45;
    v9[1] = 69;
    v9[2] = 0x8000;
    v16 = a2;
    v17 = *a3;
    v18 = a3[1];
    v19 = a3[2];
    v20 = a3[3];
    v21 = *a4;
    v22 = a4[1];
    v23 = a4[2];
    v24 = a4[3];
    v25 = a5;
    v26 = a6;
    v7 = LpcRequestPort(Object, v9);
    ObfDereferenceObject(Object);
  }
  return v7;
}
