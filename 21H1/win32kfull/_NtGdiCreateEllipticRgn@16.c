/*
 * XREFs of _NtGdiCreateEllipticRgn@16 @ 0x1FDFC4
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ @ 0x22A08 (-hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ.c)
 *     ??0EBOX@@QAE@AAVERECTL@@H@Z @ 0x22EF4 (--0EBOX@@QAE@AAVERECTL@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bEllipse@@YGHAAVEPATHOBJ@@AAVEBOX@@@Z @ 0x214AD5 (-bEllipse@@YGHAAVEPATHOBJ@@AAVEBOX@@@Z.c)
 */

struct HOBJ__ *__stdcall NtGdiCreateEllipticRgn(struct OBJECT *a1, int a2, int a3, int a4)
{
  int v4; // ecx
  void (__thiscall *v5)(RGNOBJ *__hidden); // edi
  struct HOBJ__ *v6; // esi
  struct EPATHOBJ *v8; // [esp+0h] [ebp-C0h]
  struct EBOX *v9; // [esp+4h] [ebp-BCh]
  struct OBJECT *v10; // [esp+10h] [ebp-B0h] BYREF
  int v11; // [esp+14h] [ebp-ACh]
  int v12; // [esp+18h] [ebp-A8h]
  int v13; // [esp+1Ch] [ebp-A4h]
  _BYTE v14[8]; // [esp+20h] [ebp-A0h] BYREF
  int v15; // [esp+28h] [ebp-98h]
  _DWORD v16[21]; // [esp+68h] [ebp-58h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v14);
  if ( !v15 )
    goto LABEL_2;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ( ((unsigned int)a1 & 0xF8000000) != 0 && ((unsigned int)a1 & 0xF8000000) != -134217728
    || (a4 & 0xF8000000) != 0 && (a4 & 0xF8000000) != 0xF8000000
    || (a3 & 0xF8000000) != 0 && (a3 & 0xF8000000) != 0xF8000000
    || (a2 & 0xF8000000) != 0 && (a2 & 0xF8000000) != 0xF8000000 )
  {
    EngSetLastError(0x57u);
    goto LABEL_23;
  }
  LOBYTE(v4) = ((unsigned int)a1 & 0xF8000000) != 0;
  EBOX::EBOX((EBOX *)v16, (struct ERECTL *)&v10, v4);
  if ( v16[0] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
    v5 = RGNOBJ::vDeleteRGNOBJ;
    if ( v10 )
      goto LABEL_12;
    EngSetLastError(8u);
    v6 = 0;
  }
  else
  {
    if ( !bEllipse(v8, v9) || !EPATHOBJ::bFlatten((EPATHOBJ *)v14) )
    {
LABEL_2:
      EngSetLastError(8u);
LABEL_23:
      v6 = 0;
      goto LABEL_24;
    }
    v6 = 0;
    v11 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v10, (struct EPATHOBJ *)v14, 1u, 0);
    v5 = RGNOBJ::vDeleteRGNOBJ;
    if ( v10 )
    {
      RGNOBJ::vTighten((RGNOBJ *)&v10);
LABEL_12:
      v6 = RGNOBJ::hrgnAssociate(&v10);
      if ( !v6 )
        v5((RGNOBJ *)&v10);
      goto LABEL_15;
    }
    EngSetLastError(8u);
  }
LABEL_15:
  if ( v11 == 1 )
    v5((RGNOBJ *)&v10);
LABEL_24:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v14);
  return v6;
}
