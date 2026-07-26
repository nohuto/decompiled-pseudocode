/*
 * XREFs of PktMonClientNblDrop @ 0x1C00C6B3C
 * Callers:
 *     PktMonClientNblDropNdis @ 0x1C00C6C44 (PktMonClientNblDropNdis.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientNblDrop(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  __int64 v11; // rdx
  __int16 v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+32h] [rbp-3Eh]
  __int16 v14; // [rsp+36h] [rbp-3Ah]
  __int64 v15; // [rsp+38h] [rbp-38h]
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  int v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+4Ch] [rbp-24h]
  __int64 v20; // [rsp+50h] [rbp-20h]
  _WORD v21[2]; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+5Ch] [rbp-14h]
  int v23; // [rsp+60h] [rbp-10h]

  v13 = 0;
  v14 = 0;
  v19 = 0;
  v21[1] = 0;
  if ( byte_1C00E3FD0 && (*(_DWORD *)(a1 + 52) & 2) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
  {
    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    {
      v11 = *(_QWORD *)(a1 + 40);
      v12 = 40;
      v18 = a6;
      v21[0] = 12;
      v22 = a7;
      v23 = a8;
      v15 = a2;
      v16 = 1;
      v17 = a3;
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _WORD *, _QWORD))(*((_QWORD *)&xmmword_1C00E3FE8 + 1) + 48LL))(
        xmmword_1C00E3FE8,
        v11,
        &v12,
        v21,
        0LL);
      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
    }
  }
}
