/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x1409147B4
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     CmpIsThisSameFile @ 0x14071A464 (CmpIsThisSameFile.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 *     CmpUnfreezeHive @ 0x140914CA4 (CmpUnfreezeHive.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 **a4, _QWORD *a5)
{
  char v5; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v13; // r8
  __int64 *NextActiveHive; // rax
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 32);
        LODWORD(v9) = *(_DWORD *)(v9 + 184);
        *a4 = (__int64 *)v10;
        if ( (v9 & 0x40000) != 0 && CmpIsThisSameFile(a2, *(void **)(v10 + 1544)) )
        {
          v11 = *a4;
          if ( ((*a4)[514] & 0x40) == 0 && !_bittest((const signed __int32 *)(*(_QWORD *)(a1 + 8) + 8LL), 0x12u) )
          {
            v5 = 1;
            if ( *((_BYTE *)v11 + 2944) == 1 )
            {
              CmpUnfreezeHive(v11);
              *((_BYTE *)*a4 + 2944) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v15 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v15 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[514] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[193])
          && (v15[514] & 0x40) == 0 )
        {
          v19[0] = 0LL;
          v16 = v15[367];
          *a4 = v15;
          CmpConstructNameWithStatus(v16, v19, v13);
          v17 = v19[0];
          *a5 = v19[0];
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v15 + 205);
          return v17 != 0;
        }
      }
    }
  }
  return v5;
}
