/*
 * XREFs of RtlStdInitializeStackDatabase @ 0x180101190
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x180101550 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x18006FBD0 (RtlInitializeSListHead.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

NTSTATUS __fastcall RtlStdInitializeStackDatabase(void *a1, ULONG_PTR a2, ULONG_PTR a3, _QWORD *a4)
{
  _BYTE *v6; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  NTSTATUS result; // eax
  NTSTATUS v10; // r14d
  char *v11; // r8
  char *v12; // rcx
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // edx
  _QWORD *i; // rcx
  __int64 v18; // rax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v20; // [rsp+78h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+40h] BYREF

  RegionSize = a3;
  v20 = a2;
  if ( a2 && (a2 != a3 || !a1) )
    return -1073741811;
  BaseAddress[0] = a1;
  v6 = a1;
  v7 = a3 < 0x1000000 ? 5569 : 9551;
  v8 = 16 * (v7 + 47LL);
  if ( a3 <= v8 )
    return -1073741811;
  if ( !a1 )
  {
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
    if ( result < 0 )
      return result;
    a2 = v20;
    v6 = BaseAddress[0];
  }
  if ( a2 )
  {
    v6[128] = 1;
LABEL_16:
    v11 = (char *)BaseAddress[0];
    *((PVOID *)BaseAddress[0] + 17) = BaseAddress[0];
    *((_DWORD *)BaseAddress[0] + 180) = v7;
    v12 = &v11[RegionSize];
    *((_QWORD *)BaseAddress[0] + 21) = &v11[RegionSize];
    *((_QWORD *)BaseAddress[0] + 23) = v12;
    if ( *((_BYTE *)BaseAddress[0] + 128) )
    {
      memset((char *)BaseAddress[0] + 728, 0, 16LL * *((unsigned int *)BaseAddress[0] + 180));
    }
    else
    {
      *((_QWORD *)BaseAddress[0] + 18) = &v11[v20];
      *((_QWORD *)BaseAddress[0] + 19) = &v11[RegionSize];
    }
    v13 = 208LL;
    v14 = (char *)BaseAddress[0] + v8;
    v15 = 32LL;
    *((_QWORD *)BaseAddress[0] + 20) = v14;
    *((_QWORD *)BaseAddress[0] + 15) = *((_QWORD *)BaseAddress[0] + 20);
    do
    {
      RtlInitializeSListHead((PSLIST_HEADER)((char *)BaseAddress[0] + v13));
      v13 += 16LL;
      --v15;
    }
    while ( v15 );
    v16 = 0;
    *(_QWORD *)BaseAddress[0] = 0LL;
    for ( i = BaseAddress[0]; v16 < *((_DWORD *)BaseAddress[0] + 180); i = BaseAddress[0] )
    {
      v18 = v16++;
      i[2 * v18 + 92] = 0LL;
    }
    *a4 = i;
    return 0;
  }
  v20 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, &v20, 0x1000u, 4u);
  if ( v10 >= 0 )
  {
    *((_BYTE *)BaseAddress[0] + 128) = 0;
    goto LABEL_16;
  }
  if ( !a1 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
  return v10;
}
