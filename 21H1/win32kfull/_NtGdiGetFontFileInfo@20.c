/*
 * XREFs of _NtGdiGetFontFileInfo@20 @ 0xACC7C
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z @ 0xACE02 (-GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z.c)
 *     ??0PFFREFOBJ@@QAE@XZ @ 0xF8309 (--0PFFREFOBJ@@QAE@XZ.c)
 *     ??1PFFREFOBJ@@QAE@XZ @ 0xF830F (--1PFFREFOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiGetFontFileInfo(int a1, unsigned int a2, wchar_t *Address, unsigned int a4, ULONG a5)
{
  struct PFF *PFFFromId; // esi
  const wchar_t *v6; // ebx
  int v7; // esi
  const wchar_t *v8; // ecx
  __int16 v9; // ax
  SIZE_T v10; // edx
  unsigned int v12; // [esp+0h] [ebp-44h]
  unsigned int v13; // [esp+0h] [ebp-44h]
  struct PFF ***v14; // [esp+4h] [ebp-40h]
  struct PFF ***v15; // [esp+4h] [ebp-40h]
  _DWORD v16[3]; // [esp+10h] [ebp-34h] BYREF
  int v17; // [esp+20h] [ebp-24h]
  int v18; // [esp+24h] [ebp-20h] BYREF
  int v19; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]
  _DWORD *v21; // [esp+4Ch] [ebp+8h]

  PFFREFOBJ::PFFREFOBJ((PFFREFOBJ *)v16);
  v18 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v17 = 0;
  PFFFromId = GetPFFFromId(0, v12, v14);
  if ( !PFFFromId )
  {
    if ( gpPFTPrivate )
      PFFFromId = GetPFFFromId(0, v13, v15);
    if ( !PFFFromId )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      goto LABEL_22;
    }
  }
  v16[0] = PFFFromId;
  ++*((_DWORD *)PFFFromId + 12);
  v16[2] = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  if ( a2 >= *((_DWORD *)PFFFromId + 5) )
  {
LABEL_22:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v16);
    return 87;
  }
  _mm_lfence();
  v21 = *(_DWORD **)(*((_DWORD *)PFFFromId + 30) + 4 * a2);
  v6 = (const wchar_t *)v21[12];
  if ( !v6 )
    v6 = (const wchar_t *)byte_FC318;
  v7 = 0;
  v19 = 0;
  v8 = v6;
  do
    v9 = *v8++;
  while ( v9 != (_WORD)v17 );
  v10 = 2 * (v8 - (v6 + 1)) + 18;
  ms_exc.registration.TryLevel = 0;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a5 = *(_BYTE *)a5;
    *(_DWORD *)a5 = v10;
    v7 = v19;
  }
  if ( Address && a4 >= v10 )
  {
    ProbeForWrite(Address, v10, 4u);
    *(_DWORD *)Address = *v21;
    *((_DWORD *)Address + 1) = v21[1];
    *((_DWORD *)Address + 2) = v21[4];
    *((_DWORD *)Address + 3) = 0;
    _wcscpy_s(Address + 8, (a4 - 16) >> 1, v6);
  }
  else
  {
    v7 = 122;
    v19 = 122;
  }
  ms_exc.registration.TryLevel = -2;
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v16);
  return v7;
}
