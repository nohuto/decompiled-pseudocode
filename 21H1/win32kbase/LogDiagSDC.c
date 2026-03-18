/*
 * XREFs of LogDiagSDC @ 0x1C0053754
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C013DBA0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rsi
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax

  v8 = a1;
  v12 = 192 * a1 + 88;
  v13 = PALLOCMEM2(v12);
  v14 = v13;
  if ( v13 )
  {
    *(_DWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_DWORD *)v13 = 38;
    *(_DWORD *)(v13 + 4) = v12;
    *(_OWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_DWORD *)(v13 + 60) = a5;
    *(_DWORD *)(v13 + 64) = a6;
    *(_DWORD *)(v13 + 52) = v8;
    *(_DWORD *)(v13 + 68) = a4;
    *(_DWORD *)(v13 + 72) = a3;
    *(_DWORD *)(v13 + 48) = (a8 != 0 ? 8 : 0) | (a2 == 0) | 2;
    *(_QWORD *)(v13 + 80) = a7;
    *(_DWORD *)(v13 + 76) = 192;
    if ( a2 && (_DWORD)v8 )
    {
      v17 = v13 + 104;
      v18 = v8;
      v19 = (_QWORD *)(a2 + 16);
      do
      {
        *(_QWORD *)(v17 - 16) = *(v19 - 2);
        *(_QWORD *)(v17 - 8) = *(v19 - 1);
        v20 = *v19;
        v19 += 25;
        *(_QWORD *)v17 = v20;
        *(_DWORD *)(v17 + 8) = *((_DWORD *)v19 - 48);
        *(_DWORD *)(v17 + 12) = *((_DWORD *)v19 - 47);
        *(_OWORD *)(v17 + 16) = *(_OWORD *)(v19 - 23);
        *(_OWORD *)(v17 + 32) = *(_OWORD *)(v19 - 21);
        *(_OWORD *)(v17 + 48) = *(_OWORD *)(v19 - 19);
        *(_DWORD *)(v17 + 64) = *((_DWORD *)v19 - 34);
        *(_DWORD *)(v17 + 68) = *((_DWORD *)v19 - 33);
        *(_QWORD *)(v17 + 72) = *(v19 - 16);
        *(_DWORD *)(v17 + 80) = *((_DWORD *)v19 - 30);
        *(_BYTE *)(v17 + 84) = *((_BYTE *)v19 - 116);
        *(_BYTE *)(v17 + 85) = *((_BYTE *)v19 - 115);
        *(_DWORD *)(v17 + 88) = *((_DWORD *)v19 - 28);
        *(_DWORD *)(v17 + 92) = *((_DWORD *)v19 - 27);
        *(_DWORD *)(v17 + 96) = *((_DWORD *)v19 - 26);
        *(_QWORD *)(v17 + 100) = *(_QWORD *)((char *)v19 - 100);
        *(_QWORD *)(v17 + 108) = *(_QWORD *)((char *)v19 - 92);
        *(_QWORD *)(v17 + 116) = *(_QWORD *)((char *)v19 - 84);
        *(_OWORD *)(v17 + 124) = *(_OWORD *)((char *)v19 - 76);
        *(_DWORD *)(v17 + 140) = *((_DWORD *)v19 - 15);
        *(_DWORD *)(v17 + 144) = *((_DWORD *)v19 - 14);
        *(_DWORD *)(v17 + 148) = *((_DWORD *)v19 - 13);
        *(_QWORD *)(v17 + 152) = *(v19 - 6);
        *(_QWORD *)(v17 + 160) = *(v19 - 5);
        *(_DWORD *)(v17 + 168) = *((_DWORD *)v19 - 8);
        v17 += 192LL;
        --v18;
      }
      while ( v18 );
    }
    ((void (__fastcall *)(__int64))qword_1C0252970)(v14);
    return Win32FreePool(v14);
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v16 + 24) = v12;
    WdLogEvent5_WdLowResource(v16);
    return DrvDxgkLogCodePointPacket(3LL, a3, a4);
  }
}
