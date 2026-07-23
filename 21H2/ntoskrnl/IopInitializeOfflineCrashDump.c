/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x1403CA028
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140A6DE38 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopConstructInMemoryDumpHeader @ 0x140503B80 (IopConstructInMemoryDumpHeader.c)
 *     IopInitializeInMemoryDumpData @ 0x140504250 (IopInitializeInMemoryDumpData.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140769C64 (IopOpenRegistryKey.c)
 *     IoGetEnvironmentVariableEx @ 0x140899BAC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140899EBC (IoSetEnvironmentVariableEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     IopCachePreviousBootData @ 0x140A90918 (IopCachePreviousBootData.c)
 */

void __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  char v3; // al
  char v4; // [rsp+30h] [rbp-50h] BYREF
  char v5; // [rsp+31h] [rbp-4Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+40h] [rbp-40h]
  int v8; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v10[4]; // [rsp+60h] [rbp-20h] BYREF

  P = 0LL;
  v1 = 0;
  v10[0] = 2012912317;
  Handle = 0LL;
  dword_140C50C30 = 0;
  v10[1] = 1295123289;
  v10[2] = -198680387;
  v10[3] = 1266192359;
  v9[0] = 8388734LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v5 = 0;
  v8 = 1;
  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2776) - 1) <= 1 )
    {
      PoOffCrashConfigTable = *(_OWORD *)(a1 + 2776);
      xmmword_140C25190 = *(_OWORD *)(a1 + 2792);
      v2 = IopOpenRegistryKey(&Handle, 0LL, v9, 131097LL, 0);
      if ( v2 >= 0 )
      {
        if ( (int)IopGetRegistryValue(Handle) < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)P + 3) )
          v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 == 1 )
        {
          OfflineDumpEnabled = 1;
          v4 = 1;
        }
        else
        {
LABEL_14:
          OfflineDumpEnabled = 0;
          if ( (unsigned int)PoOffCrashConfigTable >= 2 )
          {
            v3 = v4;
            if ( (BYTE8(PoOffCrashConfigTable) & 4) != 0 )
              v3 = 4;
            v4 = v3;
          }
        }
        if ( (int)IoGetEnvironmentVariableEx(
                    (unsigned int)L"OfflineMemoryDumpUseCapability",
                    (unsigned int)v10,
                    (unsigned int)&v5,
                    (unsigned int)&v8,
                    0LL) < 0
          || v5 != v4 )
        {
          IoSetEnvironmentVariableEx(
            (unsigned int)L"OfflineMemoryDumpUseCapability",
            (unsigned int)v10,
            (unsigned int)&v4,
            1,
            7);
        }
        if ( OfflineDumpEnabled )
        {
          IopCachePreviousBootData(&Handle);
          IopInitializeInMemoryDumpData();
          IopConstructInMemoryDumpHeader();
          if ( (int)IopGetRegistryValue(Handle) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              DumpPolicyAttemptOffline = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      else
      {
        dword_140C50C30 = v2;
      }
    }
    else
    {
      dword_140C50C30 = -1073741736;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_140C50C30 = -1073741275;
  }
}
