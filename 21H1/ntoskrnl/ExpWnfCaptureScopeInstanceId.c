/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x140669238
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x140667EEC (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140668790 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1406D3BA0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x1407B7B4C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x1406465B0 (SeCaptureSid.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 SessionById; // rax
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  _QWORD *Tag; // [rsp+20h] [rbp-28h]

  v5 = (_QWORD *)a4;
  LOBYTE(a4) = a3;
  if ( !a2 )
  {
    *v5 = 0LL;
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
      v10 = SeCaptureSid(a2, a3, a3, a4, (int)Tag, 0, (PSID *)a5);
      if ( v10 >= 0 )
        *v5 = *(_QWORD *)a5;
      return (unsigned int)v10;
    }
    if ( v11 == 1 )
    {
      LODWORD(Tag) = 543583831;
      v10 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)a2, 0LL, PsProcessType, a4, Tag, (_DWORD *)a5, 0LL, 0LL);
      if ( v10 >= 0 )
        *v5 = a5;
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)a3 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    v8 = *(_DWORD *)v12;
  }
  else
  {
    v8 = *(_DWORD *)a2;
  }
  *(_DWORD *)(a5 + 8) = v8;
  SessionById = MmGetSessionById(v8);
  *(_QWORD *)a5 = SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *v5 = a5 + 8;
  return 0;
}
