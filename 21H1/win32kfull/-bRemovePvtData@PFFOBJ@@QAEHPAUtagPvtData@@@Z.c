/*
 * XREFs of ?bRemovePvtData@PFFOBJ@@QAEHPAUtagPvtData@@@Z @ 0x221D05
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z @ 0xCDBEA (-bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z.c)
 *     ??1PFFMEMOBJ@@QAE@XZ @ 0xDE54C (--1PFFMEMOBJ@@QAE@XZ.c)
 * Callees:
 *     <none>
 */

int __thiscall PFFOBJ::bRemovePvtData(PFFOBJ *this, struct tagPvtData *a2)
{
  int v3; // edx
  int v4; // edi
  int i; // eax

  v3 = *(_DWORD *)this;
  v4 = *(_DWORD *)(*(_DWORD *)this + 92);
  if ( !v4 )
    return 0;
  if ( (struct tagPvtData *)v4 != a2 )
  {
    for ( i = *(_DWORD *)(v4 + 16); i; i = *(_DWORD *)(i + 16) )
    {
      if ( (struct tagPvtData *)i == a2 )
      {
        if ( (*((_BYTE *)a2 + 8) & 4) != 0 )
          PopThreadGuardedObject((char *)a2 + 20);
        *(_DWORD *)(v4 + 16) = *((_DWORD *)a2 + 4);
        goto LABEL_6;
      }
      v4 = i;
    }
    return 0;
  }
  if ( (*((_BYTE *)a2 + 8) & 4) != 0 )
  {
    PopThreadGuardedObject((char *)a2 + 20);
    v3 = *(_DWORD *)this;
  }
  *(_DWORD *)(v3 + 92) = *((_DWORD *)a2 + 4);
LABEL_6:
  Win32FreePool((PATHOBJ *)a2);
  return 1;
}
