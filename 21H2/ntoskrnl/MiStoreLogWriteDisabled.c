/*
 * XREFs of MiStoreLogWriteDisabled @ 0x140554724
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402D2F3C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void MiStoreLogWriteDisabled()
{
  int v0; // edx
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

  if ( *(_QWORD *)&qword_140C4EEE0 && **(_DWORD **)&qword_140C4EEE0 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 2LL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v13 = &v8;
      v8 = v2;
      v11 = v0 + 2;
      v14 = v0 + 2;
      v7 = v4;
      tlgWriteEx_EtwWriteEx(v3, (unsigned __int8 *)&word_140026B46, v1, v0 - 1, v5, v6, v0 + 2, &v9);
    }
  }
}
