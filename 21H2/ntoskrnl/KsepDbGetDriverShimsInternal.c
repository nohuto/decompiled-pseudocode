/*
 * XREFs of KsepDbGetDriverShimsInternal @ 0x14075904C
 * Callers:
 *     KsepDbGetDriverShims @ 0x140758E20 (KsepDbGetDriverShims.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14037129C (KsepPoolAllocatePaged.c)
 *     KsepDbFreeDriverShims @ 0x1407590F0 (KsepDbFreeDriverShims.c)
 *     SdbGetDatabaseMatchEx @ 0x140759BC8 (SdbGetDatabaseMatchEx.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14075A008 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbTagRefToTagID @ 0x1407C25B0 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x1408BF948 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140966430 (SdbReadGUIDTag.c)
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
  __int64 v10; // rax
  unsigned int DatabaseMatch; // eax
  int SdbString; // ebx
  __int64 v14; // rdi
  unsigned int FirstTag; // eax
  __int64 v16; // rbx
  unsigned int NextTag; // eax
  __int64 i; // r15
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // ebp
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int128 v29; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+18h] BYREF

  Paged = 0LL;
  v8 = a7;
  *(_QWORD *)&v29 = 0LL;
  *a6 = 0LL;
  v10 = a5;
  v31 = 0;
  *v8 = 0;
  v28 = a2;
  v27 = v10;
  v26 = a4;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 0LL);
  if ( !DatabaseMatch
    || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v29, &v31)
    || (v14 = v29, (FirstTag = SdbFindFirstTag(v29, v31, 28710LL)) == 0) )
  {
    SdbString = -1073741275;
LABEL_3:
    KsepDbFreeDriverShims(Paged, (unsigned int)*v8);
    return (unsigned int)SdbString;
  }
  LODWORD(v16) = 0;
  do
  {
    FirstTag = SdbFindNextTag(v14, v31, FirstTag);
    v16 = (unsigned int)(v16 + 1);
  }
  while ( FirstTag );
  *v8 = v16;
  Paged = KsepPoolAllocatePaged(80 * v16);
  if ( !Paged )
  {
    SdbString = -1073741801;
    goto LABEL_3;
  }
  NextTag = SdbFindFirstTag(v14, v31, 28710LL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v25 = NextTag;
    if ( !NextTag )
      break;
    if ( (unsigned int)i < *v8 )
    {
      v19 = SdbFindFirstTag(v14, NextTag, 36880LL);
      if ( v19 )
      {
        v29 = 0LL;
        Paged[5 * i] = *(_OWORD *)SdbReadGUIDTag(v30, v14, v19, &v29, v26, v27, v28);
      }
      v20 = SdbFindFirstTag(v14, v25, 24577LL);
      v21 = 5 * i;
      if ( v20 )
      {
        SdbString = KsepDbGetSdbString(v14, v20, &Paged[v21 + 1]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v22 = SdbFindFirstTag(v14, v25, 24579LL);
      if ( v22 )
      {
        SdbString = KsepDbGetSdbString(v14, v22, &Paged[v21 + 2]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v23 = SdbFindFirstTag(v14, v25, 16407LL);
      if ( v23 )
        LODWORD(Paged[v21 + 4]) = SdbReadDWORDTag(v14, v23, 0LL);
      v24 = SdbFindFirstTag(v14, v25, 24584LL);
      if ( v24 )
      {
        SdbString = KsepDbGetSdbString(v14, v24, &Paged[v21 + 3]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      DWORD1(Paged[v21 + 4]) = 1;
    }
    NextTag = SdbFindNextTag(v14, v31, v25);
  }
  SdbString = 0;
  *a6 = Paged;
  return (unsigned int)SdbString;
}
