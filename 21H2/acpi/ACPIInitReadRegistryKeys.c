/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1C00BD2FC
 * Callers:
 *     DriverEntry @ 0x1C00BB98C (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C000C948 (RtlStringCchPrintfA.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     OSOpenHandle @ 0x1C008FBB8 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1C0096D0C (OSCloseHandle.c)
 *     OSReadRegValue @ 0x1C0097444 (OSReadRegValue.c)
 */

void ACPIInitReadRegistryKeys()
{
  _BYTE *v0; // rbx
  _BYTE *v1; // rdi
  int v2; // eax
  unsigned int v3; // esi
  _BYTE *PoolWithTag; // rax
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rsi
  int v8; // esi
  unsigned int v9; // r14d
  _BYTE *v10; // rax
  unsigned int v11; // esi
  char *v12; // rax
  char *v13; // r14
  unsigned int v14; // edx
  char *v15; // rcx
  char v16; // al
  unsigned __int16 v17; // r9
  unsigned int v18; // [rsp+70h] [rbp+38h] BYREF
  int v19; // [rsp+78h] [rbp+40h] BYREF
  int v20; // [rsp+80h] [rbp+48h] BYREF
  void *v21; // [rsp+88h] [rbp+50h] BYREF

  v21 = 0LL;
  v0 = 0LL;
  v18 = 4;
  v20 = 0;
  v19 = 0;
  v1 = 0LL;
  if ( (int)OSReadRegValue("Attributes", 0LL, &v19, &v18) >= 0 )
    AcpiOverrideAttributes |= v19 & 0xFFFEFFFF;
  AcpiProcessorString = 0LL;
  v2 = OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, (__int64)&v21);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x10u,
        (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
        v2);
  }
  else
  {
    v3 = 40;
    while ( 1 )
    {
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x53706341u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, v3);
      v18 = v3;
      v3 += 10;
      v5 = OSReadRegValue("Identifier", v21, v0, &v18);
      if ( v5 != -2147483643 )
      {
        if ( v5 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 17;
LABEL_40:
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xBu,
              v17,
              (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
              v5);
          }
        }
        else
        {
          v6 = strstr(v0, "Stepping");
          if ( v6 )
            *(v6 - 1) = 0;
          v7 = -1LL;
          do
            ++v7;
          while ( v0[v7] );
          v8 = v7 + 1;
          v9 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v10 = ExAllocatePoolWithTag(PagedPool, v9, 0x53706341u);
            v1 = v10;
            if ( !v10 )
              break;
            memset(v10, 0, v9);
            v18 = v9;
            v9 += 10;
            v5 = OSReadRegValue("VendorIdentifier", v21, v1, &v18);
            if ( v5 != -2147483643 )
            {
              if ( v5 >= 0 )
              {
                v11 = v18 + 2 + v8;
                v12 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x53706341u);
                v13 = v12;
                if ( v12 )
                {
                  RtlStringCchPrintfA(v12, v11, "%s - %s", v1, v0);
                  v14 = 0;
                  if ( v11 )
                  {
                    v15 = v13;
                    do
                    {
                      v16 = *v15;
                      if ( !*v15 )
                        break;
                      if ( v16 < 32 || v16 == 44 )
                        *v15 = 32;
                      ++v14;
                      ++v15;
                    }
                    while ( v14 < v11 );
                  }
                  *((_QWORD *)&AcpiProcessorString + 1) = v13;
                  WORD1(AcpiProcessorString) = v11;
                  LOWORD(AcpiProcessorString) = v11;
                  v18 = 4;
                  if ( (int)OSReadRegValue("ProcDevAsyncStart", 0LL, &v20, &v18) < 0
                    || (AcpiProcessorAsyncStart = 1, !v20) )
                  {
                    AcpiProcessorAsyncStart = 0;
                  }
                }
                goto LABEL_29;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_29;
              v17 = 18;
              goto LABEL_40;
            }
          }
        }
        break;
      }
    }
LABEL_29:
    if ( v21 )
      OSCloseHandle(v21);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
