/*
 * XREFs of AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA69C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA7A4 (AVrfpAppendCurrentUserSid.c)
 */

__int64 __fastcall AVrfOpenCurrentUserImageFileOptionsKey(unsigned __int16 *a1)
{
  __int64 result; // rax
  int v3; // ecx
  char *v4; // rax
  int v5; // edx
  _QWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  const void *v7[2]; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  _QWORD *v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  __int128 v12; // [rsp+60h] [rbp-10h]

  v6[0] = 82051072LL;
  v6[1] = &AVrfpCurrentUserKeyPath;
  result = RtlAppendUnicodeToString((unsigned __int16 *)v6, L"\\REGISTRY\\USER\\");
  if ( (int)result >= 0 )
  {
    result = AVrfpAppendCurrentUserSid(v6);
    if ( (int)result >= 0 )
    {
      result = RtlAppendUnicodeStringToString((unsigned __int16 *)v6, &qword_18011E4D8);
      if ( (int)result >= 0 )
      {
        v3 = *a1;
        v4 = (char *)(*((_QWORD *)a1 + 1) + *a1);
        if ( *a1 )
        {
          do
          {
            if ( *((_WORD *)v4 - 1) == 92 )
              break;
            v4 -= 2;
            v3 -= 2;
          }
          while ( v3 );
        }
        v5 = *a1 - v3;
        v7[1] = v4;
        LOWORD(v7[0]) = v5;
        if ( (unsigned __int16)v5 == v5 )
        {
          result = RtlAppendUnicodeStringToString((unsigned __int16 *)v6, v7);
          if ( (int)result >= 0 )
          {
            v9 = 0LL;
            v10 = v6;
            v8 = 48;
            v11 = 64;
            v12 = 0LL;
            return NtOpenKey();
          }
        }
        else
        {
          return 3221225507LL;
        }
      }
    }
  }
  return result;
}
