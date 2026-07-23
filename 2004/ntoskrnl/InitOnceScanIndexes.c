/*
 * XREFs of InitOnceScanIndexes @ 0x140744610
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1407443E4 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140744498 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14074451C (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x1407447D4 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140744AC0 (SdbGetFirstChild.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE a1, _DWORD *a2, PVOID *a3)
{
  unsigned int v3; // esi
  char *v6; // r12
  unsigned int FirstChild; // eax
  unsigned int v8; // r14d
  unsigned int i; // eax
  unsigned int v10; // ebp
  unsigned int FirstTag; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // rax

  v3 = 0;
  if ( a2 && a3 )
  {
    v6 = (char *)(a2 + 12);
    memset(a2 + 12, 0, 0x500uLL);
    FirstChild = SdbGetFirstChild(a2, 0LL);
    v8 = FirstChild;
    if ( FirstChild && (unsigned __int16)SdbGetTagFromTagID(a2, FirstChild) == 30722 )
    {
      a2[339] = 0;
      for ( i = SdbFindFirstTag(a2, v8, 30723LL); ; i = SdbFindNextTag((__int64)a2, v8, v10) )
      {
        v10 = i;
        if ( !i )
        {
          *a3 = v6;
          return 1;
        }
        if ( a2[339] == 32 )
          goto LABEL_20;
        FirstTag = SdbFindFirstTag(a2, i, 14338LL);
        if ( !FirstTag )
          goto LABEL_20;
        LOWORD(a2[10 * a2[339] + 13]) = SdbReadWORDTag((__int64)a2, FirstTag, 0);
        v12 = SdbFindFirstTag(a2, v10, 14339LL);
        if ( !v12 )
          goto LABEL_20;
        HIWORD(a2[10 * a2[339] + 13]) = SdbReadWORDTag((__int64)a2, v12, 0);
        v13 = SdbFindFirstTag(a2, v10, 16406LL);
        a2[10 * a2[339] + 20] = v13 ? SdbReadDWORDTag((__int64)a2, v13, 0) : 0;
        v14 = SdbFindFirstTag(a2, v10, 38913LL);
        v15 = (unsigned int)a2[339];
        if ( !v14 )
          break;
        a2[10 * v15 + 12] = v14;
        ++a2[339];
      }
      LOWORD(a2[10 * v15 + 13]) = 0;
    }
LABEL_20:
    AslLogCallPrintf(1LL);
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
