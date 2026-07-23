/*
 * XREFs of MmGetSectionInformation @ 0x14068ABA0
 * Callers:
 *     NtQuerySection @ 0x140607190 (NtQuerySection.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     AlpcpMapLegacyPortView @ 0x1406A9428 (AlpcpMapLegacyPortView.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspLocateSystemDll @ 0x140798D78 (PspLocateSystemDll.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x1402A4208 (MiGetControlAreaLoadConfig.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x140320D98 (MiAweControlArea.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  __int16 v16; // cx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int128 *v20; // r8
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  _DWORD *ControlAreaLoadConfig; // rax
  __int64 v26; // r8
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  _OWORD v30[5]; // [rsp+30h] [rbp-58h] BYREF

  memset(v30, 0, 0x48uLL);
  v6 = MiSectionControlArea(a1);
  if ( MiAweControlArea(v6) )
    return 3221225485LL;
  if ( !a2 )
  {
    v12 = ((v10 & 0x1000) << 14) | 0x8000000;
    if ( (v10 & 0x2000) == 0 )
      v12 = (v10 & 0x1000) << 14;
    if ( (v10 & 0x20) != 0 )
      v12 = 0x1000000;
    v13 = v12 | 0x200000;
    if ( (v10 & 0x40) == 0 )
      v13 = v12;
    v14 = v13 | 0x800000;
    if ( (v10 & 0x80u) == 0 )
      v14 = v13;
    v15 = v14 | 0x80000;
    if ( v10 >= 0 )
      v15 = v14;
    v16 = *(_WORD *)(*(_QWORD *)v9 + 12LL);
    v17 = v15 | 0x10000000;
    if ( v16 >= 0 )
      v17 = v15;
    v7 = v17 | 0x40000000;
    if ( (v16 & 0x4000) == 0 )
      v7 = v17;
    if ( (*(_DWORD *)(v9 + 56) & 0x20020) == 0x20020 )
      v7 |= 0x20000000u;
  }
  if ( a2 )
  {
    if ( a2 == 1 || a2 == 4 )
    {
      if ( (v10 & 0x20) != 0 )
      {
        v20 = *(__int128 **)(*(_QWORD *)v9 + 56LL);
        v21 = *v20;
        v30[0] = *v20;
        v22 = v20[1];
        v23 = v20[2];
        v24 = v20[3];
        if ( (*(_DWORD *)(v9 + 56) & 0x10000000) != 0 )
        {
          *(_QWORD *)&v30[0] = qword_140C4DE50 | LOWORD(v30[0]);
          v21 = v30[0];
        }
        if ( a2 == 4 )
        {
          ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(v9);
          v27 = v8;
          LODWORD(v30[4]) = v8;
          v28 = v8;
          if ( ControlAreaLoadConfig && (*ControlAreaLoadConfig & 0x10) != 0 )
          {
            v27 = 1;
            LODWORD(v30[4]) = 1;
            v28 = 1;
          }
          v29 = *(_DWORD *)(v26 + 76);
          if ( (v29 & 1) != 0 )
          {
            v27 = v28 | 2;
            LODWORD(v30[4]) = v28 | 2;
            v28 |= 2u;
          }
          if ( (v29 & 2) != 0 )
          {
            v27 = v28 | 8;
            LODWORD(v30[4]) = v28 | 8;
            v28 |= 8u;
          }
          if ( (v29 & 4) != 0 )
          {
            v27 = v28 | 0x10;
            LODWORD(v30[4]) = v28 | 0x10;
          }
          if ( (v29 & 8) != 0 )
          {
            v27 |= 0x20u;
            LODWORD(v30[4]) = v27;
          }
          if ( (v29 & 0x10) != 0 )
          {
            v27 |= 0x40u;
            LODWORD(v30[4]) = v27;
          }
          if ( (v29 & 0x20) != 0 )
            LODWORD(v30[4]) = v27 | 0x80;
          *(_OWORD *)a3 = v21;
          *(_OWORD *)(a3 + 16) = v22;
          *(_OWORD *)(a3 + 32) = v23;
          *(_OWORD *)(a3 + 48) = v24;
          *(_QWORD *)(a3 + 64) = *(_QWORD *)&v30[4];
        }
        else
        {
          *(_OWORD *)a3 = v21;
          *(_OWORD *)(a3 + 16) = v22;
          *(_OWORD *)(a3 + 32) = v23;
          *(_OWORD *)(a3 + 48) = v24;
        }
        return (unsigned int)v8;
      }
    }
    else if ( (v10 & 0x20) != 0 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 32LL);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 40);
      else
        v19 = v8;
      if ( a2 == 2 )
      {
        if ( (*(_DWORD *)(v9 + 56) & 0x10000000) != 0 )
          v19 += qword_140C4DE50 - *(_QWORD *)(*(_QWORD *)v9 + 32LL);
        *(_QWORD *)a3 = v19;
      }
      else
      {
        *(_QWORD *)a3 = *(_QWORD *)(*(_QWORD *)v9 + 32LL) - v19;
      }
      return (unsigned int)v8;
    }
    LODWORD(v8) = -1073741751;
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 24) << 12;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a3 + 8) = v7;
  }
  return (unsigned int)v8;
}
