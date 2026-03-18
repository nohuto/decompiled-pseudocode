/*
 * XREFs of EmpCacheBiosDate @ 0x140A4950C
 * Callers:
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     strtoul @ 0x1403CD0C0 (strtoul.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1403F2870 (ZwUnmapViewOfSection.c)
 *     EmpMapPhysicalAddress @ 0x140A4965C (EmpMapPhysicalAddress.c)
 */

char __fastcall EmpCacheBiosDate(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rax
  _WORD *v4; // rbx
  unsigned int v5; // eax
  HANDLE v6; // rbx
  __int64 v7; // r8
  _DWORD *v8; // r9
  char Str[2]; // [rsp+30h] [rbp-58h] BYREF
  char v11; // [rsp+32h] [rbp-56h]
  char v12; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v15, 0, sizeof(v15));
  v2 = 0;
  BaseAddress = 0LL;
  Handle = 0LL;
  EmpCachedBiosDate = 0;
  v11 = 0;
  if ( dword_140C19730 == 1 )
  {
    v3 = EmpMapPhysicalAddress(a1, a2, &Handle, &BaseAddress, v15);
    v4 = (_WORD *)v3;
    if ( v3 )
    {
      *(_WORD *)Str = *(_WORD *)(v3 + 6);
      v5 = strtoul(Str, 0LL, 16);
      EmpCachedBiosDate = (v5 < 0x80 ? 0x20000000 : 419430400) + (v5 << 16);
      *(_WORD *)Str = *v4;
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16) << 8;
      *(_WORD *)Str = *(_WORD *)((char *)v4 + 3);
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16);
      v2 = 1;
      v12 = 1;
      v6 = Handle;
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      KiUnstackDetachProcess((__int64)v15, 0LL, v7, v8);
      ZwClose(v6);
    }
  }
  return v2;
}
