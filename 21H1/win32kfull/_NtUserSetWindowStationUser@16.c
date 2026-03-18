/*
 * XREFs of _NtUserSetWindowStationUser@16 @ 0xE9454
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __SetWindowStationUser@16 @ 0xE951E (__SetWindowStationUser@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserSetWindowStationUser(int a1, int *a2, volatile void *Address, SIZE_T Length)
{
  int v4; // esi
  _BYTE v6[8]; // [esp+10h] [ebp-34h] BYREF
  int v7; // [esp+18h] [ebp-2Ch]
  int v8; // [esp+1Ch] [ebp-28h]
  int v9; // [esp+24h] [ebp-20h]
  PVOID Object; // [esp+28h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v4 = 0;
  Object = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( (int)ValidateHwinsta(a1, 1, 0, &Object) >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *a2;
    v8 = a2[1];
    if ( Address )
    {
      if ( !Length )
      {
        v9 = 0;
        ms_exc.registration.TryLevel = -2;
        goto LABEL_5;
      }
      ProbeForRead(Address, Length, 4u);
    }
    ms_exc.registration.TryLevel = -2;
    v4 = _SetWindowStationUser((void *)Address, Length);
LABEL_5:
    ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v4;
}
