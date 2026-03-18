/*
 * XREFs of ?GetAppliedGammaRampTable@PDEVOBJ@@QAEPAXXZ @ 0xB0152
 * Callers:
 *     _UpdateGammaRampOnDevice@8 @ 0xB00CE (_UpdateGammaRampOnDevice@8.c)
 * Callees:
 *     <none>
 */

void *__thiscall PDEVOBJ::GetAppliedGammaRampTable(PDEVOBJ *this)
{
  int v1; // eax
  int v2; // ecx

  v1 = *(_DWORD *)this;
  v2 = *(_DWORD *)(*(_DWORD *)this + 1056);
  if ( v2 )
    return (void *)v2;
  v2 = *(_DWORD *)(v1 + 1052);
  if ( v2 )
    return (void *)v2;
  else
    return *(void **)(v1 + 1048);
}
