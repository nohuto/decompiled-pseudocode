/*
 * XREFs of HalpIommuCreateDeviceInternal @ 0x1403CD768
 * Callers:
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuCreateDeviceInternal(__int64 a1, _QWORD *a2, __int64 **a3)
{
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD, _QWORD *, _QWORD); // r10
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD *, _QWORD); // r10

  *a2 = 0LL;
  *a3 = 0LL;
  i = (__int64 *)HalpIommuList;
  result = 3221226021LL;
  while ( i != &HalpIommuList )
  {
    v8 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, _QWORD))i[11];
    if ( v8 )
    {
      result = v8(i[2], a1, 0LL, a2, 0LL);
      if ( (int)result >= 0 )
      {
LABEL_12:
        *a3 = i;
        return result;
      }
    }
    i = (__int64 *)*i;
  }
  for ( i = (__int64 *)HalpIommuList; i != &HalpIommuList; i = (__int64 *)*i )
  {
    v9 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, _QWORD))i[11];
    if ( v9 )
    {
      result = v9(i[2], a1, 1LL, a2, 0LL);
      if ( (int)result >= 0 )
        goto LABEL_12;
    }
  }
  return result;
}
