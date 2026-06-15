/*
 * XREFs of sub_1800FF010 @ 0x1800FF010
 * Callers:
 *     sub_1800FC4C4 @ 0x1800FC4C4 (sub_1800FC4C4.c)
 *     sub_1800FD528 @ 0x1800FD528 (sub_1800FD528.c)
 *     sub_1800FF620 @ 0x1800FF620 (sub_1800FF620.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 *     sub_1800FFEA8 @ 0x1800FFEA8 (sub_1800FFEA8.c)
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FF010(__int64 a1)
{
  int v2; // edi
  _QWORD *v3; // rax
  const wchar_t *v4; // r9
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  void (*v7)(void); // rax
  __int64 v8; // rcx
  _QWORD *v9; // r14
  _QWORD *v10; // rdx
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // r8d
  __int64 v15; // [rsp+20h] [rbp-10h]
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 200) + 56LL) == 3 || *(_BYTE *)(a1 + 12) )
    return (unsigned int)v2;
  v18 = 0LL;
  v17 = 0LL;
  SetThreadpoolWait(*(PTP_WAIT *)(a1 + 16), *(HANDLE *)(a1 + 32), 0LL);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v3 = (_QWORD *)(a1 + 160);
    if ( *(_QWORD *)(a1 + 184) >= 8uLL )
      v3 = (_QWORD *)*v3;
    v4 = (const wchar_t *)(a1 + 128);
    if ( *(_QWORD *)(a1 + 152) >= 8uLL )
      v4 = *(const wchar_t **)v4;
    sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 0x3Bu, (__int64)&unk_180172650, v4, (__int64)v3);
  }
  v5 = (_QWORD *)(a1 + 128);
  v6 = (_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 152) >= 8uLL )
    v6 = (_QWORD *)*v5;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 192) + 64LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 192) + 64LL),
         v6,
         &v18);
  if ( v2 < 0 )
  {
    if ( !v17 )
      goto LABEL_17;
    v7 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
    goto LABEL_16;
  }
  v9 = (_QWORD *)(a1 + 160);
  v10 = (_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 184) >= 8uLL )
    v10 = (_QWORD *)*v9;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 192) + 64LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 192) + 64LL),
         v10,
         &v17);
  if ( v2 < 0 )
  {
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v8 = v18;
    if ( !v18 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Cu, (__int64)&unk_180172650, a1);
  }
  v2 = sub_180100ADC(*(LPVOID *)(a1 + 200), (__int64)&v16);
  if ( v2 < 0 )
  {
    v13 = (int)off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      LODWORD(v15) = v2;
      sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x3Eu, (__int64)&unk_180172650, a1, v15);
    }
    v14 = ++*(_DWORD *)(a1 + 24);
    if ( v14 > *(_DWORD *)(*(_QWORD *)(a1 + 192) + 328LL) )
    {
      *(_BYTE *)(a1 + 12) = 1;
      if ( (byte_18019F980 & 8) != 0 )
      {
        if ( *(_QWORD *)(a1 + 184) >= 8uLL )
          v9 = (_QWORD *)*v9;
        if ( *(_QWORD *)(a1 + 152) >= 8uLL )
          v5 = (_QWORD *)*v5;
        sub_1800FFEA8(v13, v12, v14, (_DWORD)v5, (__int64)v9);
      }
    }
    LOBYTE(v12) = 1;
    sub_180104404(*(_QWORD *)(a1 + 200), v12, 0LL);
    v2 = 0;
  }
  else
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Du, (__int64)&unk_180172650, a1);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 192) + 304LL) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    sub_18010393C(*(_QWORD *)(a1 + 200));
  }
  if ( v17 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
LABEL_16:
    v7();
  }
LABEL_17:
  v8 = v18;
  if ( v18 )
LABEL_25:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v8);
LABEL_26:
  if ( v2 < 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x3Fu, (__int64)&unk_180172650, v2);
  }
  return (unsigned int)v2;
}
