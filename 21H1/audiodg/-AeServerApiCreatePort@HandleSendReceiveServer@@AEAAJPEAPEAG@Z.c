/*
 * XREFs of ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x14001868C
 * Callers:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x1400185F4 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000DDE0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z @ 0x140018838 (-SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiCreatePort(HandleSendReceiveServer *this, PCWSTR *a2)
{
  int v4; // r12d
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rbx
  ULONG v7; // eax
  ULONG v8; // r14d
  int v9; // ebx
  HandleSendReceiveServer *v10; // rcx
  int inited; // esi
  HLOCAL v12; // r15
  int v13; // eax
  int v14; // eax
  unsigned __int16 *v16; // rbx
  ULONG v17; // eax
  signed int LastError; // eax
  __int64 v19; // [rsp+28h] [rbp-A1h]
  __int64 Seed; // [rsp+30h] [rbp-99h] BYREF
  int v21; // [rsp+38h] [rbp-91h]
  HLOCAL hMem; // [rsp+40h] [rbp-89h] BYREF
  int v23; // [rsp+48h] [rbp-81h] BYREF
  __int64 v24; // [rsp+50h] [rbp-79h]
  _UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-71h]
  int v26; // [rsp+60h] [rbp-69h]
  HLOCAL v27; // [rsp+68h] [rbp-61h]
  __int64 v28; // [rsp+70h] [rbp-59h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-29h]

  v4 = 0;
  if ( !a2 )
    return (unsigned int)-2147024809;
  v5 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
  *a2 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  *v5 = 0;
  v6 = (unsigned __int16 *)*a2;
  LODWORD(Seed) = MEMORY[0x7FFE0320];
  do
  {
    v7 = RtlRandomEx((PULONG)&Seed);
    v8 = v7;
  }
  while ( !v7 );
  v9 = StringCchPrintfW(v6, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v7, Seed);
  if ( v9 >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, *a2);
    if ( inited < 0 )
      goto LABEL_28;
    v9 = HandleSendReceiveServer::SecurityCreateSecurityDescriptor(v10, &hMem);
    if ( v9 < 0 )
      goto LABEL_12;
    v28 = 0LL;
    v24 = 0LL;
    v12 = hMem;
    v23 = 48;
    v26 = 64;
    p_DestinationString = &DestinationString;
    v27 = hMem;
    memset_0(v30, 0, 0x48uLL);
    v13 = 3;
    v31 = 48LL;
    while ( 1 )
    {
      v21 = v13 - 1;
      v14 = NtAlpcCreatePort((char *)this + 8, &v23, v30);
      inited = v14;
      if ( v14 != -1073741771 && v14 != 0x40000000 )
      {
LABEL_11:
        LocalFree(v12);
LABEL_12:
        if ( inited >= 0 )
          return (unsigned int)v9;
LABEL_28:
        RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
        LastError = GetLastError();
        v9 = LastError;
        if ( LastError > 0 )
          v9 = (unsigned __int16)LastError | 0x80070000;
        CoTaskMemFree((LPVOID)*a2);
        *a2 = 0LL;
        return (unsigned int)v9;
      }
      v16 = (unsigned __int16 *)*a2;
      if ( ++v4 )
      {
        if ( !v8 )
        {
          v9 = -2147024809;
          goto LABEL_24;
        }
        v17 = v4 + v8;
      }
      else
      {
        HIDWORD(Seed) = MEMORY[0x7FFE0320];
        do
          v17 = RtlRandomEx((PULONG)&Seed + 1);
        while ( !v17 );
        v12 = hMem;
        v8 = v17;
      }
      LODWORD(v19) = v17;
      v9 = StringCchPrintfW(v16, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v19);
LABEL_24:
      if ( v9 >= 0 && RtlInitUnicodeStringEx(&DestinationString, *a2) >= 0 )
      {
        v24 = 0LL;
        v28 = 0LL;
        p_DestinationString = &DestinationString;
        v13 = v21;
        v23 = 48;
        v26 = 64;
        v27 = v12;
        if ( v21 > 0 )
          continue;
      }
      goto LABEL_11;
    }
  }
  return (unsigned int)v9;
}
