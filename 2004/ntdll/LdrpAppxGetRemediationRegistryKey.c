/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800CB9D4
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB4F0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x180057D70 (RtlGetPersistedStateLocation.c)
 *     RtlStringCbCatW @ 0x18007BA1C (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x18007BAEC (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x18009F200 (NtOpenKeyEx.c)
 */

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2)
{
  signed int PersistedStateLocation; // ecx
  __int64 v5; // r11
  char *v6; // rcx
  __int64 v7; // r11
  __int64 v8; // rdx
  signed __int64 v9; // rax
  __int16 v10; // r8
  char *v11; // rax
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int128 *v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+70h] [rbp-90h]
  __int128 v19; // [rsp+78h] [rbp-88h]
  _WORD v20[264]; // [rsp+90h] [rbp-70h] BYREF

  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"AppxStateChange",
                             L"TargetNtPath",
                             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
                             0,
                             v20,
                             0x20Au,
                             (unsigned int *)&v13);
  if ( PersistedStateLocation >= 0 )
  {
    if ( a1 == -1073740702 )
    {
      PersistedStateLocation = RtlStringLengthWorkerW(v20, 261LL, &v13);
      if ( PersistedStateLocation >= 0 )
      {
        v6 = (char *)&v20[v13];
        v7 = v5 - v13;
        if ( v7 )
        {
          v8 = v7 + v13 + 2147483385;
          v9 = (char *)L"\\PackageList\\" - v6;
          do
          {
            if ( !v8 )
              break;
            v10 = *(_WORD *)&v6[v9];
            if ( !v10 )
              break;
            *(_WORD *)v6 = v10;
            --v8;
            v6 += 2;
            --v7;
          }
          while ( v7 );
        }
        v11 = v6 - 2;
        if ( v7 )
          v11 = v6;
        PersistedStateLocation = v7 == 0 ? 0x80000005 : 0;
        *(_WORD *)v11 = 0;
      }
      if ( PersistedStateLocation >= 0 )
      {
        PersistedStateLocation = RtlStringCbCatW((__int64)v20, 0x20AuLL, a2);
        if ( PersistedStateLocation >= 0 )
        {
          v14 = 0LL;
          PersistedStateLocation = RtlStringLengthWorkerW(v20, 0x7FFFLL, &v13);
          if ( PersistedStateLocation >= 0 )
          {
            LOWORD(v14) = 2 * v13;
            WORD1(v14) = 2 * v13 + 2;
            *((_QWORD *)&v14 + 1) = v20;
LABEL_18:
            v15 = 48;
            v17 = &v14;
            v16 = 0LL;
            v18 = 64;
            v19 = 0LL;
            return (unsigned int)NtOpenKeyEx();
          }
        }
      }
    }
    else
    {
      v14 = 0LL;
      PersistedStateLocation = RtlStringLengthWorkerW(v20, 0x7FFFLL, &v13);
      if ( PersistedStateLocation >= 0 )
      {
        LOWORD(v14) = 2 * v13;
        WORD1(v14) = 2 * v13 + 2;
        *((_QWORD *)&v14 + 1) = v20;
        goto LABEL_18;
      }
    }
  }
  return (unsigned int)PersistedStateLocation;
}
