/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C00EF88C
 * Callers:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C00EF4E4 (--0PROXYPORT@@QEAA@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall PROXYPORT::SecureConnectPort(
        PROXYPORT *this,
        void **a2,
        struct _UNICODE_STRING *a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        struct _PORT_VIEW *ClientView,
        PSID Sid,
        struct _REMOTE_PORT_VIEW *a7,
        unsigned int *MaxMessageLength)
{
  PVOID v11; // r15
  NTSTATUS v12; // ebx
  HANDLE SectionHandle; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  PVOID v18; // rdi
  __int64 CurrentProcess; // rax
  void *PortHandle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  PVOID v23; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v24[2]; // [rsp+68h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-39h] BYREF

  PortHandle = 0LL;
  v11 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(gpepCSRSS, &ApcState);
  v12 = ZwSecureConnectPort(&PortHandle, a3, a4, ClientView, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v12 >= 0 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v11 = Object;
    ZwClose(PortHandle);
    ClientView->ViewBase = 0LL;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v12 >= 0 )
  {
    SectionHandle = ClientView->SectionHandle;
    v23 = 0LL;
    v14 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &v23, 0LL);
    v18 = v23;
    v12 = v14;
    if ( v14 < 0
      || (v24[0] = ClientView->SectionOffset,
          v24[1] = 0,
          CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
          v12 = MmMapViewOfSection(
                  v18,
                  CurrentProcess,
                  &ClientView->ViewBase,
                  0LL,
                  0LL,
                  v24,
                  &ClientView->ViewSize,
                  2,
                  0,
                  4),
          ObfDereferenceObject(v18),
          v12 < 0) )
    {
      ObfDereferenceObject(v11);
    }
    else
    {
      *a2 = v11;
    }
  }
  return (unsigned int)v12;
}
