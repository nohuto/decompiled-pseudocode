/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x140623B18
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x1406227CC (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140623070 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1406F6990 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x1407BACBC (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x1406289EC (SeCaptureSid.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, _DWORD *a2, char a3, __int64 *a4, __int64 a5)
{
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 SessionById; // rax
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  ULONG Tag; // [rsp+20h] [rbp-28h]

  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v7 = a1 - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( !v11 )
    {
      v10 = SeCaptureSid(a2, Tag, 0, a5);
      if ( v10 >= 0 )
        *a4 = *(_QWORD *)a5;
      return (unsigned int)v10;
    }
    if ( v11 == 1 )
    {
      v10 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)a2,
              0,
              (__int64)PsProcessType,
              a3,
              0x20666E57u,
              (_QWORD *)a5,
              0LL,
              0LL);
      if ( v10 >= 0 )
        *a4 = a5;
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    v8 = *(_DWORD *)v12;
  }
  else
  {
    v8 = *a2;
  }
  *(_DWORD *)(a5 + 8) = v8;
  SessionById = MmGetSessionById(v8);
  *(_QWORD *)a5 = SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *a4 = a5 + 8;
  return 0;
}
