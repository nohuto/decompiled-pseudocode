/*
 * XREFs of MiEliminateZeroPages @ 0x14062A9D0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140629C60 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14062A440 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiGetPdeAddress @ 0x140236A3C (MiGetPdeAddress.c)
 *     MiInitializeTbFlushList @ 0x140236A5C (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     MiConvertAndFlushWsleVas @ 0x1402D3A8C (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  __int64 PteAddress; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  __int64 PdeAddress; // rbx
  _DWORD v13[48]; // [rsp+60h] [rbp-F8h] BYREF

  memset(v13, 0, 0xB8uLL);
  v6 = MiTbFlushType(a1);
  MiInitializeTbFlushList((__int64)v13, v6, 20);
  LOBYTE(v13[1]) |= 4u;
  PteAddress = MiGetPteAddress(a2);
  v8 = a3 >> 12;
  v9 = 0LL;
  while ( v8 )
  {
    v10 = (_QWORD *)a2;
    v11 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v10 | *v11 )
        break;
      ++v10;
      --v11;
    }
    while ( v10 <= v11 );
    if ( v10 > v11 )
    {
      PdeAddress = MiGetPdeAddress(a2);
      if ( v9 != PdeAddress )
      {
        if ( v13[3] )
          MiConvertAndFlushWsleVas(a1, (__int64)v13);
        v9 = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)v13, a2, 1LL, 0);
      if ( v13[3] == v13[2] )
        MiConvertAndFlushWsleVas(a1, (__int64)v13);
    }
    PteAddress += 8LL;
    a2 += 4096LL;
    --v8;
  }
  if ( v13[3] )
    MiConvertAndFlushWsleVas(a1, (__int64)v13);
}
