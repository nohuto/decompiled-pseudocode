/*
 * XREFs of ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02BA61C
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C00206D8 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011EEF0 (--1PFFMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFFOBJ::bRemovePvtData(PFFOBJ *this, struct tagPvtData *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 i; // rax

  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 144LL);
  if ( !v5 )
    return 0LL;
  if ( (struct tagPvtData *)v5 != a2 )
  {
    for ( i = *(_QWORD *)(v5 + 16); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (struct tagPvtData *)i == a2 )
      {
        if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
          PopThreadGuardedObject((char *)a2 + 24);
        *(_QWORD *)(v5 + 16) = *((_QWORD *)a2 + 2);
        goto LABEL_6;
      }
      v5 = i;
    }
    return 0LL;
  }
  if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
  {
    PopThreadGuardedObject((char *)a2 + 24);
    v4 = *(_QWORD *)this;
  }
  *(_QWORD *)(v4 + 144) = *((_QWORD *)a2 + 2);
LABEL_6:
  Win32FreePool(a2);
  return 1LL;
}
