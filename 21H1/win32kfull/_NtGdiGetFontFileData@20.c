/*
 * XREFs of _NtGdiGetFontFileData@20 @ 0x221DD2
 * Callers:
 *     <none>
 * Callees:
 *     _EngUnmapFontFileFD@4 @ 0x8B56C (_EngUnmapFontFileFD@4.c)
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z @ 0xACE02 (-GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z.c)
 *     ??0PFFREFOBJ@@QAE@XZ @ 0xF8309 (--0PFFREFOBJ@@QAE@XZ.c)
 *     ??1PFFREFOBJ@@QAE@XZ @ 0xF830F (--1PFFREFOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?MapFontFileInKernel@@YGJPAXPAPAX@Z @ 0x208DC1 (-MapFontFileInKernel@@YGJPAXPAPAX@Z.c)
 */

ULONG __stdcall NtGdiGetFontFileData(NTSTATUS Status, unsigned int a2, size_t *MappedBase, char *a4, size_t MaxCount)
{
  struct PFF *PFFFromId; // esi
  ULONG_PTR v7; // edi
  size_t v8; // ecx
  ULONG v9; // esi
  char *v10; // ecx
  char *v11; // edx
  unsigned int v12; // [esp+0h] [ebp-50h]
  unsigned int v13; // [esp+0h] [ebp-50h]
  struct PFF ***v14; // [esp+4h] [ebp-4Ch]
  struct PFF ***v15; // [esp+4h] [ebp-4Ch]
  _DWORD v16[5]; // [esp+10h] [ebp-40h] BYREF
  unsigned int v17; // [esp+2Ch] [ebp-24h]
  size_t v18; // [esp+30h] [ebp-20h]
  int v19; // [esp+34h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]
  unsigned int Statusa; // [esp+58h] [ebp+8h]
  int Statusb; // [esp+58h] [ebp+8h]

  ms_exc.registration.TryLevel = 0;
  if ( ((unsigned __int8)MappedBase & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = *MappedBase;
  v16[3] = v18;
  v17 = MappedBase[1];
  v16[4] = v17;
  ms_exc.registration.TryLevel = -2;
  PFFREFOBJ::PFFREFOBJ((PFFREFOBJ *)v16);
  v19 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  PFFFromId = GetPFFFromId(Status, (int)gpPFTPublic, 0, v12, v14);
  if ( !PFFFromId )
  {
    if ( gpPFTPrivate )
      PFFFromId = GetPFFFromId(Status, (int)gpPFTPrivate, 0, v13, v15);
    if ( !PFFFromId )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
      PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v16);
      return 87;
    }
  }
  v16[0] = PFFFromId;
  ++*((_DWORD *)PFFFromId + 12);
  v16[2] = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  if ( a2 >= *((_DWORD *)PFFFromId + 5)
    || (_mm_lfence(),
        v7 = *(_DWORD *)(*((_DWORD *)PFFFromId + 30) + 4 * a2),
        v8 = v18 + MaxCount,
        Statusa = v17 + __CFADD__(v18, MaxCount),
        Statusa < v17)
    || Statusa <= v17 && v8 < v18
    || Statusa
    || *(_DWORD *)(v7 + 16) < v8
    || !EngMapFontFileFDInternal((_DWORD *)v7, 0, 0, 0) )
  {
    v9 = 87;
    goto LABEL_24;
  }
  MappedBase = 0;
  Statusb = MapFontFileInKernel(*(void **)(v7 + 20), (PVOID *)&MappedBase);
  if ( Statusb < 0 )
  {
    EngUnmapFontFileFD(v7);
    v9 = RtlNtStatusToDosError(Statusb);
LABEL_24:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v16);
    return v9;
  }
  v10 = (char *)MappedBase + v18;
  if ( (*((_BYTE *)PFFFromId + 32) & 0x10) != 0 )
    v10 += 16;
  ms_exc.registration.TryLevel = 1;
  v11 = a4;
  if ( (unsigned int)&a4[MaxCount] > _MmUserProbeAddress || &a4[MaxCount] <= a4 )
    *(_BYTE *)_MmUserProbeAddress = 0;
  memcpy(v11, v10, MaxCount);
  ms_exc.registration.TryLevel = -2;
  MmUnmapViewInSessionSpace(MappedBase);
  EngUnmapFontFileFD(v7);
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v16);
  return 0;
}
