/*
 * XREFs of ?chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z @ 0xDDB5C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 * Callees:
 *     ?bLoadIncr@PFFOBJ@@QAEHK@Z @ 0xDDBFA (-bLoadIncr@PFFOBJ@@QAEHK@Z.c)
 *     ?vGetEUDC@PFFOBJ@@QAEXPAU_EUDCLOAD@@@Z @ 0xDDC50 (-vGetEUDC@PFFOBJ@@QAEXPAU_EUDCLOAD@@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QAEHK@Z @ 0x221562 (-bAddPvtData@PFFOBJ@@QAEHK@Z.c)
 */

int __thiscall PFTOBJ::chpfeIncrPFF(struct PFT **this, struct PFF *a2, int *a3, unsigned int a4, struct _EUDCLOAD *a5)
{
  struct PFF *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int *v10; // ecx
  int v12; // eax
  bool v13; // zf
  _DWORD v14[2]; // [esp+Ch] [ebp-Ch] BYREF
  struct PFT **v15; // [esp+14h] [ebp-4h]

  v5 = a2;
  v6 = 0;
  v15 = this;
  v14[0] = a2;
  if ( !a2 )
    return v6;
  v7 = *((_DWORD *)a2 + 8) & 8;
  if ( a5 )
  {
    if ( !v7 )
      return v6;
  }
  else if ( v7 )
  {
    return v6;
  }
  v8 = 1;
  if ( *this != gpPFTPrivate
    || (v12 = PFFOBJ::bAddPvtData((PFFOBJ *)v14, a4), v5 = (struct PFF *)v14[0], v13 = v12 == 0, v9 = 0, !v13) )
  {
    v9 = 1;
  }
  v10 = a3;
  *a3 = v9;
  if ( !v9 )
    return -1;
  if ( a5 )
  {
    if ( !*((_DWORD *)a5 + 1) && *((_DWORD *)v5 + 31) > 2u )
      goto LABEL_22;
    PFFOBJ::vGetEUDC((PFFOBJ *)v14, a5);
  }
  if ( *v15 != gpPFTPrivate && !PFFOBJ::bLoadIncr((PFFOBJ *)v14, a4) )
  {
    v10 = a3;
LABEL_22:
    *v10 = 0;
    return v8;
  }
  return *((_DWORD *)v5 + 31);
}
