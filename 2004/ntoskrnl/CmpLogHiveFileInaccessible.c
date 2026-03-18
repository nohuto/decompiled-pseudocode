/*
 * XREFs of CmpLogHiveFileInaccessible @ 0x14063CA24
 * Callers:
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140271FB0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140276BC8 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F3C20 (ZwOpenFile.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14063C974 (CmpQueryFileSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLogHiveFileInaccessible(UNICODE_STRING *a1, int a2, ULONG a3, ULONG a4)
{
  _BYTE *v8; // r15
  char v9; // r12
  size_t *v10; // r14
  PACCESS_TOKEN PrimaryToken; // rcx
  int v12; // eax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  size_t *v15; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v20[80]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+100h] [rbp+0h] BYREF
  int *v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]
  _BYTE v24[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE *v25; // [rsp+140h] [rbp+40h]
  int v26; // [rsp+148h] [rbp+48h]
  int v27; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v28; // [rsp+150h] [rbp+50h]
  __int64 v29; // [rsp+158h] [rbp+58h]

  memset(v20, 0, 0x44uLL);
  v8 = SeNullSid;
  v14 = 0LL;
  FileHandle = 0LL;
  v15 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  if ( ZwOpenFile(&FileHandle, 0x20000u, &ObjectAttributes, &IoStatusBlock, a4, a3) >= 0
    && (int)CmpQueryFileSecurityDescriptor(FileHandle, &v14) >= 0 )
  {
    if ( (int)SeConvertSecurityDescriptorToStringSecurityDescriptor(v14, 1LL, 12LL, &v15, &v13) >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = SubjectContext.PrimaryToken;
      v9 = 1;
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
      SeQueryUserSidToken((__int64)PrimaryToken, v20, 0x44u, 0LL);
      v8 = v20;
    }
    v10 = v15;
  }
  if ( (unsigned int)dword_140C02130 > 3 && tlgKeywordOn((__int64)&dword_140C02130, 0x200000000008LL) )
  {
    v13 = a2;
    v22 = &v13;
    v23 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v24, v10);
    v12 = (unsigned __int8)v8[1];
    v25 = v8;
    v27 = 0;
    v14 = 0x1000000LL;
    v29 = 8LL;
    v26 = 4 * v12 + 8;
    v28 = &v14;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)&dword_140022891 + 3,
      0LL,
      0LL,
      6u,
      &v21);
  }
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( FileHandle )
    ZwClose(FileHandle);
}
