/*
 * XREFs of ExRaiseHardError @ 0x140958940
 * Callers:
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     CmpQuotaWarningWorker @ 0x14086DC50 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x1408792A0 (CmpDiskFullWarningWorker.c)
 *     IopHardErrorThread @ 0x140894090 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140894640 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x1408948E0 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x14094E0D0 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x140958F40 (NtRaiseHardError.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1403F8470 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1403F8530 (ZwFreeVirtualMemory.c)
 *     ExpRaiseHardError @ 0x140958BAC (ExpRaiseHardError.c)
 */

NTSTATUS __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, _QWORD *a4, int a5, _DWORD *a6)
{
  int v9; // ebx
  NTSTATUS result; // eax
  PVOID v11; // r9
  ULONG_PTR v12; // r8
  __int64 i; // rdx
  char *v14; // r13
  char *v15; // rdx
  char *v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // rbx
  int v21; // ebx
  PVOID BaseAddress; // [rsp+40h] [rbp-F8h] BYREF
  int v23; // [rsp+48h] [rbp-F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-E8h] BYREF
  int v25; // [rsp+58h] [rbp-E0h]
  int v26; // [rsp+5Ch] [rbp-DCh]
  int v27; // [rsp+60h] [rbp-D8h]
  unsigned int v28; // [rsp+68h] [rbp-D0h]
  int v29; // [rsp+70h] [rbp-C8h]
  char *v30; // [rsp+78h] [rbp-C0h]
  _QWORD *v31; // [rsp+80h] [rbp-B8h]
  _DWORD *v32; // [rsp+88h] [rbp-B0h]
  char *v33; // [rsp+90h] [rbp-A8h]
  _OWORD v34[5]; // [rsp+A0h] [rbp-98h] BYREF

  v9 = a1;
  v26 = a1;
  v27 = a1;
  v28 = a2;
  v29 = a3;
  v31 = a4;
  v32 = a6;
  v23 = 0;
  RegionSize = 0LL;
  if ( ExpTooLateForErrors )
  {
    *a6 = 1;
    return 0;
  }
  *a6 = 0;
  if ( a2 > 5 )
    return -1073741584;
  v11 = 0LL;
  BaseAddress = 0LL;
  if ( a4 )
  {
    if ( a3 )
    {
      v12 = 136LL;
      RegionSize = 136LL;
      for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
      {
        if ( _bittest(&a3, i) )
        {
          v34[(unsigned int)i] = *(_OWORD *)a4[i];
          v12 += WORD1(v34[(unsigned int)i]);
          RegionSize = v12;
        }
      }
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( result < 0 )
        return result;
      v11 = BaseAddress;
      v14 = (char *)BaseAddress;
      v15 = (char *)BaseAddress + 40;
      v16 = (char *)BaseAddress + 120;
      v30 = (char *)BaseAddress + 120;
      v17 = 0LL;
      v25 = 0;
      while ( (unsigned int)v17 < a2 )
      {
        if ( _bittest(&a3, v17) )
        {
          *(_QWORD *)&v14[8 * v17] = &v15[16 * (unsigned int)v17];
          v18 = (unsigned int)v17;
          v19 = &v15[v18 * 16];
          *((_QWORD *)v19 + 1) = v16;
          v20 = WORD1(v34[v18]);
          *((_WORD *)v19 + 1) = v20;
          RtlCopyUnicodeString((PUNICODE_STRING)&v15[v18 * 16], (PCUNICODE_STRING)&v34[v18]);
          v16 = &v30[v20];
          v30 = v16;
          v33 = v16;
          v15 = v14 + 40;
        }
        else
        {
          *(_QWORD *)&v14[8 * v17] = a4[v17];
        }
        v17 = (unsigned int)(v17 + 1);
        v25 = v17;
        v11 = BaseAddress;
      }
      v9 = v26;
    }
    else
    {
      v11 = a4;
      BaseAddress = a4;
    }
  }
  v21 = ExpRaiseHardError(v9, a2, a3, (_DWORD)v11, (__int64)v11, a5, (__int64)&v23);
  if ( BaseAddress && BaseAddress != a4 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  *a6 = v23;
  return v21;
}
