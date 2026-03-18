/*
 * XREFs of ?vFixupMetaSpriteList@@YGXAAVPDEVOBJ@@@Z @ 0x1DFB45
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 * Callees:
 *     <none>
 */

void __thiscall vFixupMetaSpriteList(int *this)
{
  int v1; // edi
  int v2; // esi
  int *v3; // eax
  int v4; // edx
  int i; // ecx
  int v6; // eax

  v1 = *this;
  v2 = 0;
  v3 = *(int **)(*this + 108);
  v4 = *v3;
  for ( i = *(_DWORD *)(*v3 + 68); i != *(_DWORD *)(v4 + 772); i = *(_DWORD *)(i + 16) )
  {
    *(_DWORD *)(*(_DWORD *)(i + 8) + 4) = 0;
    v6 = *(_DWORD *)(i + 8);
    if ( i == *(_DWORD *)(v4 + 68) )
      *(_DWORD *)(v1 + 112) = v6;
    else
      *(_DWORD *)(v2 + 4) = v6;
    v2 = *(_DWORD *)(i + 8);
  }
}
