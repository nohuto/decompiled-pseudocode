/*
 * XREFs of ?ProbeAndReadFD_KERNINGPAIR@@YGPAU_FD_KERNINGPAIR@@PBU1@HK@Z @ 0x20A683
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z @ 0x20DF1E (-UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ??9@YG_NABU_FD_KERNINGPAIR@@0@Z @ 0x20A183 (--9@YG_NABU_FD_KERNINGPAIR@@0@Z.c)
 */

PATHOBJ *__userpurge ProbeAndReadFD_KERNINGPAIR@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        const struct _FD_KERNINGPAIR *a3,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v7; // eax
  PATHOBJ *v8; // eax
  PATHOBJ *v9; // edi
  int v11; // [esp+10h] [ebp-30h] BYREF
  __int16 v12; // [esp+14h] [ebp-2Ch]
  PATHOBJ *v13; // [esp+18h] [ebp-28h]
  size_t MaxCount; // [esp+1Ch] [ebp-24h]
  void *Src; // [esp+20h] [ebp-20h]
  unsigned int v16; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  Src = (void *)a2;
  v11 = 0;
  v12 = 0;
  v5 = 0;
  v16 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( !a1 )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 + 6 > _MmUserProbeAddress || a2 + 6 < a2 )
      *(_BYTE *)_MmUserProbeAddress = 0;
  }
  while ( (unsigned int)a3 >= 6 )
  {
    --a3;
    v7 = v5 + 1;
    if ( v5 + 1 < v5 )
      break;
    ++v5;
    v16 = v7;
    if ( !operator!=((_WORD *)(6 * v7 + a2 - 6), &v11) )
      goto LABEL_12;
    a2 = (unsigned int)Src;
  }
  v5 = 0;
  v16 = 0;
LABEL_12:
  ms_exc.registration.TryLevel = -2;
  if ( !v5 )
    return 0;
  if ( v5 > 0x682AAA )
    return 0;
  MaxCount = 6 * v5;
  v8 = (PATHOBJ *)PALLOCMEM2(6 * v5, 1886221639, 1);
  v9 = v8;
  v13 = v8;
  if ( !v8 )
    return 0;
  ms_exc.registration.TryLevel = 1;
  memcpy(v8, Src, MaxCount);
  ms_exc.registration.TryLevel = -2;
  if ( operator!=((_WORD *)&v9[-1].fl + 3 * v5 + 1, &v11) )
  {
    Win32FreePool(v9);
    return 0;
  }
  return v9;
}
