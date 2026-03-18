/*
 * XREFs of ?bAddPvtData@PFFOBJ@@QAEHK@Z @ 0x221562
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z @ 0xDDB5C (-chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 *     ??0PFFMEMOBJ@@QAE@PAVPFF@@KKPAVPFT@@@Z @ 0xDF222 (--0PFFMEMOBJ@@QAE@PAVPFF@@KKPAVPFT@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76 (-pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ.c)
 */

int __thiscall PFFOBJ::bAddPvtData(PFFOBJ *this, char a2)
{
  struct tagPvtData *v3; // eax
  int result; // eax
  _DWORD *v5; // esi
  int v6; // ecx
  bool v7; // zf
  unsigned int CurrentThreadId; // eax
  unsigned int v9; // [esp+10h] [ebp+8h]

  v3 = PFFOBJ::pPvtDataMatch(this);
  if ( v3 )
  {
    if ( (a2 & 0x2C) != 0 )
      ++*((_DWORD *)v3 + 1);
    else
      ++*(_DWORD *)v3;
    *((_DWORD *)v3 + 2) |= a2 & 0x3C;
    *((_DWORD *)this + 1) = 1;
    return 1;
  }
  else
  {
    v5 = PALLOCMEM2(0x24u, 1886811207, 1);
    if ( v5 )
    {
      v5[2] = a2 & 0x3C;
      v6 = a2 & 0x2C;
      v7 = (a2 & 4) == 0;
      v9 = a2 & 4;
      *v5 = v6 == 0;
      v5[1] = v6 != 0;
      if ( v7 )
        CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      else
        CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      v5[3] = CurrentThreadId;
      if ( v9 )
        PushThreadGuardedObject(v5 + 5, *(_DWORD *)this, CleanupPvtData);
      v5[4] = *(_DWORD *)(*(_DWORD *)this + 92);
      *(_DWORD *)(*(_DWORD *)this + 92) = v5;
      result = 1;
      *((_DWORD *)this + 1) = 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
