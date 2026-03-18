/*
 * XREFs of ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1C01311E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0071E78 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C01330A8 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvGetGlyphMode(struct DHPDEV__ *a1, struct _FONTOBJ *a2)
{
  UMPDOBJ *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v10; // [rsp+38h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h]
  struct _FONTOBJ *v13; // [rsp+60h] [rbp-10h] BYREF

  v9 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  v4 = v10;
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( !v10
    || (*(_QWORD *)&v11 = 0x2500000028LL,
        *(_QWORD *)&v12 = *(_QWORD *)v10,
        *((_QWORD *)&v12 + 1) = a1,
        v13 = a2,
        !(unsigned int)UMPDOBJ::pfo(v10, &v13))
    || (LODWORD(Size) = 4, v5 = UMPDOBJ::Thunk(v4, &v11, 0x28u, &v9, Size), v6 = v9, v5 == -1) )
  {
    v6 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v10);
  return v6;
}
