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

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2, HANDLE *a3)
{
  signed int PersistedStateLocation; // ecx
  __int64 v7; // r11
  WCHAR *v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rdx
  char *v11; // rax
  WCHAR v12; // r8
  WCHAR *v13; // rax
  ACCESS_MASK v14; // edx
  ULONG BufferLengthOut[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+48h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR TargetPath[264]; // [rsp+90h] [rbp-70h] BYREF

  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"AppxStateChange",
                             L"TargetNtPath",
                             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
                             LocationTypeRegistry,
                             TargetPath,
                             0x20Au,
                             BufferLengthOut);
  if ( PersistedStateLocation >= 0 )
  {
    if ( a1 == -1073740702 )
    {
      PersistedStateLocation = RtlStringLengthWorkerW(TargetPath, 261LL, BufferLengthOut);
      if ( PersistedStateLocation >= 0 )
      {
        v8 = &TargetPath[*(_QWORD *)BufferLengthOut];
        v9 = v7 - *(_QWORD *)BufferLengthOut;
        if ( v9 )
        {
          v10 = v9 + *(_QWORD *)BufferLengthOut + 2147483385LL;
          v11 = (char *)((char *)L"\\PackageList\\" - (char *)v8);
          do
          {
            if ( !v10 )
              break;
            v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
            if ( !v12 )
              break;
            *v8 = v12;
            --v10;
            ++v8;
            --v9;
          }
          while ( v9 );
        }
        v13 = v8 - 1;
        if ( v9 )
          v13 = v8;
        PersistedStateLocation = v9 == 0 ? 0x80000005 : 0;
        *v13 = 0;
      }
      if ( PersistedStateLocation >= 0 )
      {
        PersistedStateLocation = RtlStringCbCatW((__int64)TargetPath, 0x20AuLL, a2);
        if ( PersistedStateLocation >= 0 )
        {
          v17 = 0LL;
          PersistedStateLocation = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, BufferLengthOut);
          if ( PersistedStateLocation >= 0 )
          {
            LOWORD(v17) = 2 * LOWORD(BufferLengthOut[0]);
            WORD1(v17) = 2 * LOWORD(BufferLengthOut[0]) + 2;
            *((_QWORD *)&v17 + 1) = TargetPath;
            v14 = 131353;
LABEL_18:
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            return (unsigned int)NtOpenKeyEx(a3, v14, &ObjectAttributes, 0);
          }
        }
      }
    }
    else
    {
      v17 = 0LL;
      PersistedStateLocation = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, BufferLengthOut);
      if ( PersistedStateLocation >= 0 )
      {
        LOWORD(v17) = 2 * LOWORD(BufferLengthOut[0]);
        WORD1(v17) = 2 * LOWORD(BufferLengthOut[0]) + 2;
        *((_QWORD *)&v17 + 1) = TargetPath;
        v14 = 131097;
        goto LABEL_18;
      }
    }
  }
  return (unsigned int)PersistedStateLocation;
}
