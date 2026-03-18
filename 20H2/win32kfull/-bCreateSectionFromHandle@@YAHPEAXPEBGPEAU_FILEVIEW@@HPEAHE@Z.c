/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008E5FC
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008E438 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00F5D48 (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 * Callees:
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C008E8EC (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ZwWin32CreateSection @ 0x1C008EA34 (ZwWin32CreateSection.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C008EB4C (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C012B85C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0288C1C (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 */

__int64 __fastcall bCreateSectionFromHandle(
        void *a1,
        PCWSTR SourceString,
        struct _FILEVIEW *a3,
        int a4,
        int *a5,
        unsigned __int8 a6)
{
  const WCHAR *v7; // r15
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // edx
  int v14; // ebx
  wchar_t *v15; // rax
  const wchar_t *v16; // r15
  NTSTATUS v17; // r13d
  int v18; // eax
  int v19; // ecx
  int Section; // eax
  __int64 result; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v26; // eax
  int v27; // [rsp+28h] [rbp-D8h]
  void *v28; // [rsp+38h] [rbp-C8h]
  bool v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v32[5]; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v33; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES v35; // [rsp+D8h] [rbp-28h] BYREF
  __int128 FileInformation; // [rsp+108h] [rbp+8h] BYREF
  __int64 v37; // [rsp+118h] [rbp+18h]
  __int128 v38; // [rsp+120h] [rbp+20h] BYREF
  __int128 v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+40h]

  v33 = SourceString;
  *(&v35.Length + 1) = 0;
  *(&v35.Attributes + 1) = 0;
  v7 = SourceString;
  v37 = 0LL;
  v40 = 0LL;
  v30 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  DestinationString = 0LL;
  memset(v32, 0, sizeof(v32));
  v10 = v32[1];
  *(_OWORD *)a3 = v32[0];
  *((_OWORD *)a3 + 1) = v10;
  v11 = v32[3];
  DWORD2(v32[2]) = 8 * (a6 & 1);
  *((_OWORD *)a3 + 2) = v32[2];
  v12 = v32[4];
  *((_OWORD *)a3 + 3) = v11;
  *((_OWORD *)a3 + 4) = v12;
  RtlInitUnicodeString(&DestinationString, v7);
  *(_QWORD *)&v32[3] = a1;
  if ( a1
    && ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0
    && ZwQueryInformationFile(a1, &IoStatusBlock, &v38, 0x28u, FileBasicInformation) >= 0 )
  {
    v14 = (8 * (a6 & 1)) | 1;
    *(_QWORD *)&v32[0] = v39;
    DWORD2(v32[2]) = v14;
    if ( a5 )
    {
      v15 = (wchar_t *)AllocFreeTmpBuffer(536LL);
      v16 = v15;
      if ( !v15 )
        return 0LL;
      *a5 = 0;
      v17 = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, v15, 0x218u, FileFsAttributeInformation);
      if ( v17 >= 0 && !_wcsnicmp(v16 + 6, L"FAT", 3uLL) )
        *a5 = 1;
      FreeTmpBuffer(v16);
      if ( v17 < 0 )
        return 0LL;
      v7 = v33;
    }
    if ( a4 )
    {
      v26 = DWORD2(FileInformation);
      if ( a4 > 0 )
        v26 = a4;
      v30 = v26;
      if ( ZwSetInformationFile(a1, &IoStatusBlock, &v30, 8u, FileEndOfFileInformation) < 0 )
        return 0LL;
      v19 = v30;
      v18 = 0;
      *((_QWORD *)&FileInformation + 1) = (unsigned int)v30;
    }
    else
    {
      v18 = HIDWORD(FileInformation);
      v19 = DWORD2(FileInformation);
    }
    if ( !v18 )
    {
      DWORD2(v32[1]) = v19;
      if ( (v14 & 8) == 0 )
      {
        v29 = 0;
        if ( (int)TryGetFileDeviceRemoteBit(a1, &v29) < 0 )
          return 0LL;
        v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v29)) & 2;
        DWORD2(v32[2]) = v14;
      }
      v35.Length = 48;
      v35.RootDirectory = 0LL;
      v35.Attributes = 512;
      v35.ObjectName = 0LL;
      *(_OWORD *)&v35.SecurityDescriptor = 0LL;
      if ( (v14 & 2) != 0 )
        Section = ObtainSectionForNetworkedFontFile(
                    &DestinationString,
                    (struct _FILEVIEW *)v32,
                    &v35,
                    (union _LARGE_INTEGER *)&FileInformation + 1,
                    a4 != 0);
      else
        Section = ZwWin32CreateSection(
                    (int)&v32[2],
                    v13,
                    (int)&v35,
                    (int)&FileInformation + 8,
                    a4 != 0 ? 4 : 2,
                    v27,
                    (__int64)a1,
                    v28);
      if ( Section >= 0 )
      {
        if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v32[3]) )
        {
          DWORD2(v32[2]) |= 0x10u;
LABEL_22:
          result = 1LL;
          v22 = v32[1];
          *(_OWORD *)a3 = v32[0];
          v23 = v32[2];
          *((_OWORD *)a3 + 1) = v22;
          v24 = v32[3];
          *((_OWORD *)a3 + 2) = v23;
          v25 = v32[4];
          *((_OWORD *)a3 + 3) = v24;
          *((_OWORD *)a3 + 4) = v25;
          return result;
        }
        if ( (int)ScrutinizeFontLoad(0LL, v7) >= 0 )
          goto LABEL_22;
      }
    }
  }
  return 0LL;
}
