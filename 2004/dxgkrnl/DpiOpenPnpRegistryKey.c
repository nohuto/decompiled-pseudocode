/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C017B090
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C0178D14 (DpiGetAdapterInfo.c)
 *     DpiReadPnpRegistryValue @ 0x1C017AF44 (DpiReadPnpRegistryValue.c)
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C018E780 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     DpiGetPnpRegistryKeyName @ 0x1C0171580 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, unsigned int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  v5 = (int)a2;
  if ( (int)DpiGetPnpRegistryKeyName(a1, a2, (__int64 *)&v17) < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v14 + 24) = v5;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  else
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v17;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v9 = ZwOpenKey(a4, a3, &ObjectAttributes);
    v12 = v9;
    if ( v9 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v15 + 24) = v5;
      *(_QWORD *)(v15 + 32) = v12;
      WdLogEvent5_WdError(v15);
    }
    return (unsigned int)v12;
  }
}
