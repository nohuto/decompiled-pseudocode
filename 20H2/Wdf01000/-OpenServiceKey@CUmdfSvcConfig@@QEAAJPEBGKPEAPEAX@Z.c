/*
 * XREFs of ?OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z @ 0x1C008DA98
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C0041DE4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     ?OpenKeyHelper@CUmdfSvcConfig@@AEAAJPEAXPEBU_UNICODE_STRING@@KEPEAPEAX@Z @ 0x1C008D9FC (-OpenKeyHelper@CUmdfSvcConfig@@AEAAJPEAXPEBU_UNICODE_STRING@@KEPEAPEAX@Z.c)
 */

__int64 __fastcall CUmdfSvcConfig::OpenServiceKey(
        CUmdfSvcConfig *this,
        const wchar_t *ServiceName,
        unsigned int RegKeyHandle,
        void **a4)
{
  __int64 v7; // rax
  const wchar_t *v8; // rax
  __int64 v9; // r8
  NTSTATUS appended; // ebx
  unsigned __int16 v11; // di
  const wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rsi
  unsigned int v14; // r9d
  _UNICODE_STRING regPath; // [rsp+30h] [rbp-38h] BYREF
  void *hServiceKey; // [rsp+78h] [rbp+10h] BYREF

  hServiceKey = 0LL;
  *a4 = 0LL;
  LOWORD(v7) = 0;
  regPath = 0LL;
  if ( ServiceName )
  {
    v8 = ServiceName;
    v9 = 60LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v9;
    }
    while ( v9 );
    appended = v9 == 0 ? 0xC000000D : 0;
    v7 = (60 - v9) & -(__int64)(v9 != 0);
  }
  else
  {
    appended = -1073741811;
  }
  if ( appended >= 0 )
  {
    v11 = 2 * (v7 + 78);
    if ( v11 < 0x9Cu )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      PoolWithTag = (const wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * v11, 0x43534D55u);
      v13 = (wchar_t *)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        RtlInitUnicodeString(&regPath, PoolWithTag);
        regPath.MaximumLength = v11;
        appended = RtlAppendUnicodeToString(
                     &regPath,
                     L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\WUDF\\Services\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&regPath, ServiceName);
          if ( appended >= 0 )
          {
            appended = CUmdfSvcConfig::OpenKeyHelper(this, 0LL, &regPath, v14, this->m_AutoClose, &hServiceKey);
            if ( appended >= 0 )
              *a4 = hServiceKey;
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)appended;
}
