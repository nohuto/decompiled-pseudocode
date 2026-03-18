/*
 * XREFs of _NtUserGetRawInputDeviceList@12 @ 0xC31DC
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetRawInputDeviceList(volatile void *Address, ULONG a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // esi
  struct DEVICEINFO *i; // eax
  _DWORD *v7; // ecx
  unsigned int *v8; // edx
  struct DEVICEINFO *j; // edx
  _DWORD *v11; // ecx
  _BYTE v12[8]; // [esp+10h] [ebp-40h] BYREF
  CInpPushLock *Lock; // [esp+20h] [ebp-30h]
  int v14; // [esp+24h] [ebp-2Ch]
  unsigned int v15; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v3 = 0;
  v4 = 0;
  v5 = -1;
  v14 = -1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( a3 != 8 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_14;
  }
  Lock = CBaseInput::TmpGetLock(_gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(_gpHidInput); i; i = (struct DEVICEINFO *)*((_DWORD *)i + 7) )
    ++v4;
  if ( Address )
  {
    ms_exc.registration.TryLevel = 1;
    v15 = 0;
    v7 = (_DWORD *)a2;
    v8 = (unsigned int *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v8 = (unsigned int *)_MmUserProbeAddress;
    if ( *v8 < v4 )
    {
      if ( a2 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = v4;
      v16 = -1;
      UserSetLastError((struct _NT_TIB *)0x7A);
      goto LABEL_13;
    }
    ProbeForWrite(Address, 8 * v4, 4u);
    for ( j = CBaseInput::TmpGetDeviceList(_gpHidInput); j; j = (struct DEVICEINFO *)*((_DWORD *)j + 7) )
    {
      *((_DWORD *)Address + 2 * v3) = *(_DWORD *)j;
      *((_DWORD *)Address + 2 * v3++ + 1) = *((unsigned __int8 *)j + 24);
      v15 = v3;
      if ( v3 >= v4 )
        break;
    }
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v11 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v11 = (_DWORD *)_MmUserProbeAddress;
    *v11 = v4;
  }
  v5 = v3;
  v16 = v3;
LABEL_13:
  ms_exc.registration.TryLevel = -2;
  CInpPushLock::UnLockShared(Lock);
LABEL_14:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  UserSessionSwitchLeaveCrit();
  return v5;
}
