/*
 * XREFs of EtwpCovSampStackHashLookup @ 0x140946120
 * Callers:
 *     EtwpCovSampStackHashCheck @ 0x140945EE4 (EtwpCovSampStackHashCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampStackHashLookup(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // r11d
  unsigned int i; // r10d
  _DWORD *v6; // rax

  v3 = 0;
  v4 = 0;
  for ( i = a2 & (*(_DWORD *)(a1 + 4) - 1); ; i = (*(_DWORD *)(a1 + 4) - 1) & (v4 + i) )
  {
    v6 = (_DWORD *)(a1 + 4 * (i + 2LL));
    if ( *v6 == a2 )
      break;
    if ( !*v6 )
      goto LABEL_9;
    if ( !v4 )
    {
      v4 = -1640531535 * a2 + 1;
      if ( ((-79 * (_BYTE)a2) & 1) != 0 )
        v4 = -1640531535 * a2;
    }
  }
  v3 = 1;
LABEL_9:
  *a3 = v6;
  return v3;
}
