/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x172671
 * Callers:
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?ShouldSendSizing@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x1721F4 (-ShouldSendSizing@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 */

void __thiscall UpdateMoveSizeDataForCancelation(_DWORD *this)
{
  int v2; // edi
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax

  this[3] = this[31];
  this[4] = this[32];
  this[5] = this[33];
  this[6] = this[34];
  v2 = this[49];
  v3 = this[50];
  this[48] = v2;
  if ( ShouldSendSizing(this) || this[52] != v3 )
    v4 = (unsigned int)&loc_80000;
  else
    v4 = 0;
  v5 = this[46] & 0xFFF7FFFF;
  this[51] = v2;
  this[52] = v3;
  v6 = (((unsigned __int16)(v4 | v5) | 0x1000) ^ (unsigned __int16)((v4 | v5 | 0x1000) >> 5)) & 0x100 ^ (v4 | v5 | 0x1000);
  v7 = this[62];
  this[46] = (((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 5)) & 0x200 ^ v6) & 0xFFEFFFFF;
  this[62] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * v7)) & 2;
}
