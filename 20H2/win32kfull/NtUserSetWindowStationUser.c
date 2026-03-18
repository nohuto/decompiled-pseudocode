/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C01246F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetWindowStationUser @ 0x1C012481C (_SetWindowStationUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, __int64 *a2, volatile void *a3, unsigned int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID Object; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  LOBYTE(v9) = 1;
  if ( (int)ValidateHwinsta(a1, v9, 0LL, &Object) >= 0 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *a2;
    if ( a3 )
    {
      if ( !a4 )
        goto LABEL_9;
      ProbeForRead(a3, a4, 4u);
    }
    v8 = SetWindowStationUser(Object, &v13, a3, a4);
LABEL_9:
    ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
