/*
 * XREFs of CcPerfLogVolumeLogHandleInfo @ 0x1403C43C4
 * Callers:
 *     CcPerfLogLoggedStreamsStats @ 0x1403C42F8 (CcPerfLogLoggedStreamsStats.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogVolumeLogHandleInfo(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 *v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]

  v11 = a5;
  v12 = a6;
  v8 = a1;
  v10 = a3;
  v13 = a4;
  v6 = (a2 & 1) != 0;
  v9 = v6;
  if ( (a2 & 2) != 0 )
  {
    v6 |= 2u;
    v9 = v6;
  }
  if ( (a2 & 4) != 0 )
  {
    v6 |= 4u;
    v9 = v6;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v6 |= 0x10u;
    v9 = v6;
  }
  if ( (a2 & 8) != 0 )
    v9 = v6 | 8;
  v16 = 0;
  v14 = &v8;
  v15 = 40;
  return EtwTraceKernelEvent((int)&v14, 1, 0x80020000, 5645, 4200706);
}
