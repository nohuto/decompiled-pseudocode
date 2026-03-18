/*
 * XREFs of _NtGdiCreateRoundRectRgn@24 @ 0x2245E
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ @ 0x22A08 (-hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ.c)
 *     ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E (-bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QAE@AAVERECTL@@H@Z @ 0x22EF4 (--0EBOX@@QAE@AAVERECTL@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

HRGN __stdcall NtGdiCreateRoundRectRgn(int a1, int a2, int a3, int a4, struct EPATHOBJ *a5, struct EBOX *a6)
{
  unsigned int v6; // ecx
  HRGN v7; // esi
  void (__thiscall *v8)(RGNOBJ *__hidden); // edi
  int v10; // [esp+4h] [ebp-B8h]
  int v11; // [esp+8h] [ebp-B4h]
  int v12; // [esp+Ch] [ebp-B0h] BYREF
  int v13; // [esp+10h] [ebp-ACh]
  int v14; // [esp+14h] [ebp-A8h]
  int v15; // [esp+18h] [ebp-A4h]
  _BYTE v16[8]; // [esp+1Ch] [ebp-A0h] BYREF
  int v17; // [esp+24h] [ebp-98h]
  _DWORD v18[21]; // [esp+64h] [ebp-58h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
  if ( !v17 )
    goto LABEL_16;
  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != 0xF8000000
    || (a4 & 0xF8000000) != 0 && (a4 & 0xF8000000) != 0xF8000000
    || (v6 = a3 & 0xF8000000, (a3 & 0xF8000000) != 0) && v6 != -134217728
    || (a2 & 0xF8000000) != 0 && (a2 & 0xF8000000) != 0xF8000000 )
  {
    EngSetLastError(0x57u);
    goto LABEL_25;
  }
  EBOX::EBOX((EBOX *)v18, (struct ERECTL *)&v12, v6);
  if ( !v18[0] )
  {
    if ( bRoundRect(a5, a6, v10, v11) && EPATHOBJ::bFlatten((EPATHOBJ *)v16) )
    {
      v7 = 0;
      v13 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v12, (struct EPATHOBJ *)v16, 1u, 0);
      v8 = RGNOBJ::vDeleteRGNOBJ;
      if ( v12 )
      {
        RGNOBJ::vTighten((RGNOBJ *)&v12);
        goto LABEL_11;
      }
      EngSetLastError(8u);
      goto LABEL_13;
    }
LABEL_16:
    EngSetLastError(8u);
LABEL_25:
    v7 = 0;
    goto LABEL_15;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
  v8 = RGNOBJ::vDeleteRGNOBJ;
  if ( v12 )
  {
LABEL_11:
    v7 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v12);
    if ( !v7 )
      v8((RGNOBJ *)&v12);
    goto LABEL_13;
  }
  EngSetLastError(8u);
  v7 = 0;
LABEL_13:
  if ( v13 == 1 )
    v8((RGNOBJ *)&v12);
LABEL_15:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
  return v7;
}
