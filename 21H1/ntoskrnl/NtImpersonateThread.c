/*
 * XREFs of NtImpersonateThread @ 0x14067D070
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     SeImpersonateClientEx @ 0x14067D1E0 (SeImpersonateClientEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtImpersonateThread(
        HANDLE ServerThreadHandle,
        HANDLE ClientThreadHandle,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  int v8; // edi
  struct _DMA_ADAPTER *v9; // rbx
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+40h] [rbp-78h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+60h] [rbp-58h] BYREF
  PVOID v13; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  memset(&ClientContext, 0, sizeof(ClientContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)SecurityQos & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ClientSecurityQos = *SecurityQos;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ClientThreadHandle, 0x200u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = 0LL;
    v8 = ObReferenceObjectByHandle(ServerThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v13, 0LL);
    v9 = (struct _DMA_ADAPTER *)Object;
    if ( v8 >= 0 )
    {
      v8 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v8 >= 0 )
      {
        v8 = SeImpersonateClientEx(&ClientContext, (PETHREAD)v13);
        HalPutDmaAdapter((PADAPTER_OBJECT)ClientContext.ClientToken);
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    }
    HalPutDmaAdapter(v9);
    return v8;
  }
  return result;
}
