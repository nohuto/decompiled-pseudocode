/*
 * XREFs of sub_180031A54 @ 0x180031A54
 * Callers:
 *     sub_180030E60 @ 0x180030E60 (sub_180030E60.c)
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 *     sub_1800328D0 @ 0x1800328D0 (sub_1800328D0.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 */

__int64 __fastcall sub_180031A54(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  void **v5; // r14
  void *v6; // rbp
  DWORD LastError; // ebx
  DWORD v8; // ebx
  unsigned __int64 v9; // r9
  int v10; // ebx
  int v11; // edx
  void **v13; // r14
  void *v14; // rbp
  DWORD v15; // ebx
  DWORD v16; // ebx
  unsigned __int64 v17; // r9
  __int64 v18; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 == 1 )
  {
    v5 = (void **)(a1 + 96 + 8LL * (int)a2);
    v6 = *v5;
    if ( *v5 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v6);
      SetLastError(LastError);
      *v5 = 0LL;
      v6 = 0LL;
    }
    if ( a4 )
    {
      if ( v6 )
      {
        v8 = GetLastError();
        CoTaskMemFree(v6);
        SetLastError(v8);
      }
      *v5 = 0LL;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(a4 + 2 * v9) );
      v10 = sub_180018844(a1, a2, a4, v9, v18, v5);
      if ( v10 < 0 )
      {
        v11 = 486;
LABEL_11:
        sub_180003AB0(
          retaddr,
          v11,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          v10);
        return (unsigned int)v10;
      }
    }
  }
  else
  {
    v13 = (void **)(a1 + 168 + 8LL * (int)a2);
    v14 = *v13;
    if ( *v13 )
    {
      v15 = GetLastError();
      CoTaskMemFree(v14);
      SetLastError(v15);
      *v13 = 0LL;
      v14 = 0LL;
    }
    if ( a4 )
    {
      if ( v14 )
      {
        v16 = GetLastError();
        CoTaskMemFree(v14);
        SetLastError(v16);
      }
      *v13 = 0LL;
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(a4 + 2 * v17) );
      v10 = sub_180018844(a1, a2, a4, v17, v18, v13);
      if ( v10 < 0 )
      {
        v11 = 499;
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
