/*
 * XREFs of MiStoreLogFullPagefile @ 0x14054EB28
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032274C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // [rsp+20h] [rbp-58h]
  int v4; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_QWORD *)&qword_140C4EE20 && **(_DWORD **)&qword_140C4EE20 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4EE20, 2LL) )
      tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&dword_140025A94, v1, v0 - 1, v3, v4, v0, &v5);
  }
}
