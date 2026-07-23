/*
 * XREFs of HalpIommuCreateDeviceInternal @ 0x1404C56C4
 * Callers:
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuCreateDeviceInternal(__int64 a1, int a2, _QWORD *a3, __int64 *a4, _BYTE *a5)
{
  int v9; // esi
  __int64 i; // rbx
  __int64 (__fastcall *v11)(_QWORD, __int64, _QWORD, _QWORD *, _QWORD); // rax
  __int64 (__fastcall *v12)(_QWORD, __int64, __int64, _QWORD *, _QWORD); // rax
  int v13; // eax

  *a3 = 0LL;
  *a4 = 0LL;
  v9 = -1073741275;
  if ( a5 )
    *a5 = 0;
  for ( i = HalpIommuList; (__int64 *)i != &HalpIommuList; i = *(_QWORD *)i )
  {
    v11 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD *, _QWORD))(i + 88);
    if ( v11 )
    {
      v9 = v11(*(_QWORD *)(i + 16), a1, 0LL, a3, 0LL);
      if ( v9 >= 0 )
      {
LABEL_14:
        v13 = a2 & *(_DWORD *)(i + 456);
        *a4 = i;
        if ( v13 != a2 )
        {
          v9 = -1073741811;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(i + 96))(*(_QWORD *)(i + 16), *a3, 0LL);
          *a3 = 0LL;
          *a4 = 0LL;
          if ( a5 )
            *a5 |= 1u;
        }
        return (unsigned int)v9;
      }
    }
  }
  for ( i = HalpIommuList; (__int64 *)i != &HalpIommuList; i = *(_QWORD *)i )
  {
    v12 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, _QWORD))(i + 88);
    if ( v12 )
    {
      v9 = v12(*(_QWORD *)(i + 16), a1, 1LL, a3, 0LL);
      if ( v9 >= 0 )
        goto LABEL_14;
    }
  }
  return (unsigned int)v9;
}
