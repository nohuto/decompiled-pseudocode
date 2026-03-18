/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0104150
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1C0103FD0 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x1C01525FC (-vComputePageXform@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::iSetMapMode(DC *this, int a2)
{
  unsigned int v2; // r15d
  _DWORD *v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  int v12; // xmm3_4
  int v13; // xmm0_4
  __int64 v14; // rax
  int v15; // xmm1_4
  __int64 v16; // rcx
  __int128 v17; // xmm0
  unsigned int v18; // edx
  INT v19; // ebx
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  int v22; // [rsp+38h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+48h] [rbp-28h]
  int v25; // [rsp+4Ch] [rbp-24h]
  __int16 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]

  v2 = 0;
  if ( a2 != 8 )
  {
    v2 = *(_DWORD *)(*((_QWORD *)this + 122) + 108LL);
    if ( (v2 & 7) != 0 )
      DC::dwSetLayout(this, -1, 0);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 122);
  v6 = v5[26];
  if ( a2 == v6 && a2 != 7 )
    goto LABEL_9;
  if ( a2 == 1 )
  {
    v5[79] = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = ef16;
    *((_DWORD *)this + 107) = ef16;
    *(_DWORD *)(*((_QWORD *)this + 122) + 396LL) = ef16;
    v7 = *((_QWORD *)this + 122);
    *((_DWORD *)this + 108) = ef16;
    *((_DWORD *)this + 80) = ef16;
    *((_DWORD *)this + 83) = ef16;
    *((_DWORD *)this + 88) = 11;
    *(_OWORD *)(v7 + 32) = *((_OWORD *)this + 20);
    *(_OWORD *)(v7 + 48) = *((_OWORD *)this + 21);
    *(_DWORD *)(v7 + 64) = *((_DWORD *)this + 88);
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x3090u;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF8BF;
    goto LABEL_7;
  }
  if ( a2 == 8 )
  {
    v5[26] = 8;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
    goto LABEL_7;
  }
  if ( (unsigned int)(a2 - 1) > 7 )
    return 0LL;
  v9 = v5[102];
  if ( !v9 )
  {
    v24 = 0;
    v25 = 0;
    v28 = 0LL;
    v27 = 0LL;
    v23 = 0LL;
    v10 = *((_QWORD *)this + 6);
    v26 = 256;
    v20 = 0LL;
    v22 = 1;
    if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(v10 + 48);
      v21 = v10;
      GreAcquireSemaphore(v20);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
      v5 = (_DWORD *)*((_QWORD *)this + 122);
    }
    v5[83] = *(_DWORD *)(v10 + 2152);
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(v10 + 2156);
    switch ( a2 )
    {
      case 2:
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2144) + 50) / 0x64u;
        v18 = (*(_DWORD *)(v10 + 2148) + 50) / 0x64u;
        break;
      case 3:
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2144) + 5) / 0xAu;
        v18 = (*(_DWORD *)(v10 + 2148) + 5) / 0xAu;
        break;
      case 4:
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2144) + 127) / 0xFEu;
        v11 = (*(_DWORD *)(v10 + 2148) + 127) / 0xFEu;
LABEL_22:
        *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v11;
LABEL_23:
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
LABEL_24:
        *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_25:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
        if ( v23 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
        goto LABEL_7;
      case 5:
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v10 + 2144), 10, 254);
        v11 = EngMulDiv(*(_DWORD *)(v10 + 2148), 10, 254);
        goto LABEL_22;
      case 6:
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v10 + 2144), 144, 2540);
        *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(v10 + 2148), 144, 2540);
        if ( *((float *)this + 111) == 0.0 )
        {
          DC::vComputePageXform(this);
          v12 = *((_DWORD *)this + 108);
          *((_DWORD *)this + 111) = *((_DWORD *)this + 107);
          *((_DWORD *)this + 112) = v12;
        }
        *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 6;
        v13 = *((_DWORD *)this + 111);
        *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = v13;
        v14 = *((_QWORD *)this + 122);
        v15 = *((_DWORD *)this + 112);
        *((_DWORD *)this + 107) = v13;
        *(_DWORD *)(v14 + 396) = v15;
        v16 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 80) = *((_DWORD *)this + 111);
        *((_DWORD *)this + 83) = *((_DWORD *)this + 112);
        *((_DWORD *)this + 88) = 9;
        v17 = *((_OWORD *)this + 20);
        *((_DWORD *)this + 108) = v15;
        *(_OWORD *)(v16 + 32) = v17;
        *(_OWORD *)(v16 + 48) = *((_OWORD *)this + 21);
        *(_DWORD *)(v16 + 64) = *((_DWORD *)this + 88);
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x22D0u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE2FF;
        goto LABEL_25;
      case 7:
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2144) + 50) / 0x64u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = (*(_DWORD *)(v10 + 2148) + 50) / 0x64u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
        goto LABEL_24;
      default:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
        if ( v23 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
        return 0LL;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v18;
    goto LABEL_23;
  }
  v5[83] = v9;
  *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(*((_QWORD *)this + 122) + 412LL);
  switch ( a2 )
  {
    case 2:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_56;
    case 3:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_56;
    case 4:
      v19 = 1000;
      goto LABEL_52;
    case 5:
      v19 = 10000;
      goto LABEL_52;
    case 6:
      v19 = 14400;
LABEL_52:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 416LL), v19, 254);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 420LL), v19, 254);
LABEL_56:
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
      goto LABEL_57;
  }
  if ( a2 != 7 )
    return 0LL;
  *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_57:
  *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_7:
  if ( (v2 & 7) != 0 )
    DC::dwSetLayout(this, -1, v2);
LABEL_9:
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    DC::vMarkTransformDirty(this);
  return v6;
}
