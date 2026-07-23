/*
 * XREFs of HalpQueryDebuggerInformation @ 0x1409B64CC
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryDebuggerInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  __int64 *v3; // rbx
  int v4; // esi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  char *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r9d
  int v15; // r8d
  unsigned int v16; // eax
  const wchar_t *v17; // r8

  *a3 = 4;
  v3 = (__int64 *)qword_140C48DA8;
  v4 = 0;
  if ( (__int64 *)qword_140C48DA8 == &qword_140C48DA8 )
    return 3221225473LL;
  do
  {
    v9 = v3[2];
    v10 = *a3;
    v11 = *(_DWORD *)(v9 + 220);
    v12 = (char *)a1 + v10;
    if ( v11 )
    {
      if ( v11 != 1 )
        return 3221225473LL;
      v14 = *(_DWORD *)(v9 + 232) + 2;
      v15 = *(_DWORD *)(v9 + 232) + 22;
      v16 = v15 + v10;
      *a3 = v16;
      if ( v16 <= a2 )
      {
        *(_DWORD *)v12 = 1;
        *((_DWORD *)v12 + 1) = v15;
        *((_DWORD *)v12 + 2) = *(_DWORD *)(v9 + 232);
        if ( *(_DWORD *)(v9 + 232) )
        {
          v17 = *(const wchar_t **)(v9 + 224);
          if ( v17 )
            wcscpy_s((wchar_t *)v12 + 6, (unsigned __int64)v14 >> 1, v17);
        }
      }
    }
    else
    {
      v13 = v10 + 20;
      *a3 = v13;
      if ( v13 <= a2 )
      {
        *(_DWORD *)v12 = 0;
        *((_DWORD *)v12 + 1) = 20;
        *((_DWORD *)v12 + 3) = *(_DWORD *)v9;
        *((_DWORD *)v12 + 4) = *(_DWORD *)(v9 + 4);
        *((_WORD *)v12 + 4) = *(_WORD *)(v9 + 8);
      }
    }
    v3 = (__int64 *)*v3;
    ++v4;
  }
  while ( v3 != &qword_140C48DA8 );
  if ( !v4 )
    return 3221225473LL;
  if ( *a3 > a2 )
    return 2147483653LL;
  *a1 = DevicesList;
  return 0LL;
}
