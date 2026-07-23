/*
 * XREFs of MiActOnLargeKernelHalPages @ 0x1407897BC
 * Callers:
 *     MiProtectSystemImage @ 0x14078945C (MiProtectSystemImage.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A488F4 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5D67C (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiActOnLargeKernelHalPages(char *a1, __int64 (__fastcall *a2)(char *, char *))
{
  PIMAGE_NT_HEADERS v4; // rax
  __int64 *v5; // rbx
  int v6; // r8d
  PIMAGE_NT_HEADERS v7; // rbp
  char *v8; // r9
  int v9; // esi
  unsigned int v10; // ecx
  char *v11; // rdi
  unsigned int v12; // r15d
  unsigned __int64 v13; // r14
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  unsigned int SizeOfHeaders; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+34h] [rbp-54h]
  int v20; // [rsp+44h] [rbp-44h]

  v4 = RtlImageNtHeader(a1);
  v15 = 0LL;
  v5 = &v15;
  v17 = 0;
  v6 = 0x40000000;
  v20 = 0x40000000;
  v7 = v4;
  v8 = a1;
  v9 = v4->FileHeader.NumberOfSections + 1;
  SizeOfHeaders = v4->OptionalHeader.SizeOfHeaders;
  v19 = 0LL;
  v18 = SizeOfHeaders;
  do
  {
    v10 = *((_DWORD *)v5 + 4);
    v11 = &a1[*((unsigned int *)v5 + 3)];
    if ( v10 < *((_DWORD *)v5 + 2) )
      v10 = *((_DWORD *)v5 + 2);
    v12 = *((_DWORD *)v5 + 9) & 0xE0000000;
    v13 = ((v10 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) + 0x1FFFFF;
    if ( v12 != v6 )
    {
      if ( v8 < v11 )
      {
        result = a2(v8, &a1[*((unsigned int *)v5 + 3)]);
        if ( (int)result < 0 )
          return result;
      }
      v6 = v12;
      v8 = v11;
    }
    if ( v5 == &v15 )
      v5 = (__int64 *)((char *)&v7->OptionalHeader + v7->FileHeader.SizeOfOptionalHeader);
    else
      v5 += 5;
    --v9;
  }
  while ( v9 );
  return a2(v8, (char *)((unsigned __int64)&v11[v13] & 0xFFFFFFFFFFE00000uLL));
}
