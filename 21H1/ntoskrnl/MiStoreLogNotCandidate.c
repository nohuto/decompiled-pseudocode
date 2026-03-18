/*
 * XREFs of MiStoreLogNotCandidate @ 0x140389B18
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032274C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogNotCandidate(int a1)
{
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // r10
  int v4; // r11d
  int v5; // [rsp+20h] [rbp-88h]
  int v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+40h] [rbp-68h] BYREF
  int v8; // [rsp+44h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-58h] BYREF
  int *v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]
  int *v13; // [rsp+80h] [rbp-28h]
  int v14; // [rsp+88h] [rbp-20h]
  int v15; // [rsp+8Ch] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4EE20 && a1 != -1073741401 && **(_DWORD **)&qword_140C4EE20 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4EE20, 0x400000000002LL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v7 = v2;
      v13 = &v8;
      v11 = 4;
      v14 = 4;
      v8 = v4;
      tlgWriteEx_EtwWriteEx(v3, (unsigned __int8 *)&byte_140025AF5, v1, 1u, v5, v6, 4u, &v9);
    }
  }
}
