/*
 * XREFs of NtQuerySystemInformationEx @ 0x1406BE140
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

int __fastcall NtQuerySystemInformationEx(
        signed int a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx

  if ( !a2 || !a3 )
    return -1073741811;
  if ( a1 <= 121 )
  {
    if ( a1 != 121 )
    {
      if ( a1 <= 73 )
      {
        if ( a1 != 73 && a1 != 8 && a1 != 23 && a1 != 42 && a1 != 61 )
        {
          if ( a1 != 72 )
            return -1073741821;
          goto LABEL_19;
        }
      }
      else
      {
        v12 = a1 - 83;
        if ( v12 )
        {
          v13 = v12 - 17;
          if ( v13 )
          {
            v14 = v13 - 7;
            if ( !v14 )
              goto LABEL_19;
            if ( v14 != 1 )
              return -1073741821;
          }
        }
      }
    }
    goto LABEL_25;
  }
  if ( a1 <= 180 )
  {
    if ( a1 == 180 )
      goto LABEL_19;
    v17 = a1 - 141;
    if ( v17 )
    {
      v18 = v17 - 19;
      if ( v18 )
      {
        v19 = v18 - 5;
        if ( v19 )
        {
          v20 = v19 - 10;
          if ( v20 )
          {
            if ( v20 != 3 )
              return -1073741821;
          }
        }
        goto LABEL_6;
      }
    }
LABEL_25:
    v9 = 1LL;
    goto LABEL_7;
  }
  v8 = a1 - 181;
  if ( v8 )
  {
    v15 = v8 - 28;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 )
          return -1073741821;
        goto LABEL_6;
      }
LABEL_19:
      v9 = 3LL;
      goto LABEL_7;
    }
  }
LABEL_6:
  v9 = 7LL;
LABEL_7:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (v9 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = a2 + a3;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(a1, a2, a3, a4, a5, a6);
}
