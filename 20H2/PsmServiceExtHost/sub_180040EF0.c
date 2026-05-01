/*
 * XREFs of sub_180040EF0 @ 0x180040EF0
 * Callers:
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180040FD8 @ 0x180040FD8 (sub_180040FD8.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_18006B98C @ 0x18006B98C (sub_18006B98C.c)
 */

char __fastcall sub_180040EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // r12d
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // esi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // r11
  _QWORD *v17; // r9
  __int16 v18; // dx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  __int16 v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+A8h] [rbp+48h] BYREF
  int v29; // [rsp+B0h] [rbp+50h] BYREF

  LOBYTE(v5) = sub_180045CFC(a1, a2, a3, a4);
  if ( !(_BYTE)v5 )
  {
    memset((void *)(a1 + 568), 0, 0x140uLL);
    v6 = 0;
    sub_1800410C4(a1 + 24, &v26);
    while ( 1 )
    {
      v7 = sub_180041058(&v26);
      if ( !v7 )
        break;
      v14 = *(_DWORD *)(v7 + 268);
      if ( v14 )
      {
        v28 = v14 | v6;
        do
        {
          _BitScanForward((unsigned int *)&v15, v14);
          v16 = 20LL;
          v17 = (_QWORD *)(160 * v15 + a1 + 568);
          do
          {
            *v17 |= *(_QWORD *)((char *)v17 + v7 - 160 * v15 - a1 - 464);
            ++v17;
            --v16;
          }
          while ( v16 );
          v14 &= ~(1 << v15);
        }
        while ( v14 );
        v6 = v28;
      }
      sub_1800265B0((char *)v7);
    }
    LOBYTE(v5) = RtlReleaseSRWLockShared(v26 + 16);
    v8 = 0;
    v9 = 0;
    do
    {
      if ( v9 )
      {
        if ( _bittest(&v6, v9) )
        {
          v5 = sub_180040FD8((void *)(160LL * v9 + a1 + 568));
          v10 = v5;
          if ( (unsigned int)dword_1800B31E0 > 4 )
          {
            LOBYTE(v5) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
            if ( (_BYTE)v5 )
            {
              v26 = 160LL * v9 + a1 + 568;
              v27 = v18 + 19;
              v28 = v8;
              v29 = v10;
              LOBYTE(v5) = sub_18006B98C(
                             v19,
                             (unsigned int)&unk_18009C599,
                             v20,
                             v21,
                             (__int64)&v29,
                             (__int64)&v28,
                             (__int64)&v26);
            }
          }
        }
        else
        {
          v5 = sub_180040FD8(0LL);
          v10 = v5;
          if ( (unsigned int)dword_1800B31E0 > 4 )
          {
            LOBYTE(v5) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
            if ( (_BYTE)v5 )
            {
              v28 = v8;
              v29 = v10;
              LOBYTE(v5) = sub_1800624C0(v11, (unsigned int)&unk_18009C5E4, v12, v13, (__int64)&v29, (__int64)&v28);
            }
          }
        }
        if ( v10 < 0 && (unsigned int)dword_1800B31E0 > 4 )
        {
          LOBYTE(v5) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
          if ( (_BYTE)v5 )
          {
            v28 = v8;
            v29 = v10;
            LOBYTE(v5) = sub_1800624C0(v22, (unsigned int)&unk_18009C62B, v23, v24, (__int64)&v29, (__int64)&v28);
          }
        }
      }
      v8 = v9 + 1;
      v9 = v8;
    }
    while ( v8 < 2 );
  }
  return v5;
}
