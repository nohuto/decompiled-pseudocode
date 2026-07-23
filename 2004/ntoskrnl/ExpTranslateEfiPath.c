/*
 * XREFs of ExpTranslateEfiPath @ 0x14094ECAC
 * Callers:
 *     NtTranslateFilePath @ 0x140952380 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D32F0 (swprintf_s.c)
 *     wcscpy_s @ 0x1403D4C70 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403D4D00 (wcsncat_s.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     ExpCreateOutputARC @ 0x14094C414 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14094C6EC (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094C7BC (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14094CC70 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14094D0CC (ExpGetDriveGeometry.c)
 *     ExpParseEfiPath @ 0x14094D620 (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x14094F62C (ExpTranslateSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpTranslateEfiPath(__int64 a1, int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 result; // rax
  char *v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // esi
  GUID *v9; // r13
  NTSTATUS DiskSignature; // ebx
  SIZE_T v11; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r15
  rsize_t v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  wchar_t *v19; // rbx
  int v20; // r15d
  PVOID v21; // rbx
  int OutputNT; // eax
  int DriveGeometry; // esi
  __int64 v24; // [rsp+20h] [rbp-79h]
  char v25; // [rsp+40h] [rbp-59h] BYREF
  char v26; // [rsp+41h] [rbp-58h]
  PVOID P; // [rsp+48h] [rbp-51h] BYREF
  PVOID v28; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-31h] BYREF
  unsigned int *v32; // [rsp+70h] [rbp-29h]
  _DWORD *v33; // [rsp+78h] [rbp-21h]
  UNICODE_STRING GuidString; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  __int128 v36; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+17h]

  v28 = 0LL;
  P = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v32 = a4;
  v33 = a3;
  v37 = 0LL;
  v25 = 0;
  GuidString = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
  result = ExpParseEfiPath((char *)(a1 + 12), &v28, &P, &v25);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v6 = (char *)v28;
    v7 = 0;
    v29 = 0;
    v26 = 0;
    v8 = 1;
    if ( v25 == 1 && a2 != 2 )
    {
      v9 = (GUID *)((char *)v28 + 24);
      DiskSignature = RtlStringFromGUIDEx((PGUID)((char *)v28 + 24), &GuidString, 1u);
      if ( DiskSignature < 0 )
        goto LABEL_12;
      v11 = (unsigned int)GuidString.Length + 22;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ExFreePoolWithTag(GuidString.Buffer, 0);
LABEL_7:
        if ( P )
          ExFreePoolWithTag(P, 0);
        DiskSignature = -1073741670;
LABEL_42:
        ExFreePoolWithTag(v6, 0);
        return (unsigned int)DiskSignature;
      }
      v14 = v11 >> 1;
      wcscpy_s(PoolWithTag, v14, L"\\??\\Volume");
      wcsncat_s(v13, v14, GuidString.Buffer, GuidString.Length);
      ExFreePoolWithTag(GuidString.Buffer, 0);
      LODWORD(v14) = ExpTranslateSymbolicLink(v13);
      ExFreePoolWithTag(v13, 0);
      if ( (v14 & 0x80000000) == 0LL )
      {
LABEL_27:
        v21 = P;
        if ( a2 == 3 )
        {
          OutputNT = ExpCreateOutputNT((__int64)v33, v32, (const wchar_t **)&DestinationString, (const wchar_t *)P);
        }
        else if ( a2 == 2 )
        {
          if ( v26 == 1 )
          {
            DriveGeometry = ExpGetDriveGeometry(v7, &v36);
            if ( DriveGeometry < 0 )
            {
LABEL_36:
              ExFreePoolWithTag(DestinationString.Buffer, 0);
              if ( v21 )
                ExFreePoolWithTag(v21, 0);
              DiskSignature = DriveGeometry;
              goto LABEL_42;
            }
            v8 = HIDWORD(v37);
          }
          LODWORD(v28) = *((_DWORD *)v6 + 1);
          v31 = v8 * *((_QWORD *)v6 + 1);
          v30 = v8 * *((_QWORD *)v6 + 2);
          OutputNT = ExpCreateOutputSIGNATURE(
                       (__int64)v33,
                       v32,
                       v9,
                       (unsigned int *)&v28,
                       &v31,
                       &v30,
                       (wchar_t *)v21,
                       v25);
        }
        else
        {
          OutputNT = ExpCreateOutputARC(v33, v32, (__int64)&DestinationString, (const wchar_t *)P);
        }
        DriveGeometry = OutputNT;
        goto LABEL_36;
      }
    }
    v9 = (GUID *)(v6 + 24);
    LODWORD(v28) = *((_DWORD *)v6 + 1);
    DiskSignature = ExpFindDiskSignature((__int64)(v6 + 24), &v28, &v29, &v31, &v30, v25);
    if ( DiskSignature < 0 )
    {
LABEL_12:
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_42;
    }
    if ( *((_DWORD *)v6 + 1) == (_DWORD)v28 )
    {
      v15 = v31;
      v7 = v29;
      v16 = v30;
      if ( *((_QWORD *)v6 + 1) == v31 && *((_QWORD *)v6 + 2) == v30 )
        goto LABEL_22;
      v17 = ExpGetDriveGeometry(v29, &v36);
      v18 = HIDWORD(v37);
      if ( v17 < 0 )
        v18 = 1;
      HIDWORD(v37) = v18;
      if ( *((_QWORD *)v6 + 1) == v15 / v18 && *((_QWORD *)v6 + 2) == v16 / v18 )
      {
        v26 = 1;
LABEL_22:
        v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
        if ( !v19 )
          goto LABEL_7;
        LODWORD(v24) = (_DWORD)v28;
        swprintf_s(v19, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v7, v24);
        v20 = ExpTranslateSymbolicLink(v19);
        ExFreePoolWithTag(v19, 0);
        if ( v20 < 0 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
          DiskSignature = v20;
          goto LABEL_42;
        }
        goto LABEL_27;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    DiskSignature = -1073741811;
    goto LABEL_42;
  }
  return result;
}
