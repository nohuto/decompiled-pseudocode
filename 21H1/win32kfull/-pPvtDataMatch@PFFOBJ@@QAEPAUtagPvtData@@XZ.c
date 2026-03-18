/*
 * XREFs of ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76
 * Callers:
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bFilterNotEnum@PFEOBJ@@QAEHXZ @ 0x88E14 (-bFilterNotEnum@PFEOBJ@@QAEHXZ.c)
 *     ?GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z @ 0xACE02 (-GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QAEHK@Z @ 0x221562 (-bAddPvtData@PFFOBJ@@QAEHK@Z.c)
 *     ?bEmbedOk@PFEOBJ@@QAEHXZ @ 0x22937D (-bEmbedOk@PFEOBJ@@QAEHXZ.c)
 * Callees:
 *     <none>
 */

struct tagPvtData *__thiscall PFFOBJ::pPvtDataMatch(PFFOBJ *this)
{
  int i; // esi

  for ( i = *(_DWORD *)(*(_DWORD *)this + 92);
        i
     && ((*(_BYTE *)(i + 8) & 4) == 0 || *(HANDLE *)(i + 12) != PsGetCurrentThreadId())
     && *(_DWORD *)(i + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
        i = *(_DWORD *)(i + 16) )
  {
    ;
  }
  return (struct tagPvtData *)i;
}
