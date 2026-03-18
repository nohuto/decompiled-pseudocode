/*
 * XREFs of SdbpCheckKObject @ 0x14074DF08
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140752C38 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     SdbpCheckForMatch @ 0x14074DA78 (SdbpCheckForMatch.c)
 *     SdbpReleaseSearchDBContext @ 0x14074DDDC (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x14074F594 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x140751C28 (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x140754010 (SdbpCreateSearchDBContext.c)
 *     SdbpMatchAcpi @ 0x1407CED28 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407CED7C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407CEDD0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407CEE24 (SdbpMatchCpu.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int SearchDBContext; // ebx
  void *v11; // rsi
  __int64 v12; // r15
  _QWORD *v14; // rdi
  int v15; // eax
  _QWORD v16[18]; // [rsp+30h] [rbp-51h] BYREF
  int v17; // [rsp+D0h] [rbp+4Fh] BYREF
  void *v18; // [rsp+E0h] [rbp+5Fh] BYREF
  int v19; // [rsp+E8h] [rbp+67h] BYREF
  int v20; // [rsp+ECh] [rbp+6Bh]

  v20 = HIDWORD(a4);
  memset(v16, 0, 0x60uLL);
  v19 = 0;
  SearchDBContext = 0;
  v17 = 0;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 8);
  v18 = 0LL;
  if ( !a3 || (v15 = AslFileMappingCreate((unsigned int)&v18, a3, -1, a5, a6), v11 = v18, v15 >= 0) )
  {
    memset((char *)v16 + 4, 0, 0x5CuLL);
    LODWORD(v16[0]) = 26;
    SearchDBContext = SdbpCreateSearchDBContext(v16, v11);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, v12, a2, (__int64)v16, &v17, (__int64)&v19);
      if ( SearchDBContext )
      {
        v14 = a7;
        if ( a7 )
        {
          SearchDBContext = SdbpMatchAcpi(v12, a2, *a7);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(v12, a2, v14[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(v12, a2, v14[2]);
              if ( SearchDBContext )
                SearchDBContext = SdbpMatchCpu(v12, a2, v14[3]);
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext(v16);
  AslFileMappingDelete(v11);
  return SearchDBContext;
}
