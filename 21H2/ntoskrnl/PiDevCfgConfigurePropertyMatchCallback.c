/*
 * XREFs of PiDevCfgConfigurePropertyMatchCallback @ 0x14094B7C0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

bool __fastcall PiDevCfgConfigurePropertyMatchCallback(_QWORD *Buf2, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  DEVPROPKEY **v4; // r9
  unsigned int v5; // r8d
  DEVPROPKEY *v6; // r10
  __int64 v7; // rdx

  v2 = 1;
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
    goto LABEL_11;
  v3 = *Buf2 - *(_QWORD *)off_140D3B790[0];
  if ( *Buf2 == *(_QWORD *)off_140D3B790[0] )
    v3 = Buf2[1] - *(_QWORD *)off_140D3B790[0]->fmtid.Data4;
  if ( v3 )
  {
LABEL_11:
    if ( *((_DWORD *)Buf1 + 4) == *((_DWORD *)Buf2 + 4) )
      return memcmp(Buf1, Buf2, 0x10uLL) != 0;
  }
  else
  {
    v4 = off_140D3B790;
    v5 = 0;
    while ( 1 )
    {
      v6 = *v4;
      if ( (*v4)->pid == *((_DWORD *)Buf2 + 4) )
      {
        v7 = *(_QWORD *)&v6->fmtid.Data1 - *Buf2;
        if ( *(_QWORD *)&v6->fmtid.Data1 == *Buf2 )
          v7 = *(_QWORD *)v6->fmtid.Data4 - Buf2[1];
        if ( !v7 )
          return 0;
      }
      ++v5;
      ++v4;
      if ( v5 >= 0xA )
        goto LABEL_11;
    }
  }
  return v2;
}
