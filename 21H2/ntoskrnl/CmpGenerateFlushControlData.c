/*
 * XREFs of CmpGenerateFlushControlData @ 0x1406FC160
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x1402713C8 (PoIsInitializedStopWatch.c)
 *     HvIsCurrentLogSwappable @ 0x14061D984 (HvIsCurrentLogSwappable.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1406FC61C (HvGetEffectiveLogSizeCapForHive.c)
 *     HvGetHiveLogFileStatus @ 0x1406FC6A4 (HvGetHiveLogFileStatus.c)
 */

char __fastcall CmpGenerateFlushControlData(__int64 a1, __int64 a2, int *a3)
{
  int *v3; // rsi
  char v6; // bp
  char v7; // cl
  char v8; // r11
  int v9; // r10d
  int v10; // r10d
  int v11; // edx
  int v12; // eax
  int v13; // r9d
  int v14; // ecx
  int v15; // r9d
  int v16; // r9d
  char v17; // r10
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // r9d
  int v22; // r9d

  v3 = a3 + 2;
  *(_QWORD *)a3 = 0LL;
  a3[2] = 0;
  a3[5] = 0;
  v6 = a2;
  a3[3] = 0;
  v7 = *(_BYTE *)(a1 + 191);
  if ( !v7 && !*(_DWORD *)(a1 + 104) && !*(_DWORD *)(a1 + 128) )
  {
    v8 = 0;
LABEL_29:
    v10 = 0;
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_4;
  }
  v8 = 1;
  if ( !*(_DWORD *)(a1 + 104) )
    goto LABEL_29;
LABEL_4:
  v9 = 9;
  *a3 = 9;
  if ( *(_BYTE *)(a1 + 190) )
  {
    v9 = 27;
    *a3 = 27;
  }
  if ( *(_DWORD *)(a1 + 4268) )
    *a3 = v9 | 0x82;
  a3[6] = HvGetEffectiveLogSizeCapForHive(a1, a2, a3);
LABEL_9:
  v11 = v10;
  if ( v8 && (v6 & 4) != 0 )
  {
    v11 = v10 | 0x42;
    *a3 = v10 | 0x42;
  }
  v12 = *(_DWORD *)(a1 + 160);
  if ( (v12 & 2) == 0 )
  {
    LOBYTE(v12) = (CmpGlobalFlushControlFlags & 1) == 0;
    if ( (((*(_DWORD *)(a1 + 4152) & 0x800) == 0) & (unsigned __int8)v12) != 0 )
    {
      if ( (v6 & 8) != 0 && (!*(_BYTE *)(a1 + 190) || (v11 & 0x10) != 0) )
      {
        v18 = v11 | 0x107;
        *a3 = v18;
        if ( (v18 & 8) != 0 )
        {
          HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
          v12 = *v3;
          if ( (*v3 & 0xC) != 0 )
            *a3 |= 0x400u;
        }
        return v12;
      }
      if ( (v11 & 0x48) == 8 )
      {
        HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
        v12 = *v3;
        if ( (*v3 & 1) != 0 )
        {
          *a3 |= 2u;
          return v12;
        }
        if ( (v12 & 0xA) != 0 )
        {
          *a3 |= 0x42u;
        }
        else if ( (v12 & 4) != 0 )
        {
          *a3 |= 2u;
          if ( HvIsCurrentLogSwappable(a1) )
            v22 = v21 | 0x22;
          else
            v22 = v21 | 0x42;
          *a3 = v22;
        }
      }
      v13 = *a3;
      if ( (*a3 & 0x40) == 0 )
        goto LABEL_20;
      LOBYTE(v12) = PoIsInitializedStopWatch((_QWORD *)(a1 + 4248));
      if ( (_BYTE)v12 )
        return v12;
      if ( (*v3 & 8) != 0 )
      {
        v13 = v15 | 0x504;
      }
      else
      {
        *a3 = v15 | 1;
        if ( HvIsCurrentLogSwappable(a1) )
        {
          v13 = v16 | 0x21;
        }
        else
        {
          v13 = v16 | 5;
          *a3 = v13;
          if ( (v17 & 4) == 0 )
            goto LABEL_20;
          v13 |= 0x400u;
        }
      }
      *a3 = v13;
LABEL_20:
      if ( (v13 & 0x48) == 8 )
      {
        v14 = v13;
        if ( !*(_DWORD *)(a1 + 128) )
        {
          v14 = v13 | 0x800;
          *a3 = v13 | 0x800;
        }
        v13 = v14;
        if ( (*v3 & 0x14) != 0 )
        {
          v13 = v14 | 0x1000;
          *a3 = v14 | 0x1000;
        }
      }
      v12 = *(_DWORD *)(a1 + 4264);
      if ( (v12 & 1) == 0 )
      {
        if ( *(_QWORD *)(a1 + 1536) )
        {
          LOBYTE(v12) = (v6 & 0x20) == 0;
          if ( (((v13 & 8) == 0) & (unsigned __int8)v12) == 0 )
            *a3 = v13 | 0x202;
        }
      }
      return v12;
    }
  }
  if ( *(_DWORD *)(a1 + 104) || *(_BYTE *)(a1 + 191) )
  {
    v19 = v11 | 0x46;
    *a3 = v19;
    if ( *(_BYTE *)(a1 + 190) )
      v19 |= 0x10u;
    v20 = v19 | 0x500;
  }
  else
  {
    LOBYTE(v12) = (v6 & 0x20) != 0;
    if ( (((*(_BYTE *)(a1 + 4264) & 1) == 0) & (unsigned __int8)v12) == 0 )
      return v12;
    v20 = v11 | 0x202;
  }
  *a3 = v20;
  return v12;
}
