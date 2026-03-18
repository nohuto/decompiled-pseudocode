/*
 * XREFs of _NtUserSetObjectInformation@16 @ 0x169A74
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __SetUserObjectInformation@16 @ 0x14386C (__SetUserObjectInformation@16.c)
 */

int __stdcall NtUserSetObjectInformation(HANDLE Handle, int a2, _DWORD *Address, SIZE_T Length)
{
  int v4; // esi
  _BYTE v6[8]; // [esp+10h] [ebp-2Ch] BYREF
  PVOID Object; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v4 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( a2 != 7 )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForRead(Address, Length, 1u);
    ms_exc.registration.TryLevel = -2;
    Object = 0;
    if ( ObReferenceObjectByHandle(Handle, 0, 0, 1, &Object, 0) >= 0 )
    {
      if ( SetHandleFlag(Handle, 2, 1) )
      {
        v4 = _SetUserObjectInformation(Handle, a2, Address, Length);
        SetHandleFlag(Handle, 2, 0);
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)8);
      }
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v4;
}
