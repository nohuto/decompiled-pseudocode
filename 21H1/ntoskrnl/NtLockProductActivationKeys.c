/*
 * XREFs of NtLockProductActivationKeys @ 0x14079BDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403D3D90 (wcscat_s.c)
 *     wcscpy_s @ 0x1403D3E30 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403D3EC0 (wcsncat_s.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1403F2970 (ZwEnumerateKey.c)
 *     ZwLockRegistryKey @ 0x1403F44B0 (ZwLockRegistryKey.c)
 *     IsRegistryKeyLocked @ 0x14079C190 (IsRegistryKeyLocked.c)
 */

NTSTATUS __fastcall NtLockProductActivationKeys(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
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
  int v14; // edi
  ULONG v15; // r14d
  NTSTATUS k; // eax
  NTSTATUS v17; // esi
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // rcx
  char v22[4]; // [rsp+30h] [rbp-908h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-904h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-900h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-8F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-8F0h] BYREF
  UNICODE_STRING v27; // [rsp+58h] [rbp-8E0h] BYREF
  OBJECT_ATTRIBUTES v28; // [rsp+68h] [rbp-8D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-8A0h] BYREF
  WCHAR SourceString[8]; // [rsp+C8h] [rbp-870h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-860h]
  __int128 v32; // [rsp+E8h] [rbp-850h]
  __int64 v33; // [rsp+F8h] [rbp-840h]
  int v34; // [rsp+100h] [rbp-838h]
  _BYTE KeyInformation[12]; // [rsp+110h] [rbp-828h] BYREF
  unsigned int v36; // [rsp+11Ch] [rbp-81Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-818h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-428h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_OWORD *)SourceString = xmmword_14001F920;
  v31 = xmmword_14001F930;
  v32 = xmmword_14001F940;
  v33 = 0x2C7EFB57828734DALL;
  v34 = 593434642;
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
    if ( a2 )
    {
      v21 = (__int64)a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v21 = *(_DWORD *)v21;
      *a2 = InitSafeBootMode;
    }
  }
  else if ( a2 )
  {
    *a2 = InitSafeBootMode;
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
      v27 = 0LL;
      memset(&v28, 0, sizeof(v28));
      Handle = 0LL;
      if ( k < 0 )
      {
        v14 = k;
        break;
      }
      if ( v36 + 64 > 0x400 )
      {
        v14 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v36 >> 1);
        wcscat_s(Dst, 0x200uLL, L"\\");
        RtlInitUnicodeString(&v27, Dst);
        v28.Length = 48;
        v28.RootDirectory = 0LL;
        v28.Attributes = 576;
        v28.ObjectName = &v27;
        *(_OWORD *)&v28.SecurityDescriptor = 0LL;
        v18 = ZwOpenKey(&Handle, 0x20019u, &v28);
        if ( v18 < 0 )
        {
          v14 = v18;
        }
        else
        {
          v22[0] = 0;
          v20 = IsRegistryKeyLocked(Handle, v22);
          if ( v20 >= 0 && !v22[0] )
            v20 = ZwLockRegistryKey((__int64)Handle, v19);
          ZwClose(Handle);
          if ( v20 >= 0 )
            v20 = v14;
          v14 = v20;
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
