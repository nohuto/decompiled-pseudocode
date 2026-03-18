/*
 * XREFs of ?bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z @ 0xCDBEA
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 * Callees:
 *     ?bInPrivatePFT@PFFOBJ@@QBEHXZ @ 0x88E46 (-bInPrivatePFT@PFFOBJ@@QBEHXZ.c)
 *     ?vKill@PFFOBJ@@QAEXXZ @ 0xCE698 (-vKill@PFFOBJ@@QAEXXZ.c)
 *     ?bRemovePvtData@PFFOBJ@@QAEHPAUtagPvtData@@@Z @ 0x221D05 (-bRemovePvtData@PFFOBJ@@QAEHPAUtagPvtData@@@Z.c)
 */

BOOL __thiscall PFFOBJ::bDeleteLoadRef(PFFOBJ *this, unsigned int a2, struct tagPvtData *a3, int *a4)
{
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax

  *a4 = 0;
  if ( !PFFOBJ::bInPrivatePFT(this) )
  {
    v6 = *(_DWORD *)this;
    if ( a2 )
    {
      v13 = *(_DWORD *)(v6 + 40);
      if ( v13 )
        *(_DWORD *)(v6 + 40) = v13 - 1;
    }
    else
    {
      v7 = *(_DWORD *)(v6 + 36);
      if ( v7 )
        *(_DWORD *)(v6 + 36) = v7 - 1;
    }
    if ( !*(_QWORD *)(*(_DWORD *)this + 36) )
    {
      PFFOBJ::vKill(this);
      return 1;
    }
    return v5;
  }
  if ( a3 )
  {
    if ( a2 == 128 )
    {
      *(_DWORD *)a3 = v5;
      *((_DWORD *)a3 + 1) = v5;
LABEL_21:
      if ( !*(_QWORD *)a3 )
        PFFOBJ::bRemovePvtData(this, a3);
      v12 = *(_DWORD *)(*(_DWORD *)this + 92);
      if ( !v12 )
        PFFOBJ::vKill(this);
      return v12 == 0;
    }
    v9 = *((_DWORD *)a3 + 2);
    v10 = a2 & v9;
    if ( (a2 & 0x6C) != 0 )
    {
      if ( v10 )
      {
        v11 = *((_DWORD *)a3 + 1);
        if ( v11 )
        {
          *((_DWORD *)a3 + 1) = v11 - 1;
          if ( a2 == 64 )
            *((_DWORD *)a3 + 2) = v9 & 0xFFFFFFBF;
        }
        goto LABEL_21;
      }
    }
    else
    {
      if ( !v10 )
        goto LABEL_21;
      if ( *(_DWORD *)a3 )
      {
        --*(_DWORD *)a3;
        goto LABEL_21;
      }
    }
    *a4 = 1;
    goto LABEL_21;
  }
  return 0;
}
