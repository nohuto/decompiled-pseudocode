/*
 * XREFs of EditionGetUserObjectInformationEntryPoint @ 0x1C00681A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetUserObjectInformation @ 0x1C00690B0 (_GetUserObjectInformation.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall EditionGetUserObjectInformationEntryPoint(
        HANDLE Handle,
        int a2,
        volatile void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  ULONG v9; // r8d
  _DWORD *v10; // rdx
  unsigned int UserObjectInformation; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16[3]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v18[24]; // [rsp+58h] [rbp-30h] BYREF

  LODWORD(v16[0]) = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v9 = 4;
  if ( a2 != 1 )
    v9 = 2;
  ProbeForWrite(a3, a4, v9);
  if ( a5 )
  {
    v10 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v16);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v16[0];
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8LL);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v13, v12, v14);
  return UserObjectInformation;
}
