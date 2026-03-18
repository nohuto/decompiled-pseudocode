/*
 * XREFs of _GreFillFontDir@12 @ 0x220E8D
 * Callers:
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 * Callees:
 *     ?tmPitchAndFamily@IFIOBJ@@QBEEXZ @ 0x896B2 (-tmPitchAndFamily@IFIOBJ@@QBEEXZ.c)
 *     ?fwdExternalLeading@IFIOBJ@@QBEFXZ @ 0x896E6 (-fwdExternalLeading@IFIOBJ@@QBEFXZ.c)
 */

unsigned int __fastcall GreFillFontDir(int a1, int a2, int a3)
{
  unsigned int v3; // eax
  HANDLE CurrentThreadId; // eax
  _BYTE *v6; // esi
  __int16 v7; // dx
  _BYTE *v8; // esi
  __int16 v9; // ax
  __int16 v10; // ax
  _BYTE *v11; // esi
  const char *v12; // esi
  __int16 *v13; // ecx
  __int16 v14; // ax
  unsigned int v15; // ecx
  int v16; // edx
  CHAR *v17; // esi
  const WCHAR *v18; // edx
  const WCHAR *v19; // ecx
  __int16 v20; // ax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  CHAR *v23; // esi
  __int16 *v24; // ecx
  __int16 v25; // ax
  _DWORD v27[3]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]
  unsigned int v30; // [esp+28h] [ebp+8h]

  v29 = a2;
  v3 = a3 + 10;
  v28 = a3 + 10;
  v27[0] = a1;
  *(_DWORD *)a3 = unk_26DECC;
  *(_DWORD *)(a3 + 4) = *((_DWORD *)&unk_26DECC + 1);
  *(_WORD *)(a3 + 8) = *((_WORD *)&unk_26DECC + 4);
  strcpy((char *)(a3 + 10), "Windows! Windows! Windows!");
  if ( a2 )
  {
    if ( a2 == 2 )
      CurrentThreadId = PsGetCurrentThreadId();
    else
      CurrentThreadId = (HANDLE)((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
    a2 = v29;
    *(_DWORD *)(a3 + 10) = CurrentThreadId;
    v3 = v28;
  }
  memset((void *)(v3 + 27), 0, 0x20u);
  *(_BYTE *)(v3 + 59) = 0;
  *(_DWORD *)(v3 + 27) = dword_26DEC8;
  v29 = 0;
  *(_BYTE *)(v3 + 60) = (a2 == 2 ? 67 : 3) | (a2 == 0 ? 0 : 0x80);
  *(_BYTE *)(v3 + 61) = *(_BYTE *)(a1 + 52);
  *(_BYTE *)(v3 + 62) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(v3 + 63) = *(_BYTE *)(a1 + 57);
  *(_WORD *)(v3 + 64) = 72;
  *(_WORD *)(v3 + 66) = 72;
  *(_BYTE *)(v3 + 68) = *(_BYTE *)(a1 + 60);
  *(_BYTE *)(v3 + 69) = *(_BYTE *)(a1 + 61);
  *(_WORD *)(v3 + 70) = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62) - *(_WORD *)(a1 + 56);
  v6 = (_BYTE *)(v3 + 72);
  *(_BYTE *)(v3 + 72) = IFIOBJ::fwdExternalLeading((IFIOBJ *)v27);
  v6[1] = (unsigned __int16)IFIOBJ::fwdExternalLeading((IFIOBJ *)v27) >> 8;
  v6 += 2;
  *v6 = -((*(_BYTE *)(a1 + 52) & 1) != 0);
  v6[1] = -((*(_BYTE *)(a1 + 52) & 2) != 0);
  v6[2] = -((*(_BYTE *)(a1 + 52) & 0x10) != 0);
  v6 += 3;
  *v6 = *(_BYTE *)(a1 + 46);
  v6[1] = *(_BYTE *)(a1 + 47);
  v6 += 2;
  *v6++ = *(_BYTE *)(a1 + 44);
  *(_WORD *)v6 = v7;
  v6 += 2;
  *(_WORD *)v6 = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62);
  v6 += 2;
  *v6 = IFIOBJ::tmPitchAndFamily((IFIOBJ *)v27);
  v8 = v6 + 1;
  v9 = *(_WORD *)(a1 + 76);
  if ( !v9 )
    v9 = *(__int16 *)(a1 + 78) / 2;
  *v8 = v9;
  v10 = *(_WORD *)(a1 + 76);
  if ( !v10 )
    v10 = *(__int16 *)(a1 + 78) / 2;
  v8[1] = HIBYTE(v10);
  v11 = v8 + 2;
  *v11 = *(_BYTE *)(a1 + 78);
  v11[1] = *(_BYTE *)(a1 + 79);
  v11 += 2;
  *v11 = *(_BYTE *)(a1 + 108);
  v11[1] = *(_BYTE *)(a1 + 109);
  v11 += 2;
  v11[1] = 2;
  *v11 = 1;
  v11 += 2;
  *(_DWORD *)v11 = 0;
  *((_DWORD *)v11 + 1) = 7733248;
  *((_WORD *)v11 + 4) = 0;
  v11[10] = *(_BYTE *)(a1 + 58);
  v11[11] = *(_BYTE *)(a1 + 59);
  v11[12] = *(_BYTE *)(a1 + 36);
  v11[13] = *(_BYTE *)(a1 + 37);
  v12 = (const char *)(a3 + 118);
  v13 = (__int16 *)(a1 + *(_DWORD *)(a1 + 8));
  do
    v14 = *v13++;
  while ( v14 != (_WORD)v29 );
  RtlUnicodeToMultiByteN(
    (PCHAR)(a3 + 118),
    0x20u,
    0,
    (PCWCH)(a1 + *(_DWORD *)(a1 + 8)),
    2 * (((int)v13 + -a1 - *(_DWORD *)(a1 + 8) - 2) >> 1) + 2);
  *(_BYTE *)(a3 + 149) = 0;
  v15 = strlen(v12);
  v16 = *(_DWORD *)(a1 + 16);
  v17 = (CHAR *)&v12[v15 + 1];
  v28 = v15 + 1;
  v18 = (const WCHAR *)(a1 + v16);
  v19 = v18;
  do
    v20 = *v19++;
  while ( v20 != (_WORD)v29 );
  RtlUnicodeToMultiByteN(v17, 0x40u, 0, v18, 2 * (v19 - (v18 + 1)) + 2);
  v17[63] = 0;
  v21 = (unsigned int)&v17[strlen(v17) + 1];
  v22 = v21 - (_DWORD)v17;
  v23 = (CHAR *)v21;
  v30 = v22;
  v24 = (__int16 *)(a1 + *(_DWORD *)(a1 + 12));
  do
    v25 = *v24++;
  while ( v25 != (_WORD)v29 );
  RtlUnicodeToMultiByteN(
    v23,
    0x20u,
    0,
    (PCWCH)(a1 + *(_DWORD *)(a1 + 12)),
    2 * (((int)v24 + -a1 - *(_DWORD *)(a1 + 12) - 2) >> 1) + 2);
  v23[31] = 0;
  return v28 + 119 + strlen(v23) + v30;
}
