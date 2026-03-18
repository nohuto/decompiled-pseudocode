/*
 * XREFs of _EditionGetUserObjectInformationEntryPoint@20 @ 0xF2822
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __GetUserObjectInformation@20 @ 0x8084C (__GetUserObjectInformation@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _SetLastNtError@4 @ 0x1B6D51 (_SetLastNtError@4.c)
 */

int __stdcall EditionGetUserObjectInformationEntryPoint(
        HANDLE Handle,
        int a2,
        volatile void *Address,
        SIZE_T Length,
        int *Object)
{
  int UserObjectInformation; // esi
  int *v6; // edi
  int *v7; // ecx
  _BYTE v9[8]; // [esp+10h] [ebp-34h] BYREF
  int v10; // [esp+28h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  UserObjectInformation = 0;
  v10 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  ms_exc.registration.TryLevel = 0;
  ProbeForWrite(Address, Length, 1u);
  v6 = Object;
  if ( Object )
  {
    v7 = Object;
    if ( (unsigned int)Object >= _MmUserProbeAddress )
      v7 = (int *)_MmUserProbeAddress;
    *v7 = *v7;
  }
  ms_exc.registration.TryLevel = -2;
  Object = 0;
  if ( ObReferenceObjectByHandle(Handle, 0, 0, 1, (PVOID *)&Object, 0) >= 0 )
  {
    if ( SetHandleFlag(Handle, 2, 1) )
    {
      UserObjectInformation = _GetUserObjectInformation(Handle, a2, (ULONG *)Address, Length, &v10);
      SetHandleFlag(Handle, 2, 0);
      if ( v6 )
      {
        *v6 = v10;
        ms_exc.registration.TryLevel = -2;
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)8);
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  UserSessionSwitchLeaveCrit();
  return UserObjectInformation;
}
