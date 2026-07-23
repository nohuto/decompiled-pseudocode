/*
 * XREFs of ExRaiseHardError @ 0x1409562E0
 * Callers:
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     CmpQuotaWarningWorker @ 0x14086B9E0 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x140876D80 (CmpDiskFullWarningWorker.c)
 *     IopHardErrorThread @ 0x1408917C0 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140891D60 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140892000 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x14094BA70 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x140956990 (NtRaiseHardError.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA880 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1403FA940 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpRaiseHardError @ 0x1409565F8 (ExpRaiseHardError.c)
 */

__int64 __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, char *a4, int a5, int *a6)
{
  __int64 v8; // rdi
  int *v9; // r15
  int v10; // r14d
  ULONG_PTR v11; // rsi
  NTSTATUS v12; // ebx
  unsigned int v13; // edx
  char *v14; // r8
  _QWORD *v15; // r14
  char *v16; // rsi
  __int64 i; // rbx
  __int64 v18; // rcx
  int v21; // [rsp+48h] [rbp-140h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-138h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-130h] BYREF
  int v24; // [rsp+60h] [rbp-128h]
  unsigned int v25; // [rsp+68h] [rbp-120h]
  int v26; // [rsp+70h] [rbp-118h]
  char *v27; // [rsp+78h] [rbp-110h]
  int *v28; // [rsp+80h] [rbp-108h]
  PVOID v29; // [rsp+88h] [rbp-100h]
  const void *v30; // [rsp+90h] [rbp-F8h]
  __int64 v31; // [rsp+98h] [rbp-F0h]
  _OWORD v32[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-C8h]
  _OWORD v34[2]; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-A0h]
  void *Src[10]; // [rsp+F0h] [rbp-98h] BYREF

  v8 = a2;
  v24 = a1;
  v25 = a2;
  v26 = a3;
  v30 = a4;
  v9 = a6;
  v28 = a6;
  RegionSize = 0LL;
  v10 = 0;
  v21 = 0;
  BaseAddress = 0LL;
  memset(v34, 0, sizeof(v34));
  v35 = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  v11 = 80LL;
  memset(Src, 0, sizeof(Src));
  if ( ExpTooLateForErrors )
  {
    v12 = 0;
    v10 = 1;
    goto LABEL_20;
  }
  if ( (unsigned int)v8 > 5 )
  {
    v12 = -1073741584;
    goto LABEL_20;
  }
  if ( !a4 )
    goto LABEL_19;
  memmove(v34, a4, 8 * v8);
  memmove(v32, a4, 8 * v8);
  if ( !a3 )
    goto LABEL_19;
  RegionSize = 80LL;
  v13 = 0;
  if ( (_DWORD)v8 )
  {
    v14 = a4;
    do
    {
      if ( _bittest(&a3, v13) )
      {
        v11 += *(unsigned __int16 *)(*(_QWORD *)v14 + 2LL);
        RegionSize = v11;
      }
      ++v13;
      v14 += 8;
    }
    while ( v13 < (unsigned int)v8 );
  }
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v12 >= 0 )
  {
    v15 = BaseAddress;
    v29 = BaseAddress;
    v16 = (char *)BaseAddress + 80;
    v27 = (char *)BaseAddress + 80;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
    {
      if ( _bittest(&a3, i) )
      {
        v31 = (unsigned int)i;
        *(_OWORD *)&Src[2 * (unsigned int)i] = *(_OWORD *)*(_QWORD *)&a4[8 * i];
        v15[2 * (unsigned int)i + 1] = v16;
        WORD1(v15[2 * (unsigned int)i]) = WORD1(Src[2 * (unsigned int)i]);
        LOWORD(v15[2 * (unsigned int)i]) = Src[2 * (unsigned int)i];
        memmove(v16, Src[2 * (unsigned int)i + 1], WORD1(Src[2 * (unsigned int)i]));
        Src[2 * (unsigned int)i + 1] = v16;
        v16 += WORD1(Src[2 * (unsigned int)i]);
        v27 = v16;
        v18 = 2LL * (unsigned int)i;
        *((_QWORD *)v34 + (unsigned int)i) = &v15[v18];
        *((_QWORD *)v32 + (unsigned int)i) = &Src[v18];
      }
    }
    v9 = v28;
LABEL_19:
    v12 = ExpRaiseHardError(a1, v8, a3, (unsigned int)v34, (__int64)v32, a5, (__int64)&v21);
    v10 = v21;
  }
LABEL_20:
  *v9 = v10;
  if ( BaseAddress )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v12;
}
