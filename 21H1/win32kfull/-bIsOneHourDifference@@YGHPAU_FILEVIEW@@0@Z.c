/*
 * XREFs of ?bIsOneHourDifference@@YGHPAU_FILEVIEW@@0@Z @ 0x1E8F1D
 * Callers:
 *     ?bShouldMap@@YGHPAU_FILEVIEW@@0H@Z @ 0x8CC46 (-bShouldMap@@YGHPAU_FILEVIEW@@0H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall bIsOneHourDifference(_QWORD *a1, _QWORD *a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx

  v2 = (*a1 - *a2) >> 32;
  v3 = *(_DWORD *)a1 - *(_DWORD *)a2;
  v4 = 0;
  if ( v2 < 0 )
  {
    v3 = -v3;
    v2 = (unsigned __int64)-__SPAIR64__(v2, v3) >> 32;
  }
  if ( v3 == 1640261632 && v2 == 8 )
    return 1;
  return v4;
}
