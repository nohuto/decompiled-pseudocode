/*
 * XREFs of _NtUserConsoleControl@12 @ 0x1A906
 * Callers:
 *     <none>
 * Callees:
 *     _xxxConsoleControl@12 @ 0x1A9EA (_xxxConsoleControl@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserConsoleControl(int a1, volatile void *Address, SIZE_T Length)
{
  int v3; // esi
  _BYTE Src[24]; // [esp+20h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  memset(Src, 0, 20);
  EnterCrit(0, 1);
  if ( a1 == 4 || !a1 || a1 == 5 || a1 == 1 || a1 == 3 || a1 == 6 || a1 == 2 )
  {
    if ( Length > 0x14 )
    {
      v3 = -1073741811;
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      if ( Address && Length )
      {
        ProbeForRead(Address, Length, 2u);
        memcpy(Src, (const void *)Address, Length);
        ms_exc.registration.TryLevel = -2;
        v3 = xxxConsoleControl((void *)Length);
        ms_exc.registration.TryLevel = 1;
        ProbeForWrite(Address, Length, 2u);
        memcpy((void *)Address, Src, Length);
      }
      else
      {
        v3 = -1073741811;
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
  else
  {
    v3 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
