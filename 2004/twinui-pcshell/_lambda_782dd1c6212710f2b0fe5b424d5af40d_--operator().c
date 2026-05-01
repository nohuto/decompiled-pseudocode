/*
 * XREFs of _lambda_782dd1c6212710f2b0fe5b424d5af40d_::operator() @ 0x180057A80
 * Callers:
 *     _lambda_782dd1c6212710f2b0fe5b424d5af40d_::_lambda_invoker_cdecl_ @ 0x180057A70 (_lambda_782dd1c6212710f2b0fe5b424d5af40d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

void __fastcall lambda_782dd1c6212710f2b0fe5b424d5af40d_::operator()(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rcx
  const wchar_t *v3; // r8
  const wchar_t *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // r10d
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // eax
  int v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  const WCHAR *v13; // [rsp+38h] [rbp-51h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-49h] BYREF
  const wchar_t *v15; // [rsp+50h] [rbp-39h]
  const wchar_t *v16; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  int *v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  const wchar_t *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int *v26; // [rsp+A0h] [rbp+17h]
  __int64 v27; // [rsp+A8h] [rbp+1Fh]
  const wchar_t *v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+B8h] [rbp+2Fh]
  int v30; // [rsp+BCh] [rbp+33h]
  const WCHAR *v31; // [rsp+C0h] [rbp+37h]
  int v32; // [rsp+C8h] [rbp+3Fh]
  int v33; // [rsp+CCh] [rbp+43h]

  if ( (unsigned int)dword_1805C4688 > 5 )
  {
    v2 = *(const WCHAR **)(a2 + 16);
    v3 = *(const wchar_t **)(a2 + 40);
    v4 = *(const wchar_t **)(a2 + 48);
    v11 = *(_DWORD *)(a2 + 56);
    v12 = *(_DWORD *)(a2 + 4);
    v5 = -1LL;
    v13 = v2;
    v15 = v3;
    v16 = v4;
    if ( v2 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v2[v6] );
      v7 = 2 * v6 + 2;
    }
    else
    {
      v2 = &szAgent;
      v7 = 2;
    }
    v31 = v2;
    v32 = v7;
    v33 = 0;
    if ( v3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v3 + v8) );
      v9 = v8 + 1;
    }
    else
    {
      v3 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v9 = 1;
    }
    v29 = v9;
    v26 = &v11;
    v28 = v3;
    v30 = 0;
    v27 = 4LL;
    if ( v4 )
    {
      do
        ++v5;
      while ( *((_BYTE *)v4 + v5) );
      v10 = v5 + 1;
    }
    else
    {
      v4 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v10 = 1;
    }
    v24 = v10;
    v23 = v4;
    v21 = &v12;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1805C4690;
    v25 = 0;
    v22 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1805C4690;
    v18 = &unk_1804F7B8E;
    v20 = 1;
    UserData.Reserved = 2;
    v19 = 64;
    LODWORD(v13) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
