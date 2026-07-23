/*
 * XREFs of PssNtQuerySnapshot @ 0x1801145D0
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180114880 (PssNtValidateDescriptor.c)
 *     PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION @ 0x180116BE0 (PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION.c)
 */

__int64 __fastcall PssNtQuerySnapshot(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned int v9; // r10d
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  __int64 v19; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    if ( a2 <= 5 )
    {
      if ( a2 == 5 )
      {
        if ( a4 == 8 )
        {
          if ( *(_QWORD *)(a1 + 1008) )
          {
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 992);
            *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 1024);
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      if ( !a2 )
      {
        if ( a4 == 240 )
          return PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION(a1, a3);
        return 3221225476LL;
      }
      v10 = a2 - 1;
      if ( !v10 )
      {
        if ( a4 == 8 )
        {
          v14 = *(_QWORD *)(a1 + 872);
          if ( v14 )
          {
            *(_QWORD *)a3 = v14;
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            if ( a4 == 4 )
            {
              if ( *(_QWORD *)(a1 + 976) )
              {
                *(_DWORD *)a3 = *(_DWORD *)(a1 + 960);
                return v9;
              }
              return (unsigned int)-1073741275;
            }
            return 3221225476LL;
          }
          return 3221225475LL;
        }
        if ( a4 != 4 )
          return 3221225476LL;
        if ( !*(_QWORD *)(a1 + 920) )
          return (unsigned int)-1073741275;
        v13 = *(_DWORD *)(a1 + 912);
      }
      else
      {
        if ( a4 != 4 )
          return 3221225476LL;
        if ( !*(_QWORD *)(a1 + 896) )
          return (unsigned int)-1073741275;
        v13 = *(_DWORD *)(a1 + 888);
      }
      *(_DWORD *)a3 = v13;
      return v9;
    }
    v15 = a2 - 6;
    if ( !v15 )
    {
      if ( a4 == 16 )
      {
        v19 = *(_QWORD *)(a1 + 944);
        if ( v19 )
        {
          *(_QWORD *)a3 = v19;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 936);
          return v9;
        }
        return (unsigned int)-1073741275;
      }
      return 3221225476LL;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( a4 == 40 )
          {
            if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
            {
              *(_OWORD *)a3 = *(_OWORD *)(a1 + 232);
              *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 248);
              *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 264);
              return v9;
            }
            return (unsigned int)-1073741275;
          }
          return 3221225476LL;
        }
        if ( v18 == 1 )
        {
          if ( a4 == 16 )
          {
            if ( (*(_BYTE *)(a1 + 4) & 0x10) != 0 )
            {
              *(_OWORD *)a3 = *(_OWORD *)(a1 + 1128);
              return v9;
            }
            return (unsigned int)-1073741275;
          }
          return 3221225476LL;
        }
        return 3221225475LL;
      }
      if ( a4 != 112 )
        return 3221225476LL;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 120);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 136);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 152);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 168);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 184);
      *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 200);
      *(_OWORD *)(a3 + 96) = *(_OWORD *)(a1 + 216);
    }
    else
    {
      if ( a4 != 96 )
        return 3221225476LL;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 1032);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 1048);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 1064);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 1080);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 1096);
      *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 1112);
    }
    return 0LL;
  }
  return result;
}
