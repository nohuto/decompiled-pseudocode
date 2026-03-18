/*
 * XREFs of ACPIPepGetNextPlatformNotification @ 0x1C00B03B4
 * Callers:
 *     ACPIPepWorker @ 0x1C00B06E0 (ACPIPepWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIPepGetNextPlatformNotification(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  int v3; // r10d
  bool v6; // sf
  bool v7; // of
  char v8; // r8
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // edx

  v3 = *(_DWORD *)(a1 + 248);
  *a2 = -1;
  v7 = __OFSUB__(v3, *(_DWORD *)(a1 + 252));
  v6 = v3 - *(_DWORD *)(a1 + 252) < 0;
  if ( v3 == *(_DWORD *)(a1 + 252) )
    return 0;
  v9 = v3 + 1;
  v8 = 1;
  if ( v3 >= *(_DWORD *)(a1 + 252) )
    v9 = v3;
  v10 = 1;
  if ( v3 >= *(_DWORD *)(a1 + 252) )
    v10 = -1;
  *(_DWORD *)(a1 + 248) = v3 + v10;
  *a3 = v6 ^ v7;
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        *a2 = 0;
      else
        *a2 = -1;
    }
    else
    {
      *a2 = 2;
    }
  }
  else
  {
    *a2 = 1;
  }
  return v8;
}
