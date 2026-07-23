/*
 * XREFs of CmpRecoverEnlistment @ 0x1408775A4
 * Callers:
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x1403FA510 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x1403FAEB0 (ZwRecoverEnlistment.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 *     CmpTransSearchAddTransFromRm @ 0x1407637C4 (CmpTransSearchAddTransFromRm.c)
 */

NTSTATUS __fastcall CmpRecoverEnlistment(_QWORD *a1, __int64 a2, GUID *a3)
{
  NTSTATUS result; // eax
  int v6; // edi
  void *v7; // r8
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE EnlistmentHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID EnlistmentKey; // [rsp+B8h] [rbp+38h] BYREF

  EnlistmentKey = 0LL;
  EnlistmentHandle = 0LL;
  GuidString = 0LL;
  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  result = RtlStringFromGUIDEx(a3, &GuidString, 1u);
  if ( result >= 0 )
  {
    v6 = CmpTransSearchAddTransFromRm(a1, 0LL, (__int64)&a3[1], 1, (__int64)&EnlistmentKey);
    if ( v6 >= 0 )
    {
      v7 = (void *)a1[6];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      v6 = ZwOpenEnlistment(&EnlistmentHandle, 0xF001Fu, v7, a3, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        v6 = ZwRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
        ZwClose(EnlistmentHandle);
      }
    }
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&GuidString);
    return v6;
  }
  return result;
}
