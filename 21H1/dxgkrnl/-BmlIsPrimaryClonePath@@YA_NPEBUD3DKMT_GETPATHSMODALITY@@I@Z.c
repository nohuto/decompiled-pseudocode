/*
 * XREFs of ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00DF2C8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00E02B8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsPrimaryClonePath(const struct D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  unsigned __int16 v3; // r9
  __int64 v4; // r8
  int v5; // ebx
  int v6; // r11d
  int v7; // r8d
  __int64 v8; // rdx

  v3 = 0;
  v4 = 272LL * a2;
  v5 = *(_DWORD *)((char *)a1 + v4 + 64);
  v6 = *(_DWORD *)((char *)a1 + v4 + 68);
  v7 = *(_DWORD *)((char *)a1 + v4 + 72);
  while ( 1 )
  {
    v8 = 272LL * v3;
    if ( *(_DWORD *)((char *)a1 + v8 + 64) == v5
      && *(_DWORD *)((char *)a1 + v8 + 68) == v6
      && *(_DWORD *)((char *)a1 + v8 + 72) == v7 )
    {
      break;
    }
    ++v3;
  }
  return v3 == a2;
}
