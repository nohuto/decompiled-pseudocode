/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C00780A0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C0074E6C (PhkFirstValid.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D7374 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D73A0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00E7C7C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01D8190 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  BOOL v9; // esi
  struct tagHOOK *Valid; // r15
  bool v12; // dl
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r13
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-58h]
  int v20; // [rsp+34h] [rbp-54h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]

  v19 = a3;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  if ( (unsigned __int8)IsInputThread() )
    v8 = gptiRit;
  else
    v8 = gptiCurrent;
  v9 = *(_DWORD *)(a2 + 12) & 1;
  Valid = (struct tagHOOK *)PhkFirstValid(v8, 14);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v21,
    "LowLevelMouseButtonHook",
    0LL);
  v20 = 0;
  v12 = 0;
  v13 = *(_QWORD *)(gptiCurrent + 1368LL);
  v14 = *(_QWORD *)(gptiCurrent + 1376LL);
  v15 = *(_QWORD *)(gptiCurrent + 1360LL);
  *(_QWORD *)(gptiCurrent + 1376LL) = a2;
  v22 = v13;
  if ( v7 )
  {
    v16 = *(_QWORD **)(*(_QWORD *)(v7 + 16) + 424LL);
    if ( *v16 == gpepCSRSS )
    {
      *(_DWORD *)(gptiCurrent + 1372LL) = 0;
      *(_DWORD *)(gptiCurrent + 1368LL) = 0x2000;
    }
    else
    {
      *(_QWORD *)(gptiCurrent + 1368LL) = v16[110];
    }
    v12 = 1;
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 1368LL) = -1;
    *(_DWORD *)(gptiCurrent + 1372LL) = -1;
  }
  if ( !v9 || *(_DWORD *)(a4 + 8) )
  {
    *(_DWORD *)(gptiCurrent + 1360LL) = -1;
    *(_DWORD *)(gptiCurrent + 1364LL) = -1;
  }
  else
  {
    *(_QWORD *)(gptiCurrent + 1360LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
  }
  v17 = xxxCallHook2(Valid, 0, v19, a2, &v20, v12);
  v18 = v22;
  *(_QWORD *)(gptiCurrent + 1360LL) = v15;
  *(_QWORD *)(gptiCurrent + 1368LL) = v18;
  *(_QWORD *)(gptiCurrent + 1376LL) = v14;
  if ( !v17 )
  {
    if ( !a5 || IsGpqForegroundAccessibleOnInputThread(v9, (const struct tagUIPI_INFO_INT *)a4) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v21);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v21);
  return 1LL;
}
