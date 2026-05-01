/*
 * XREFs of sub_180041808 @ 0x180041808
 * Callers:
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 * Callees:
 *     sub_180040A78 @ 0x180040A78 (sub_180040A78.c)
 *     sub_180040B34 @ 0x180040B34 (sub_180040B34.c)
 *     sub_1800414C8 @ 0x1800414C8 (sub_1800414C8.c)
 *     sub_1800415E0 @ 0x1800415E0 (sub_1800415E0.c)
 *     sub_18004170C @ 0x18004170C (sub_18004170C.c)
 *     sub_180041A40 @ 0x180041A40 (sub_180041A40.c)
 */

__int64 __fastcall sub_180041808(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  __int128 v12; // [rsp+50h] [rbp-18h]
  DWORD cbSid; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v5 = sub_180040A78(a2);
  if ( v5 >= 0 )
  {
    v5 = sub_180040B34(a2);
    if ( v5 >= 0 )
    {
      v5 = sub_1800414C8(a1, a2);
      if ( v5 >= 0 )
      {
        v5 = sub_1800415E0((_QWORD *)(a2 + 1616));
        if ( v5 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartition0");
          v8 = 48;
          p_DestinationString = &DestinationString;
          v9 = 0LL;
          v11 = 64;
          v12 = 0LL;
          v5 = NtOpenPartition(a2 + 360, 1LL, &v8);
          if ( v5 >= 0 )
          {
            v5 = sub_18004170C(a2 + 1768);
            if ( v5 >= 0 )
            {
              v5 = TpAllocTimer(a2 + 560, sub_180038B20, a2, 0LL);
              if ( v5 >= 0 )
                v5 = 0;
              if ( v5 >= 0 )
              {
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (PSID)(a2 + 2644), &cbSid) )
                {
                  if ( (int)sub_180041A40(a2, a1, a2 + 2720) < 0 )
                    return (unsigned int)-1073741823;
                  return v4;
                }
                else
                {
                  return (unsigned int)-1073741823;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
