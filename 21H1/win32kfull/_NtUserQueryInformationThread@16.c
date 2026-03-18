/*
 * XREFs of _NtUserQueryInformationThread@16 @ 0xCF6D0
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserQueryInformationThread(void *a1, int a2, volatile void *a3, SIZE_T Length)
{
  _BYTE *v4; // esi
  const void *v5; // edi
  int InformationThread; // edi
  _DWORD v8[3]; // [esp+10h] [ebp-7Ch] BYREF
  HANDLE Handle; // [esp+24h] [ebp-68h]
  volatile void *Address; // [esp+28h] [ebp-64h]
  _BYTE *v11; // [esp+2Ch] [ebp-60h]
  _BYTE Src[68]; // [esp+30h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  Handle = a1;
  Address = a3;
  memset(v8, 0, sizeof(v8));
  v4 = 0;
  memset(Src, 0, 0x40u);
  v11 = 0;
  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    ms_exc.registration.TryLevel = 0;
    v5 = (const void *)Address;
    if ( Address )
    {
      ProbeForRead(Address, Length, 2u);
      if ( Length > 0x40 )
      {
        v4 = (_BYTE *)Win32AllocPoolWithQuota(Length, 1230271317);
        v11 = v4;
        if ( !v4 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock((int)v4, v8, (int)Win32FreePool);
      }
      else
      {
        v4 = Src;
        v11 = Src;
      }
      memcpy(v4, v5, Length);
    }
    else
    {
      v11 = 0;
    }
    ms_exc.registration.TryLevel = -2;
    InformationThread = xxxQueryInformationThread(Handle, (int)v4, Length);
    ms_exc.registration.TryLevel = 1;
    if ( Address )
    {
      ProbeForWrite(Address, Length, 2u);
      memcpy((void *)Address, v4, Length);
    }
    ms_exc.registration.TryLevel = -2;
    if ( v4 != Src && v4 )
      PopAndFreeAlwaysW32ThreadLock((int)v8);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return InformationThread;
}
