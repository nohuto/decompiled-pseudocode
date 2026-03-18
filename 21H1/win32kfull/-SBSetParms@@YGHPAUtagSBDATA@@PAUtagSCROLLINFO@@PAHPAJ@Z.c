/*
 * XREFs of ?SBSetParms@@YGHPAUtagSBDATA@@PAUtagSCROLLINFO@@PAHPAJ@Z @ 0x8DEDC
 * Callers:
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge SBSetParms@<eax>(
        _DWORD *a1@<edx>,
        int *a2@<ecx>,
        struct tagSBDATA *a3,
        struct tagSCROLLINFO *a4,
        int *a5,
        int *a6)
{
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  bool v17; // zf
  BOOL v19; // [esp+Ch] [ebp-4h]

  v19 = 0;
  v8 = a1[1];
  if ( (v8 & 0x1000) != 0 )
    *(_DWORD *)a4 = a2[3];
  if ( (v8 & 1) != 0 )
  {
    v9 = a1[2];
    v10 = a1[3];
    v19 = v9 == v10;
    if ( v9 > v10 )
    {
      a1[3] = v9;
      v10 = v9;
    }
    if ( *a2 != v9 || a2[1] != v10 )
    {
      *a2 = v9;
      a2[1] = a1[3];
      v8 = a1[1];
      if ( (v8 & 2) == 0 )
      {
        v8 |= 2u;
        a1[1] = v8;
        a1[4] = a2[2];
      }
      if ( (v8 & 4) == 0 )
      {
        v8 |= 4u;
        a1[1] = v8;
        a1[5] = a2[3];
      }
      v19 = 1;
    }
  }
  if ( (v8 & 2) != 0 )
  {
    v11 = a1[4];
    v12 = a2[1] - *a2;
    v13 = (HIDWORD(v12) ^ v12) - HIDWORD(v12) + 1;
    if ( v11 > v13 )
    {
      a1[4] = v13;
      v11 = v13;
    }
    if ( a2[2] != v11 )
    {
      a2[2] = v11;
      v8 = a1[1];
      if ( (v8 & 4) == 0 )
      {
        v8 |= 4u;
        a1[1] = v8;
        a1[5] = a2[3];
      }
      v19 = 1;
    }
  }
  if ( (v8 & 4) != 0 )
  {
    v14 = *a2;
    v15 = a2[1] - (a2[2] != 0 ? a2[2] - 1 : 0);
    v16 = a1[5];
    if ( v16 < *a2 )
    {
      a1[5] = v14;
    }
    else
    {
      v14 = a1[5];
      if ( v16 > v15 )
      {
        a1[5] = v15;
        v14 = v15;
      }
    }
    if ( a2[3] != v14 )
    {
      a2[3] = v14;
      v8 = a1[1];
      v19 = 1;
    }
  }
  if ( (v8 & 0x1000) == 0 )
    *(_DWORD *)a4 = a2[3];
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 2) == 0 )
      return v19;
    goto LABEL_22;
  }
  v17 = *a2 == a2[1];
  *(_DWORD *)a3 = *a2 != a2[1];
  if ( !v17 )
LABEL_22:
    *(_DWORD *)a3 = a2[2] <= a2[1] - *a2;
  return v19;
}
