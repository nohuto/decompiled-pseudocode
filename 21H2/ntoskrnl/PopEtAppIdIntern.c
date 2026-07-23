/*
 * XREFs of PopEtAppIdIntern @ 0x1405F6E94
 * Callers:
 *     PopEtGetProcessAppId @ 0x1405F6D20 (PopEtGetProcessAppId.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlInternTableIntern @ 0x1405F6FB8 (RtlInternTableIntern.c)
 */

__int64 __fastcall PopEtAppIdIntern(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v10[4]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v11[20]; // [rsp+48h] [rbp-59h] BYREF

  v10[0] = 80LL;
  v4 = 0;
  v10[1] = v11;
  v10[3] = 0LL;
  memset(v11, 0, sizeof(v11));
  v11[0] = *(_QWORD *)(a1 + 32);
  v11[6] = *(unsigned __int16 *)(a1 + 78);
  v11[4] = *(_QWORD *)(a1 + 64);
  v5 = 2LL * *(unsigned __int16 *)(a1 + 72);
  v11[3] = 4LL;
  v11[10] = v5;
  v11[8] = *(_QWORD *)(a1 + 40);
  v6 = 2LL * *(unsigned __int16 *)(a1 + 74);
  v11[7] = 4LL;
  v11[14] = v6;
  v11[12] = *(_QWORD *)(a1 + 48);
  v7 = 2LL * *(unsigned __int16 *)(a1 + 76);
  v11[11] = 2LL;
  v11[15] = 2LL;
  v11[19] = 2LL;
  v11[18] = v7;
  v11[16] = *(_QWORD *)(a1 + 56);
  v11[2] = 8LL;
  v10[2] = 5LL;
  v8 = RtlInternTableIntern(PopEtGlobals + 56, v10);
  if ( v8 )
    *a2 = v8;
  else
    return (unsigned int)-1073741670;
  return v4;
}
