/*
 * XREFs of MiStoreLogFullPagefile @ 0x1405B650C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14024A9B0 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // [rsp+20h] [rbp-58h]
  int v4; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_QWORD *)&qword_140C53448 && **(_DWORD **)&qword_140C53448 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C53448, 2LL) )
      tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&dword_14002DFA4, v1, v0 - 1, v3, v4, v0, &v5);
  }
}
