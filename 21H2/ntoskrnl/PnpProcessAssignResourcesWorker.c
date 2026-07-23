/*
 * XREFs of PnpProcessAssignResourcesWorker @ 0x140740930
 * Callers:
 *     PnpProcessAssignResources @ 0x14074074C (PnpProcessAssignResources.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PnpProcessAssignResourcesWorker(__int64 a1, _DWORD *a2)
{
  __int64 i; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v8; // rcx

  for ( i = a1; ; i = v5 )
  {
    if ( *a2 )
    {
      if ( (*(_DWORD *)(i + 396) & 0x2000) != 0 )
      {
        v6 = *(unsigned int *)(i + 404);
        if ( (unsigned int)v6 <= 0x24 )
        {
          v8 = 0x1200001000LL;
          if ( _bittest64(&v8, v6) )
            PipClearDevNodeProblem(i);
        }
      }
    }
    if ( (*(_DWORD *)(i + 396) & 0x6000) == 0 && *(_DWORD *)(i + 300) == 771 )
      *(_QWORD *)&a2[2 * a2[1]++ + 2] = *(_QWORD *)(i + 32);
    v5 = *(_QWORD *)(i + 8);
    if ( !v5 )
      break;
LABEL_9:
    ;
  }
  while ( i != a1 )
  {
    v5 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
      goto LABEL_9;
    if ( *(_QWORD *)(i + 16) )
      i = *(_QWORD *)(i + 16);
  }
  return 0LL;
}
