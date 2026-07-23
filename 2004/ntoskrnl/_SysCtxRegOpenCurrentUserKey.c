/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x14071BB78
 * Callers:
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405DBCC4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405E2D68 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C035C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406C28E4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14071A9B0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14071AED4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14071B76C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140971960 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1409749CC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097531C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x1402FE9C0 (RtlSubAuthoritySid.c)
 *     RtlUShortAdd @ 0x140340B04 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1403F39E0 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1403F3BA0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1403F3BC0 (ZwOpenProcessTokenEx.c)
 *     _SysCtxRegOpenKey @ 0x1405E1CE0 (_SysCtxRegOpenKey.c)
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x1406F4200 (RtlInitializeSid.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x140701BAC (_SysCtxGetCachedContextBaseKey.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v8; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v12; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v14; // rcx
  USHORT pusResult[2]; // [rsp+30h] [rbp-99h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-8Dh] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-81h] BYREF
  int v20; // [rsp+50h] [rbp-79h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  __int64 v22; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-59h] BYREF
  _BYTE Sid[16]; // [rsp+80h] [rbp-49h] BYREF
  PSID Sid2[11]; // [rsp+90h] [rbp-39h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  TokenInformation = 0;
  v20 = 0;
  ReturnLength = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v22 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  pusResult[0] = 0;
  v8 = 0LL;
  UnicodeString = 0LL;
  appended = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0x200u, &Handle);
  if ( appended == -1073741700 )
    appended = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
  if ( appended >= 0 )
  {
    appended = ZwQueryInformationToken(Handle, TokenType, &TokenInformation, 4u, &ReturnLength);
    if ( appended >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        appended = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &v20, 4u, &ReturnLength);
        if ( appended < 0 )
          goto LABEL_11;
        if ( v20 < 2 )
        {
          appended = -1073741790;
          goto LABEL_11;
        }
      }
      else if ( TokenInformation != 1 )
      {
LABEL_10:
        appended = -1073741637;
        goto LABEL_11;
      }
      appended = ZwQueryInformationToken(Handle, TokenUser, Sid2, 0x54u, &ReturnLength);
      if ( appended >= 0 )
      {
        v10 = Sid2[0];
        appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        if ( appended >= 0 )
        {
          *RtlSubAuthoritySid(Sid, 0) = 18;
          if ( RtlEqualSid(Sid, v10) )
            goto LABEL_10;
          appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
          if ( appended >= 0 )
          {
            appended = RtlUShortAdd(UnicodeString.Length, 0x1Eu, pusResult);
            if ( appended >= 0 )
            {
              appended = RtlUShortAdd(pusResult[0], 2u, pusResult);
              if ( appended >= 0 )
              {
                v12 = pusResult[0];
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pusResult[0], 0x53504E50u);
                v8 = PoolWithTag;
                if ( PoolWithTag )
                {
                  Destination.Length = 0;
                  Destination.MaximumLength = v12;
                  Destination.Buffer = PoolWithTag;
                  appended = RtlAppendUnicodeStringToString(&Destination, &stru_1400099C0);
                  if ( appended >= 0 )
                  {
                    appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                    if ( appended >= 0 )
                    {
                      appended = SysCtxGetCachedContextBaseKey(a1, 3, &v22);
                      if ( appended >= 0 )
                        appended = SysCtxRegOpenKey(v14, v22, (__int64)(Destination.Buffer + 15), a2, a3, a4);
                    }
                  }
                }
                else
                {
                  appended = -1073741801;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
