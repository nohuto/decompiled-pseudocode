/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0039064
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C009E708 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C003938C (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0039540 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _wcsupr @ 0x1C00CD0D0 (_wcsupr.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01F9B6C (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  char v3; // r13
  wchar_t *v4; // rsi
  void *v5; // r14
  PACCESS_TOKEN v6; // r12
  const char *v7; // rdx
  __int64 v8; // rcx
  void *ProcessSectionBaseAddress; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  int v13; // edi
  PIMAGE_NT_HEADERS v14; // rax
  DWORD TimeDateStamp; // edi
  DWORD CheckSum; // eax
  struct _CIT_PROGRAM_ID *v17; // rcx
  unsigned __int64 v18; // rax
  int v20; // eax
  const char *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r8d
  int v24; // ecx
  char v25; // [rsp+30h] [rbp-228h]
  wchar_t *String; // [rsp+38h] [rbp-220h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-218h] BYREF
  void *v28; // [rsp+48h] [rbp-210h]
  size_t Size; // [rsp+50h] [rbp-208h] BYREF
  size_t v30; // [rsp+58h] [rbp-200h] BYREF
  struct _CIT_PROGRAM_ID *v31; // [rsp+60h] [rbp-1F8h]
  __int64 v32; // [rsp+68h] [rbp-1F0h]
  PACCESS_TOKEN v33; // [rsp+70h] [rbp-1E8h]
  DWORD v34; // [rsp+78h] [rbp-1E0h]
  DWORD v35; // [rsp+7Ch] [rbp-1DCh]
  _BYTE v36[144]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+120h] [rbp-138h] BYREF

  v31 = a2;
  v3 = 0;
  v25 = 0;
  pImageFileName = 0LL;
  v4 = 0LL;
  String = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*a1);
  v28 = ProcessSectionBaseAddress;
  if ( !ProcessSectionBaseAddress )
  {
    v13 = -1073741637;
    v23 = 2374;
    goto LABEL_30;
  }
  if ( a1 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v8, v7, v10, v11) )
  {
    KeAttachProcess(*a1);
    v3 = 1;
    v25 = 1;
  }
  if ( (*((_DWORD *)a1 + 205) & 0x30) == 0x10 )
  {
    v6 = PsReferencePrimaryToken(*a1);
    v33 = v6;
    Size = 256LL;
    v30 = 130LL;
    v20 = RtlQueryPackageIdentity(v6, Src, &Size, v36, &v30, 0LL, v25);
    if ( v20 < 0 )
    {
      CitpLogFailureWorker(v20, v21, 0x97Bu);
      goto LABEL_5;
    }
    v4 = (wchar_t *)Win32AllocPool(Size, 1231254357LL);
    String = v4;
    v22 = Win32AllocPool(v30, 1231254357LL);
    v5 = (void *)v22;
    v32 = v22;
    if ( v4 && v22 )
    {
      memmove(v4, Src, Size);
      wcsupr(v4);
      memmove(v5, v36, v30);
      goto LABEL_5;
    }
    v13 = -1073741670;
    v23 = 2416;
LABEL_30:
    v24 = v13;
LABEL_32:
    CitpLogFailureWorker(v24, v7, v23);
    goto LABEL_13;
  }
LABEL_5:
  if ( v4 )
    goto LABEL_10;
  v12 = SeLocateProcessImageName(*a1, &pImageFileName);
  v13 = v12;
  if ( v12 < 0 )
  {
    pImageFileName = 0LL;
    v23 = 2440;
    v24 = v12;
    goto LABEL_32;
  }
  if ( !pImageFileName->Length )
  {
    v13 = -1073741637;
    goto LABEL_13;
  }
  v13 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v4 = String;
  if ( v13 < 0 )
    goto LABEL_13;
  wcsupr(String);
  ProcessSectionBaseAddress = v28;
LABEL_10:
  v14 = RtlImageNtHeader(ProcessSectionBaseAddress);
  TimeDateStamp = v14->FileHeader.TimeDateStamp;
  v34 = TimeDateStamp;
  CheckSum = v14->OptionalHeader.CheckSum;
  LODWORD(v28) = CheckSum;
  v35 = CheckSum;
  if ( v5 )
  {
    wcsupr((wchar_t *)v5);
    CheckSum = (unsigned int)v28;
  }
  v17 = v31;
  *(_QWORD *)v31 = v4;
  v4 = 0LL;
  *((_QWORD *)v17 + 1) = v5;
  v5 = 0LL;
  *((_DWORD *)v17 + 6) = TimeDateStamp;
  *((_DWORD *)v17 + 7) = CheckSum;
  *((_DWORD *)v17 + 8) = (*((_DWORD *)a1 + 205) >> 4) & 3;
  v18 = CitpProgramIdCalculateHash(v17);
  *((_QWORD *)v31 + 2) = v18;
  v13 = 0;
LABEL_13:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( v3 )
    KeDetachProcess();
  return (unsigned int)v13;
}
