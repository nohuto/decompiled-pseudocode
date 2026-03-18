/*
 * XREFs of _NtUserGetPointerDevices@8 @ 0x8286E
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetPointerDeviceInfoProperties@8 @ 0x159B80 (__GetPointerDeviceInfoProperties@8.c)
 */

int __stdcall NtUserGetPointerDevices(unsigned int *a1, char *Address)
{
  int v2; // esi
  unsigned int v3; // ebx
  unsigned int *v4; // edi
  struct DEVICEINFO *DeviceList; // eax
  struct DEVICEINFO *v6; // edi
  unsigned int *v8; // ecx
  int v9; // ecx
  struct DEVICEINFO *i; // esi
  _BYTE v11[8]; // [esp+10h] [ebp-44h] BYREF
  CInpPushLock *Lock; // [esp+20h] [ebp-34h]
  int v13; // [esp+24h] [ebp-30h]
  struct DEVICEINFO *v14; // [esp+30h] [ebp-24h]
  int v15; // [esp+34h] [ebp-20h]
  int v16; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  v2 = 0;
  v3 = 0;
  v13 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  v4 = a1;
  if ( !a1 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_12;
  }
  Lock = CBaseInput::TmpGetLock(_gpHidInput);
  CInpPushLock::LockShared(Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(_gpHidInput);
  v14 = DeviceList;
  if ( DeviceList )
  {
    v6 = DeviceList;
    do
    {
      if ( *((char *)v6 + 120) < 0 && IsPointerDeviceAccessible(*((_DWORD *)v6 + 71)) )
        ++v3;
      v6 = (struct DEVICEINFO *)*((_DWORD *)v6 + 7);
    }
    while ( v6 );
    v14 = 0;
    v4 = a1;
  }
  if ( Address )
  {
    ms_exc.registration.TryLevel = 1;
    v8 = v4;
    if ( (unsigned int)v4 >= _MmUserProbeAddress )
      v8 = (unsigned int *)_MmUserProbeAddress;
    if ( *v8 < v3 )
    {
      if ( (unsigned int)v4 >= _MmUserProbeAddress )
        v4 = (unsigned int *)_MmUserProbeAddress;
      *v4 = v3;
      v9 = 122;
    }
    else
    {
      if ( *v8 && v3 )
      {
        ProbeForWrite(Address, 1064 * v3, 4u);
        v15 = v3 - 1;
        for ( i = CBaseInput::TmpGetDeviceList(_gpHidInput); ; i = (struct DEVICEINFO *)*((_DWORD *)i + 7) )
        {
          v14 = i;
          if ( !i || v15 < 0 )
            break;
          if ( *((char *)i + 120) < 0 && IsPointerDeviceAccessible(*((_DWORD *)i + 71)) )
            _GetPointerDeviceInfoProperties(&Address[1064 * v15--], *((_DWORD *)i + 71));
        }
        v2 = 1;
        v16 = 1;
        if ( (unsigned int)v4 >= _MmUserProbeAddress )
          v4 = (unsigned int *)_MmUserProbeAddress;
        *v4 = v3;
        goto LABEL_11;
      }
      v9 = 15299;
    }
    v16 = 0;
    UserSetLastError((struct _NT_TIB *)v9);
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)v4 >= _MmUserProbeAddress )
      v4 = (unsigned int *)_MmUserProbeAddress;
    *v4 = v3;
    v2 = 1;
    v16 = 1;
  }
LABEL_11:
  ms_exc.registration.TryLevel = -2;
  CInpPushLock::UnLockShared(Lock);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  UserSessionSwitchLeaveCrit();
  return v2;
}
