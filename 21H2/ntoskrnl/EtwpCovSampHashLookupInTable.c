/*
 * XREFs of EtwpCovSampHashLookupInTable @ 0x140944E30
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140942FBC (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140944F10 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampHashLookupInTable(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v4; // edi
  int v5; // esi
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // r9d
  int v9; // r8d
  __int64 i; // rcx
  _QWORD *v11; // rdx
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2;
  v8 = *(_DWORD *)(a1 + 20) - 1;
  v9 = a2[7]
     + 37 * (a2[6] + 37 * (a2[5] + 37 * (a2[4] + 37 * (a2[3] + 37 * (a2[2] + 37 * (a2[1] + 37 * (*a2 + 11623883)))))));
  for ( i = v9 & (unsigned int)v8; ; i = v8 & (unsigned int)(v5 + i) )
  {
    v11 = (_QWORD *)(v6 + 8 * i);
    if ( *v11 == v7 )
      break;
    if ( !*v11 )
      goto LABEL_9;
    if ( !v5 )
    {
      v5 = -1640531535 * v9 + 1;
      if ( ((-79 * (_BYTE)v9) & 1) != 0 )
        v5 = -1640531535 * v9;
    }
  }
  v4 = 1;
LABEL_9:
  result = v4;
  *a3 = v11;
  return result;
}
