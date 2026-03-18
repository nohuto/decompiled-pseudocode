/*
 * XREFs of DbgLoadImageSymbols @ 0x14036ED90
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14036ED34 (DbgLoadImageSymbolsUnicode.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     DebugService2 @ 0x1403FDD30 (DebugService2.c)
 */

__int64 __fastcall DbgLoadImageSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v6[0] = a2;
  v6[1] = a3;
  v4 = RtlImageNtHeader(a2);
  if ( v4 )
  {
    v7 = *(_DWORD *)(v4 + 88);
    v8 = *(_DWORD *)(v4 + 80);
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  return DebugService2(a1, v6, 3LL);
}
