/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x14066DAC0
 * Callers:
 *     _SysCtxRegOpenKey @ 0x14066DA70 (_SysCtxRegOpenKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140763384 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763768 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxOpenMachine @ 0x14079A3D4 (_SysCtxOpenMachine.c)
 *     _SysCtxOpenControlSet @ 0x14079A604 (_SysCtxOpenControlSet.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407C97D4 (_RegRtlOpenPredefinedKey.c)
 *     _RegRtlCopyTreeInternal @ 0x14097ED40 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14097F27C (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x1403FA590 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407C97D4 (_RegRtlOpenPredefinedKey.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x14097F4CC (NtOpenKeyTransactedEx_Stub.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        __int64 a6)
{
  void *v6; // rbx
  void *v10; // rsi
  NTSTATUS inited; // edi
  __int64 v12; // rbx
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *v17; // [rsp+A0h] [rbp+30h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v10 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v17);
    if ( inited < 0 )
      goto LABEL_7;
    v6 = v17;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_8;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v6 )
    v10 = v6;
  v12 = a6;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.Attributes = (a3 & 8) != 0 ? 832 : 576;
  ObjectAttributes.ObjectName = &DestinationString;
  if ( a6 )
  {
    inited = NtOpenKeyTransactedEx_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, a3, a6);
    if ( inited == -1073741702 )
    {
      if ( byte_140CFA010 )
      {
        v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_140CFA018;
      }
      else
      {
        v14 = ZwOpenKeyTransacted;
        byte_140CFA010 = 1;
        qword_140CFA018 = (__int64)ZwOpenKeyTransacted;
      }
      if ( !v14
        || (inited = ((__int64 (__fastcall *)(PHANDLE, _QWORD, OBJECT_ATTRIBUTES *, __int64))v14)(
                       KeyHandle,
                       a4,
                       &ObjectAttributes,
                       v12),
            inited == -1073741702) )
      {
        inited = -1072103420;
      }
    }
  }
  else
  {
    inited = ZwOpenKeyEx(KeyHandle, a4, &ObjectAttributes, a3);
  }
LABEL_7:
  v6 = v17;
LABEL_8:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)inited;
}
