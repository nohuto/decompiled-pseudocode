/*
 * XREFs of HalpWdatProcessWdrtInternalData @ 0x1404D5244
 * Callers:
 *     HalpWdatDiscover @ 0x1403ACE40 (HalpWdatDiscover.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     WdHwCreateHardwareRegister @ 0x1404DE608 (WdHwCreateHardwareRegister.c)
 *     WdHwDestroyHardwareRegister @ 0x1404DE6F4 (WdHwDestroyHardwareRegister.c)
 */

__int64 __fastcall HalpWdatProcessWdrtInternalData(__int64 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  unsigned int v5; // eax
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax
  LARGE_INTEGER v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v5 = *(unsigned __int16 *)(a1 + 68);
  a2[5] = 1;
  v11 = 0LL;
  if ( v5 < 0x1FF )
    v5 = 511;
  a2[4] = v5;
  v7 = *(unsigned __int8 *)(a1 + 70);
  v12 = 0LL;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 3221225485LL;
      a2[6] = 10;
    }
    else
    {
      a2[6] = 100;
    }
  }
  else
  {
    a2[6] = 1000;
  }
  v10 = *(LARGE_INTEGER *)(a1 + 40);
  *a3 = 1072;
  result = WdHwCreateHardwareRegister(v10);
  if ( (int)result >= 0 )
  {
    (*((void (__fastcall **)(_QWORD))&v12 + 1))(v12);
    WdHwDestroyHardwareRegister(&v11);
    result = 0LL;
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
  }
  return result;
}
