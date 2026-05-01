/*
 * XREFs of sub_1800093A0 @ 0x1800093A0
 * Callers:
 *     sub_18000138C @ 0x18000138C (sub_18000138C.c)
 *     sub_1800035F4 @ 0x1800035F4 (sub_1800035F4.c)
 *     sub_180004214 @ 0x180004214 (sub_180004214.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800054FC @ 0x1800054FC (sub_1800054FC.c)
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 *     sub_180006018 @ 0x180006018 (sub_180006018.c)
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_180006E40 @ 0x180006E40 (sub_180006E40.c)
 *     sub_1800085FC @ 0x1800085FC (sub_1800085FC.c)
 *     sub_18000AE74 @ 0x18000AE74 (sub_18000AE74.c)
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
 *     sub_180025F88 @ 0x180025F88 (sub_180025F88.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_18002831C @ 0x18002831C (sub_18002831C.c)
 *     sub_180028ECC @ 0x180028ECC (sub_180028ECC.c)
 *     sub_1800298A0 @ 0x1800298A0 (sub_1800298A0.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_18002A0DC @ 0x18002A0DC (sub_18002A0DC.c)
 *     sub_18002AAB0 @ 0x18002AAB0 (sub_18002AAB0.c)
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     sub_1800356D8 @ 0x1800356D8 (sub_1800356D8.c)
 *     sub_180036DD0 @ 0x180036DD0 (sub_180036DD0.c)
 *     sub_180036F1C @ 0x180036F1C (sub_180036F1C.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 *     sub_180070CC0 @ 0x180070CC0 (sub_180070CC0.c)
 *     sub_1800765F8 @ 0x1800765F8 (sub_1800765F8.c)
 *     sub_18007CF6C @ 0x18007CF6C (sub_18007CF6C.c)
 *     sub_18007D214 @ 0x18007D214 (sub_18007D214.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 *     sub_18007D890 @ 0x18007D890 (sub_18007D890.c)
 *     sub_18007D960 @ 0x18007D960 (sub_18007D960.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 *     sub_18007DAF4 @ 0x18007DAF4 (sub_18007DAF4.c)
 *     sub_18007DB80 @ 0x18007DB80 (sub_18007DB80.c)
 *     sub_18007DE7C @ 0x18007DE7C (sub_18007DE7C.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_18007E434 @ 0x18007E434 (sub_18007E434.c)
 *     sub_18007F6D0 @ 0x18007F6D0 (sub_18007F6D0.c)
 *     sub_18007FB44 @ 0x18007FB44 (sub_18007FB44.c)
 *     sub_18007FF10 @ 0x18007FF10 (sub_18007FF10.c)
 *     sub_180080E10 @ 0x180080E10 (sub_180080E10.c)
 *     sub_1800811D8 @ 0x1800811D8 (sub_1800811D8.c)
 *     sub_180081288 @ 0x180081288 (sub_180081288.c)
 *     sub_180082424 @ 0x180082424 (sub_180082424.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_1800093A0(__int64 a1, int a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  DWORD result; // eax

  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    v6 = TlsGetValue(v2);
    v7 = -4LL;
    if ( !a2 )
      v7 = -2LL;
    if ( (v7 & *v6) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
