/*
 * XREFs of sub_180082DB4 @ 0x180082DB4
 * Callers:
 *     sub_180083178 @ 0x180083178 (sub_180083178.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180082F84 @ 0x180082F84 (sub_180082F84.c)
 *     sub_1800830E8 @ 0x1800830E8 (sub_1800830E8.c)
 */

__int64 __fastcall sub_180082DB4(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  _BYTE v12[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF

  v13 = 0LL;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a1 + 32);
  v12[0] = v4;
  if ( (_BYTE)v6 != 5 )
  {
    v7 = *(_QWORD *)(a1 + 8 * v6 + 64);
    v14 = v7;
    if ( (_BYTE)v6 )
      SleepstudyHelperBlockerActiveDereference(v7);
  }
  if ( !(_BYTE)v4 )
    goto LABEL_13;
  v8 = *(_QWORD *)(a1 + 8 * v4 + 64);
  v14 = v8;
  if ( v8 )
  {
LABEL_12:
    SleepstudyHelperBlockerActiveReference(v8);
LABEL_13:
    v9 = 0;
    *(_BYTE *)(a1 + 32) = v4;
    goto LABEL_14;
  }
  sub_1800830E8(*(_QWORD *)(a1 + 24) + 24LL, v12, SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( (unsigned int)sub_180082F84(&v16) )
  {
    v9 = -1073741823;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(a3 + 8);
  v17 = v16;
  v9 = SleepstudyHelperCreateBlockerFromGuid(v10, a1 + 40, &v17, &DestinationString, 3, &v13);
  if ( v9 >= 0 )
  {
    v9 = SleepstudyHelperSetBlockerParentHandle(v13, *(_QWORD *)(a1 + 56));
    if ( v9 >= 0 )
    {
      v9 = SleepstudyHelperBuildBlocker(v13, &v14);
      if ( v9 >= 0 )
      {
        v13 = 0LL;
        *(_QWORD *)(a1 + 8 * v4 + 64) = v14;
        v8 = v14;
        goto LABEL_12;
      }
    }
  }
LABEL_14:
  if ( v13 )
    SleepstudyHelperDestroyBlockerBuilder();
  return (unsigned int)v9;
}
