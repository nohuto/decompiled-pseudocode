/*
 * XREFs of MiFaultListPagesRemaining @ 0x140235D44
 * Callers:
 *     MiComputeMaximumFaultCluster @ 0x1402B3F50 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFaultListPagesRemaining(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10

  v1 = a1[2];
  v2 = 1LL;
  if ( (v1 & 1) != 0 )
  {
    v4 = v1 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v4 == 2 )
    {
      v6 = *(_QWORD *)(v4 + 24);
      if ( v6 < *(_QWORD *)(v4 + 16) )
      {
        v7 = *a1;
        v8 = (unsigned __int64 *)(*(_QWORD *)(v4 + 8) + 16 * v6);
        v9 = *v8;
        if ( v7 >= *v8 )
        {
          v10 = v8[1];
          if ( v7 < v10 + v9 )
            return (((*(_DWORD *)v8 & 0xFFF) + v10 + 4095) >> 12)
                 - (((v7 & 0xFFFFFFFFFFFFF000uLL) - (v9 & 0xFFFFFFFFFFFFF000uLL)) >> 12);
        }
      }
    }
  }
  return v2;
}
