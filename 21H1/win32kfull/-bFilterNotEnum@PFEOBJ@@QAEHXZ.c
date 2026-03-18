/*
 * XREFs of ?bFilterNotEnum@PFEOBJ@@QAEHXZ @ 0x88E14
 * Callers:
 *     ?bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z @ 0x88D68 (-bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?bInPrivatePFT@PFFOBJ@@QBEHXZ @ 0x88E46 (-bInPrivatePFT@PFFOBJ@@QBEHXZ.c)
 *     ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76 (-pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ.c)
 */

BOOL __thiscall PFEOBJ::bFilterNotEnum(PFEOBJ *this)
{
  int v1; // esi
  int v2; // edx
  struct tagPvtData *v4; // eax
  _DWORD v5[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = 1;
  v5[0] = **(_DWORD **)this;
  if ( !PFFOBJ::bInPrivatePFT((PFFOBJ *)v5) )
    return *(_DWORD *)(v2 + 36) == 0;
  v4 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v5);
  if ( v4 )
    return *((_DWORD *)v4 + 1) != 0;
  return v1;
}
