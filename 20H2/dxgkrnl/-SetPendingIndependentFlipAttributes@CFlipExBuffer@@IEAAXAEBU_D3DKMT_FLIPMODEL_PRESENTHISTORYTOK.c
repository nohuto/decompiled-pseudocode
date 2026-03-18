/*
 * XREFs of ?SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C001C0E0
 * Callers:
 *     ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0017648 (-CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SetPendingIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  bool v2; // zf
  _DWORD *v5; // rcx
  __int64 v6; // r10
  signed __int64 v7; // rdx
  int v8; // ecx
  int v9; // edx

  v2 = *((_BYTE *)this + 568) == 0;
  *(RECT *)((char *)this + 408) = a2->SourceRect;
  if ( v2 )
  {
    v5 = (_DWORD *)((char *)this + 428);
    v6 = 6LL;
    v7 = (char *)a2 - (char *)this;
    do
    {
      *v5 = *(_DWORD *)((char *)v5 + v7 + 336);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    *(RECT *)((char *)this + 460) = a2->TargetRect;
    *((_DWORD *)this + 113) = a2->DestWidth;
    *((_DWORD *)this + 114) = a2->DestHeight;
  }
  *((_DWORD *)this + 119) ^= (*((_DWORD *)this + 119) ^ (a2->Flags.Value >> 1)) & 1;
  v8 = *((_DWORD *)this + 119);
  *((_DWORD *)this + 106) = a2->Rotation;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 4;
  *((_DWORD *)this + 119) = v9;
  *((_DWORD *)this + 99) = a2->CustomDuration;
  *((_DWORD *)this + 90) = (a2->Flags.Value >> 7) & 3;
  *((_DWORD *)this + 119) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
  *((_DWORD *)this + 95) = LODWORD(a2->RevealColor[0]);
  *((_DWORD *)this + 96) = LODWORD(a2->RevealColor[1]);
  *((_DWORD *)this + 97) = LODWORD(a2->RevealColor[2]);
  *((_DWORD *)this + 98) = LODWORD(a2->RevealColor[3]);
  *((_DWORD *)this + 101) = a2->ColorSpace;
  *((_BYTE *)this + 572) = 1;
}
