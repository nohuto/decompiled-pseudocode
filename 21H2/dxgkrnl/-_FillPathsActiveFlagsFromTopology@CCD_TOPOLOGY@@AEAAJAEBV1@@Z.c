/*
 * XREFs of ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C013508C
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C0131E04 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C016B074 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C016D890 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013527C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  unsigned int j; // esi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  int v12; // ecx
  int v13; // edx

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
    if ( *(__int64 *)PathDescriptor < 0 )
    {
      for ( j = 0; ; ++j )
      {
        v9 = *((_QWORD *)this + 8);
        v10 = v9 ? *(_WORD *)(v9 + 20) : 0;
        if ( j >= v10 )
          break;
        v11 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v11 + 4)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v11 + 5) )
        {
          v12 = *((_DWORD *)v11 + 7);
          if ( *((_DWORD *)PathDescriptor + 7) == v12 )
            *(_QWORD *)v11 |= 0x2000000000000000uLL;
          v13 = *((_DWORD *)v11 + 6);
          if ( *((_DWORD *)PathDescriptor + 6) == v13 )
            *(_QWORD *)v11 |= 0x4000000000000000uLL;
          if ( *((_DWORD *)PathDescriptor + 7) == v12 && *((_DWORD *)PathDescriptor + 6) == v13 )
            *(_QWORD *)v11 |= 0x8000000000000000uLL;
        }
      }
    }
  }
  return 0LL;
}
