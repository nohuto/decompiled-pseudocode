/*
 * XREFs of _NtUserSetInformationThread@16 @ 0xC907E
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserSetInformationThread(HANDLE Handle, int a2, volatile void *Address, SIZE_T Length)
{
  int v4; // edi
  _BYTE Src[16]; // [esp+10h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  memset(Src, 0, sizeof(Src));
  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS || a2 == 1 )
  {
    if ( Length > 0x10 )
    {
      v4 = -1073741811;
    }
    else
    {
      if ( Length )
      {
        ms_exc.registration.TryLevel = 0;
        ProbeForRead(Address, Length, 4u);
        memcpy(Src, (const void *)Address, Length);
        ms_exc.registration.TryLevel = -2;
      }
      v4 = xxxSetInformationThread(Handle, a2, (int)Src, Length);
      if ( Length )
      {
        ms_exc.registration.TryLevel = 1;
        ProbeForWrite(Address, Length, 4u);
        memcpy((void *)Address, Src, Length);
        ms_exc.registration.TryLevel = -2;
      }
    }
  }
  else
  {
    v4 = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
