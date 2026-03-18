/*
 * XREFs of KsepDbGetDriverShimsInternal @ 0x14075C380
 * Callers:
 *     KsepDbGetDriverShims @ 0x14075C460 (KsepDbGetDriverShims.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1402D84BC (KsepPoolAllocatePaged.c)
 *     SdbGetDatabaseMatchEx @ 0x14075B6A4 (SdbGetDatabaseMatchEx.c)
 *     KsepDbFreeDriverShims @ 0x14075C424 (KsepDbFreeDriverShims.c)
 *     SdbFindNextTag @ 0x14078EE18 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 *     SdbTagRefToTagID @ 0x140843CD4 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x140963878 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140A1329C (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetDriverShimsInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7)
{
  _OWORD *Paged; // rsi
  _DWORD *v8; // r13
  const wchar_t *v10; // r8
  __int64 v11; // rax
  unsigned int DatabaseMatch; // eax
  int SdbString; // ebx
  __int64 v15; // rdi
  unsigned int FirstTag; // eax
  __int64 v17; // rbx
  unsigned int NextTag; // eax
  __int64 i; // r15
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ebp
  __int128 v27; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+18h] BYREF

  Paged = 0LL;
  v8 = a7;
  v10 = *(const wchar_t **)(a3 + 8);
  *(_QWORD *)&v27 = 0LL;
  *a6 = 0LL;
  v11 = a5;
  v29 = 0;
  *v8 = 0;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 0, v10, a4, a4, v11, a2);
  if ( !DatabaseMatch
    || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v27, &v29)
    || (v15 = v27, (FirstTag = SdbFindFirstTag(v27, v29, 28710LL)) == 0) )
  {
    SdbString = -1073741275;
LABEL_3:
    KsepDbFreeDriverShims(Paged);
    return (unsigned int)SdbString;
  }
  LODWORD(v17) = 0;
  do
  {
    FirstTag = SdbFindNextTag(v15, v29, FirstTag);
    v17 = (unsigned int)(v17 + 1);
  }
  while ( FirstTag );
  *v8 = v17;
  Paged = KsepPoolAllocatePaged(80 * v17);
  if ( !Paged )
  {
    SdbString = -1073741801;
    goto LABEL_3;
  }
  NextTag = SdbFindFirstTag(v15, v29, 28710LL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v26 = NextTag;
    if ( !NextTag )
      break;
    if ( (unsigned int)i < *v8 )
    {
      v20 = SdbFindFirstTag(v15, NextTag, 36880LL);
      if ( v20 )
      {
        v27 = 0LL;
        Paged[5 * i] = *(_OWORD *)SdbReadGUIDTag(v28, v15, v20, &v27);
      }
      v21 = SdbFindFirstTag(v15, v26, 24577LL);
      v22 = 5 * i;
      if ( v21 )
      {
        SdbString = KsepDbGetSdbString(v15, v21, &Paged[v22 + 1]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v23 = SdbFindFirstTag(v15, v26, 24579LL);
      if ( v23 )
      {
        SdbString = KsepDbGetSdbString(v15, v23, &Paged[v22 + 2]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v24 = SdbFindFirstTag(v15, v26, 16407LL);
      if ( v24 )
        LODWORD(Paged[v22 + 4]) = SdbReadDWORDTag(v15, v24, 0LL);
      v25 = SdbFindFirstTag(v15, v26, 24584LL);
      if ( v25 )
      {
        SdbString = KsepDbGetSdbString(v15, v25, &Paged[v22 + 3]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      DWORD1(Paged[v22 + 4]) = 1;
    }
    NextTag = SdbFindNextTag(v15, v29, v26);
  }
  SdbString = 0;
  *a6 = Paged;
  return (unsigned int)SdbString;
}
