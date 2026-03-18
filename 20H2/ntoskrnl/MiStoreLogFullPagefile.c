/*
 * XREFs of MiStoreLogFullPagefile @ 0x140552B48
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140330EEC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // [rsp+20h] [rbp-58h]
  int v4; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_QWORD *)&qword_140C4ED60 && **(_DWORD **)&qword_140C4ED60 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4ED60, 2LL) )
      tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&qword_140025D38, v1, v0 - 1, v3, v4, v0, &v5);
  }
}
