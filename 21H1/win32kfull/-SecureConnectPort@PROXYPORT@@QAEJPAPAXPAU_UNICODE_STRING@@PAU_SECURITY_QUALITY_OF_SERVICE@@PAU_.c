/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@QAEJPAPAXPAU_UNICODE_STRING@@PAU_SECURITY_QUALITY_OF_SERVICE@@PAU_PORT_VIEW@@PAXPAU_REMOTE_PORT_VIEW@@PAK46@Z @ 0x21076B
 * Callers:
 *     ??0PROXYPORT@@QAE@_K@Z @ 0x21026A (--0PROXYPORT@@QAE@_K@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall PROXYPORT::SecureConnectPort(
        PROXYPORT *this,
        void **a2,
        struct _UNICODE_STRING *a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        struct _PORT_VIEW *a5,
        PSID Sid,
        struct _REMOTE_PORT_VIEW *a7,
        PULONG MaxMessageLength,
        void *a9,
        unsigned int *a10)
{
  PVOID v10; // edi
  NTSTATUS v11; // esi
  NTSTATUS v12; // eax
  HANDLE SectionHandle; // ecx
  PPORT_VIEW v14; // ecx
  int CurrentProcess; // eax
  PVOID *p_ViewBase; // [esp-20h] [ebp-6Ch]
  SIZE_T *p_ViewSize; // [esp-10h] [ebp-5Ch]
  ULONG SectionOffset; // [esp+10h] [ebp-3Ch] BYREF
  PPORT_VIEW ClientView; // [esp+14h] [ebp-38h]
  PVOID Object; // [esp+1Ch] [ebp-30h] BYREF
  void *PortHandle; // [esp+20h] [ebp-2Ch] BYREF
  PSECURITY_QUALITY_OF_SERVICE SecurityQos; // [esp+24h] [ebp-28h]
  PUNICODE_STRING PortName; // [esp+28h] [ebp-24h] BYREF
  struct _KAPC_STATE ApcState; // [esp+2Ch] [ebp-20h] BYREF

  PortHandle = 0;
  PortName = a3;
  SecurityQos = a4;
  ClientView = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v10 = 0;
  KeStackAttachProcess((PRKPROCESS)_gpepCSRSS, &ApcState);
  v11 = ZwSecureConnectPort(&PortHandle, a3, a4, a5, Sid, 0, MaxMessageLength, 0, 0);
  if ( v11 >= 0 )
  {
    Object = 0;
    v12 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0);
    v10 = Object;
    v11 = v12;
    ZwClose(PortHandle);
    a5->ViewBase = 0;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v11 >= 0 )
  {
    SectionHandle = a5->SectionHandle;
    PortName = 0;
    v11 = ObReferenceObjectByHandle(SectionHandle, 6u, _MmSectionObjectType, 0, (PVOID *)&PortName, 0);
    SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)PortName;
    if ( v11 < 0 )
      goto LABEL_7;
    v14 = ClientView;
    SectionOffset = ClientView->SectionOffset;
    p_ViewSize = &ClientView->ViewSize;
    ClientView = 0;
    p_ViewBase = &v14->ViewBase;
    CurrentProcess = PsGetCurrentProcess();
    v11 = MmMapViewOfSection(SecurityQos, CurrentProcess, p_ViewBase, 0, 0, &SectionOffset, p_ViewSize, 2, 0, 4);
    ObfDereferenceObject(SecurityQos);
    if ( v11 < 0 )
LABEL_7:
      ObfDereferenceObject(v10);
    else
      *a2 = v10;
  }
  return v11;
}
