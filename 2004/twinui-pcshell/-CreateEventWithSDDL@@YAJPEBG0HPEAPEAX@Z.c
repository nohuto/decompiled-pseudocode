/*
 * XREFs of ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1802CA8B4
 * Callers:
 *     _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator() @ 0x1802CA4E8 (_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator().c)
 *     _lambda_1c848fc40f8d66460ef5049a4e343f17_::operator() @ 0x1802DB294 (_lambda_1c848fc40f8d66460ef5049a4e343f17_--operator().c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CreateEventWithSDDL(LPCWSTR lpName, const unsigned __int16 *a2, __int64 a3, void **a4)
{
  unsigned int v4; // ebx
  bool v7; // r15
  unsigned int Error; // eax
  HANDLE v9; // rax
  const char *v10; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+28h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-20h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HLOCAL hMem; // [rsp+98h] [rbp+48h]
  ULONG SecurityDescriptorSize; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0;
  v13 = 1;
  *a4 = 0LL;
  hMem = 0LL;
  SecurityDescriptorSize = 0;
  SecurityDescriptor = 0LL;
  v7 = !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0xFFFFFFFFF;;;WD)(A;;0xFFFFFFFFF;;;AC)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize);
  if ( v13 )
    hMem = SecurityDescriptor;
  if ( v7 )
  {
    Error = ResultFromKnownLastError();
  }
  else
  {
    *(_QWORD *)&EventAttributes.nLength = 24LL;
    *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
    EventAttributes.lpSecurityDescriptor = hMem;
    v9 = CreateEventW(&EventAttributes, 1, 0, lpName);
    *a4 = v9;
    if ( v9 )
      goto LABEL_8;
    Error = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x168,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
              v10);
  }
  v4 = Error;
LABEL_8:
  if ( hMem )
    LocalFree(hMem);
  return v4;
}
