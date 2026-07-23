/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x14086E73C
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x14086E884 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     CmpIsThisSameFile @ 0x14066738C (CmpIsThisSameFile.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQuitNextActiveHive @ 0x14072A81C (CmpQuitNextActiveHive.c)
 *     CmpUnfreezeHive @ 0x140730E04 (CmpUnfreezeHive.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 **a4, __int64 *a5)
{
  char v5; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 32);
        LODWORD(v9) = *(_DWORD *)(v9 + 184);
        *a4 = (__int64 *)v10;
        if ( (v9 & 0x40000) != 0 && CmpIsThisSameFile(a2, *(void **)(v10 + 1536)) )
        {
          v11 = *a4;
          if ( ((*a4)[519] & 0x40) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x40000) == 0 )
          {
            v5 = 1;
            if ( *((_BYTE *)v11 + 2936) == 1 )
            {
              CmpUnfreezeHive(v11);
              *((_BYTE *)*a4 + 2936) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v14 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v14 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[519] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[192])
          && (v14[519] & 0x40) == 0 )
        {
          v15 = v14[366];
          *a4 = v14;
          v16 = CmpConstructName(v15);
          *a5 = v16;
          CmpQuitNextActiveHive((struct _EX_RUNDOWN_REF *)v14);
          return v16 != 0;
        }
      }
    }
  }
  return v5;
}
