/*
 * XREFs of ?pppUserModeCallback@@YGJKPAXK0K@Z @ 0x1894E0
 * Callers:
 *     _ClientPrinterThunk@16 @ 0x18A136 (_ClientPrinterThunk@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge pppUserModeCallback@<eax>(
        int a1@<edx>,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6)
{
  int result; // eax
  int v7; // esi
  volatile void *Address; // [esp+14h] [ebp-20h] BYREF
  SIZE_T Length; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  Address = 0;
  Length = 0;
  result = KeUserModeCallback(103, a1, a2, &Address, &Length);
  v7 = result;
  if ( result >= 0 )
  {
    if ( Length == a4 )
    {
      if ( a4 )
      {
        ms_exc.registration.TryLevel = 0;
        if ( Length )
          ProbeForRead(Address, Length, 4u);
        else
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a3, (const void *)Address, Length);
        ms_exc.registration.TryLevel = -2;
      }
      return v7;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
