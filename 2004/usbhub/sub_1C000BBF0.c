/*
 * XREFs of sub_1C000BBF0 @ 0x1C000BBF0
 * Callers:
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0018570 @ 0x1C0018570 (sub_1C0018570.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C000BBF0(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int16 i; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r10d
  int v13; // edx
  int v14; // [rsp+20h] [rbp-88h]
  int v15; // [rsp+5Ch] [rbp-4Ch] BYREF
  __int64 v16; // [rsp+60h] [rbp-48h] BYREF
  int v17; // [rsp+68h] [rbp-40h] BYREF
  _WORD v18[2]; // [rsp+6Ch] [rbp-3Ch] BYREF
  __int16 v19; // [rsp+70h] [rbp-38h]

  LODWORD(v2) = 0;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 21, (__int64)&unk_1C0062088);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      sub_1C002DC78(0LL, 0LL);
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      sub_1C002DC78(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      sub_1C002DC78(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v16 = 0LL;
    v18[0] = 0;
    v19 = 0;
    v15 = 0;
    v18[1] = i;
    v17 = 0;
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v5 = 812675184;
      *(_QWORD *)(v5 + 16) = i;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    HIWORD(v16) = v18[0];
    LODWORD(v16) = 525091;
    LOBYTE(v19) = 3;
    WORD2(v16) = i;
    v2 = (int)sub_1C000A740(a1, (__int64)&v16, 0LL, v18, v14, &v15);
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        v8 = v15;
        *(_DWORD *)v7 = 829452400;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = v2;
        *(_QWORD *)(v7 + 24) = v8;
      }
    }
    if ( (unsigned int)v2 >> 30 == 3 && !(unsigned __int8)sub_1C001CEB4((unsigned int)v2) )
      sub_1C004A608(a1, i, 12, (unsigned int)&v17, 10, v2, v13, (__int64)aHubC, 3524, 0);
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1349808752;
        *(_QWORD *)(v10 + 24) = i;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v2;
      }
    }
    if ( (unsigned int)v2 >> 30 == 3 )
      break;
  }
  if ( (int)v2 >= 0 )
  {
    sub_1C000FD80(a1, 8, 2002872692, HIDWORD(stru_1C006B480.Dpc.DpcListEntry.Next), 0LL);
    sub_1C0018570(v11);
  }
  sub_1C000FD80(a1, 8, 1934643031, v2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 22, (__int64)&unk_1C0062088, v2);
  return (unsigned int)v2;
}
