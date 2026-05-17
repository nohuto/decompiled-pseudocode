/*
 * XREFs of _AVrfpClearVerifiedExports@8 @ 0x4B338B2B
 * Callers:
 *     _AVrfpDllUnloadNotificationInternal@4 @ 0x4B338CF6 (_AVrfpDllUnloadNotificationInternal@4.c)
 * Callees:
 *     <none>
 */

char __fastcall AVrfpClearVerifiedExports(_DWORD *a1, int a2)
{
  char v2; // bl
  int v3; // esi
  unsigned int v4; // edx
  _DWORD *v5; // eax
  unsigned int v6; // ecx

  v2 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 32);
  if ( *a1 )
  {
    v5 = a1;
    do
    {
      v6 = v5[1];
      if ( v6 >= *(_DWORD *)(a2 + 24) && v6 < v4 )
      {
        v5[1] = 0;
        v2 = 1;
      }
      ++v3;
      v5 = &a1[3 * v3];
    }
    while ( *v5 );
  }
  return v2;
}
