/*
 * XREFs of ?GetWindowData@@YGJPAUtagWND@@JH_N@Z @ 0x15F023
 * Callers:
 *     _NtUserfnGETWINDOWDATA@28 @ 0xA1A74 (_NtUserfnGETWINDOWDATA@28.c)
 * Callees:
 *     <none>
 */

int __userpurge GetWindowData@<eax>(int a1@<edx>, int a2@<ecx>, struct tagWND *a3, int a4, int a5, bool a6)
{
  int v8; // ecx
  _DWORD *v9; // edi
  char *v10; // esi
  int v11; // edx

  v8 = 0;
  v9 = *(_DWORD **)(a2 + 20);
  v10 = (char *)a3 - v9[40];
  if ( (int)v10 >= 0 )
  {
    if ( (v9[36] & 0x800) != 0 )
      v11 = v9[48] + *(_DWORD *)(*(_DWORD *)(a2 + 12) + 64);
    else
      v11 = v9[48];
    if ( a1 )
    {
      if ( a1 == 2 && (unsigned int)(v10 + 4) <= v9[32] )
        return *(_DWORD *)&v10[v11];
    }
    else if ( (unsigned int)(v10 + 2) <= v9[32] )
    {
      return *(unsigned __int16 *)&v10[v11];
    }
  }
  return v8;
}
