/*
 * XREFs of DxgkIsGraphicsPartitionApplication @ 0x1C03354A0
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C018B330 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

char __fastcall DxgkIsGraphicsPartitionApplication(PEPROCESS Process)
{
  char v2; // si
  PACCESS_TOKEN v3; // rdi
  NTSTATUS v4; // eax
  int v5; // ebx
  char v6; // r15
  int v8; // eax
  char v9; // cl
  int v10; // eax
  char v11; // cl
  int v12; // eax
  char v13; // cl
  PACCESS_TOKEN v14; // rdi
  int v15; // ebx
  __int16 v16; // ax
  _WORD *v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  _WORD *i; // rdi
  char v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+51h] [rbp-AFh] BYREF
  char v23; // [rsp+52h] [rbp-AEh] BYREF
  _BYTE v24[5]; // [rsp+53h] [rbp-ADh] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  _WORD v29[2]; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+7Ch] [rbp-84h]
  _BYTE *v31; // [rsp+80h] [rbp-80h]
  _QWORD v32[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v33[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v34[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v35[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v38[2]; // [rsp+10Eh] [rbp+Eh] BYREF
  _WORD Src[128]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v40[144]; // [rsp+210h] [rbp+110h] BYREF

  v2 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 1391LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ExGetPreviousMode() == UserMode", 1391LL, 0LL, 0LL, 0LL, 0LL);
  }
  TokenInformation = 0LL;
  v3 = PsReferencePrimaryToken(Process);
  v4 = SeQueryInformationToken(v3, TokenIsAppContainer, &TokenInformation);
  v32[0] = 1441812LL;
  v5 = v4;
  v32[1] = L"WIN://BGKD";
  v6 = SeSecurityAttributePresent(v3, v32);
  PsDereferencePrimaryToken(v3);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL, Process);
    return 0;
  }
  if ( !TokenInformation || v6 == 1 )
    return 0;
  v33[0] = 2097182LL;
  v33[1] = L"shellExperience";
  v34[0] = 1703960LL;
  v34[1] = L"hevcPlayback";
  v35[0] = 2359330LL;
  v35[1] = L"expandedResources";
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v8 = RtlCapabilityCheck(0LL, v33, &v22);
  v9 = v22;
  if ( v8 < 0 )
    v9 = 0;
  v22 = v9;
  v10 = RtlCapabilityCheck(0LL, v34, &v21);
  v11 = v21;
  if ( v10 < 0 )
    v11 = 0;
  v21 = v11;
  v12 = RtlCapabilityCheck(0LL, v35, &v23);
  v13 = v23;
  if ( v12 < 0 )
    v13 = 0;
  v23 = v13;
  if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) )
  {
LABEL_33:
    if ( v21 )
      goto LABEL_34;
    return 0;
  }
  if ( v21 )
  {
LABEL_34:
    if ( !v22 && !v23 )
      return v2;
    return 0;
  }
  if ( !v22 && !v23 )
  {
    v27 = 256LL;
    v24[0] = 0;
    v14 = PsReferencePrimaryToken(Process);
    v15 = RtlQueryPackageIdentity(v14, Src, &v27, 0LL, 0LL, v24);
    PsDereferencePrimaryToken(v14);
    if ( v15 >= 0 && v24[0] )
    {
      v30 = 0;
      v31 = v40;
      v16 = Src[0];
      v17 = Src;
      *(&ObjectAttributes.Length + 1) = 0;
      v18 = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      v29[1] = 130;
      while ( v16 != 95 && v16 )
      {
        v18 += 2;
        v16 = *++v17;
      }
      v19 = 0;
      for ( i = &v38[v27]; *i != 95 && i != Src; --i )
        v19 += 2;
      if ( (unsigned __int64)(v19 + v18) + 2 <= 0x82 )
      {
        KeyHandle = 0LL;
        DestinationString = 0LL;
        memmove(v40, Src, v18);
        memmove(&v31[v18], i, v19 + 2LL);
        v29[0] = v19 + v18;
        RtlInitUnicodeString(
          &DestinationString,
          L"\\REGISTRY\\MACHINE\\Xbox\\Software\\Microsoft\\Durango\\LiveSettings\\HevcOverride");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        {
          ObjectAttributes.RootDirectory = KeyHandle;
          Handle = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v29;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            v21 = 1;
            ZwClose(Handle);
          }
          ZwClose(KeyHandle);
        }
      }
    }
    goto LABEL_33;
  }
  return 0;
}
