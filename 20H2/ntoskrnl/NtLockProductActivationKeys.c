/*
 * XREFs of NtLockProductActivationKeys @ 0x1407AF0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403D7860 (wcscat_s.c)
 *     wcscpy_s @ 0x1403D7900 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403D7990 (wcsncat_s.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1403F87B0 (ZwEnumerateKey.c)
 *     ZwLockRegistryKey @ 0x1403FA310 (ZwLockRegistryKey.c)
 *     IsRegistryKeyLocked @ 0x1407AF4C0 (IsRegistryKeyLocked.c)
 */

NTSTATUS __cdecl NtLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  NTSTATUS v3; // ebx
  __int16 v4; // r8
  unsigned __int64 i; // rdx
  __int16 v6; // cx
  __int64 j; // r8
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  unsigned int v10; // esi
  int v11; // r14d
  unsigned __int64 v12; // r11
  NTSTATUS result; // eax
  NTSTATUS v14; // edi
  ULONG v15; // r14d
  NTSTATUS k; // eax
  NTSTATUS v17; // esi
  NTSTATUS v18; // eax
  NTSTATUS v19; // esi
  __int64 v20; // rcx
  char v21[4]; // [rsp+30h] [rbp-908h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-904h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-900h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-8F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-8F0h] BYREF
  UNICODE_STRING v26; // [rsp+58h] [rbp-8E0h] BYREF
  OBJECT_ATTRIBUTES v27; // [rsp+68h] [rbp-8D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-8A0h] BYREF
  WCHAR SourceString[8]; // [rsp+C8h] [rbp-870h] BYREF
  __int128 v30; // [rsp+D8h] [rbp-860h]
  __int128 v31; // [rsp+E8h] [rbp-850h]
  __int64 v32; // [rsp+F8h] [rbp-840h]
  int v33; // [rsp+100h] [rbp-838h]
  _BYTE KeyInformation[12]; // [rsp+110h] [rbp-828h] BYREF
  unsigned int v35; // [rsp+11Ch] [rbp-81Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-818h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-428h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_OWORD *)SourceString = xmmword_14001F6C8;
  v30 = xmmword_14001F6D8;
  v31 = xmmword_14001F6E8;
  v32 = 0x2C7EFB57828734DALL;
  v33 = 593434642;
  v4 = -21647;
  for ( i = 0LL; i < 0x1E; ++i )
  {
    v6 = SourceString[i] ^ (v4 + SourceString[i]);
    v4 = v6;
  }
  if ( v6 != -18097 )
    return -1073741823;
  for ( j = 52LL; j >= 0; --j )
  {
    v8 = *(_DWORD *)((char *)SourceString + j);
    v9 = *(_DWORD *)((char *)&SourceString[2] + j);
    v10 = -957401312;
    v11 = 32;
    v12 = 3337565984LL;
    do
    {
      v9 -= (v10 + *(_DWORD *)&abWPAStringKey[4 * ((v12 >> 11) & 3)]) ^ (v8 + ((16 * v8) ^ (v8 >> 5)));
      v10 += 1640531527;
      v12 = v10;
      v8 -= (v10 + *(_DWORD *)&abWPAStringKey[4 * (v10 & 3)]) ^ (v9 + ((16 * v9) ^ (v9 >> 5)));
      --v11;
    }
    while ( v11 );
    *(_DWORD *)((char *)SourceString + j) = v8;
    *(_DWORD *)((char *)&SourceString[2] + j) = v9;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( pSafeMode )
    {
      v20 = (__int64)pSafeMode;
      if ( (unsigned __int64)pSafeMode >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v20 = *(_DWORD *)v20;
      *pSafeMode = InitSafeBootMode;
    }
  }
  else if ( pSafeMode )
  {
    *pSafeMode = InitSafeBootMode;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v14 = result;
  if ( result >= 0 )
  {
    v15 = 0;
    for ( k = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength);
          ;
          k = ZwEnumerateKey(KeyHandle, v15, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength) )
    {
      v17 = k;
      if ( k == -2147483622 )
        break;
      v26 = 0LL;
      memset(&v27, 0, sizeof(v27));
      Handle = 0LL;
      if ( k < 0 )
      {
        v14 = k;
        break;
      }
      if ( v35 + 64 > 0x400 )
      {
        v14 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v35 >> 1);
        wcscat_s(Dst, 0x200uLL, L"\\");
        RtlInitUnicodeString(&v26, Dst);
        v27.Length = 48;
        v27.RootDirectory = 0LL;
        v27.Attributes = 576;
        v27.ObjectName = &v26;
        *(_OWORD *)&v27.SecurityDescriptor = 0LL;
        v18 = ZwOpenKey(&Handle, 0x20019u, &v27);
        if ( v18 < 0 )
        {
          v14 = v18;
        }
        else
        {
          v21[0] = 0;
          v19 = IsRegistryKeyLocked(Handle, v21);
          if ( v19 >= 0 && !v21[0] )
            v19 = ZwLockRegistryKey(Handle);
          ZwClose(Handle);
          if ( v19 >= 0 )
            v19 = v14;
          v14 = v19;
        }
        ++v15;
      }
    }
    ZwClose(KeyHandle);
    if ( v17 != -2147483622 )
      return v14;
    return v3;
  }
  return result;
}
