/*
 * XREFs of MiApplyRetpolineFixupsToKernelAndHal @ 0x140B06F28
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140B06C7C (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1403C3548 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlLookupImageSectionByName @ 0x1405EC554 (RtlLookupImageSectionByName.c)
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x1405EEDA4 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1405EF24C (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall MiApplyRetpolineFixupsToKernelAndHal(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rbx
  unsigned int (*v4)(void); // rsi
  unsigned int v5; // edi
  int updated; // ecx
  __int64 v8; // rbx
  __int64 v9; // rax
  const char *v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  const char *v14; // rax
  const char *v15; // rax
  unsigned int v16; // r8d
  int v17; // ecx
  __int64 v18; // [rsp+50h] [rbp-B8h]
  _DWORD v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v20[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v21[14]; // [rsp+70h] [rbp-98h] BYREF

  v18 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  dword_140C4F404 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3500LL) >> 12;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
    && (v18 = v2,
        v8 = *(_QWORD *)(v2 + 48),
        v9 = RtlImageNtHeader(v8),
        v10 = RtlLookupImageSectionByName(v9, "RETPOL"),
        v11 = *((_DWORD *)v10 + 2),
        Base = (PVOID)(v8 + *((unsigned int *)v10 + 3)),
        dword_140C4F440 = (v11 >> 12) + ((v11 & 0xFFF) != 0),
        dword_140C4F440 > (unsigned int)dword_140C4F404) )
  {
    updated = -1073741811;
  }
  else if ( (MiFlags & 0x4000) != 0
         && ((KiSpeculationFeatures & 0x20000000000LL) != 0 || (KiSpeculationFeatures & 0x40000000000LL) != 0) )
  {
    v12 = ((unsigned __int64)KiSpeculationFeatures >> 41) & 1;
    if ( (KiSpeculationFeatures & 0x40000000000LL) != 0 )
      LODWORD(v12) = v12 | 2;
    memset(v21, 0, 0x68uLL);
    v21[1] = (unsigned int)v12;
    updated = VslpEnterIumSecureMode(2u, 220, 0, (__int64)v21);
  }
  else
  {
    if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
      goto LABEL_4;
    v13 = RtlImageNtHeader(*(_QWORD *)(v18 + 48));
    v14 = RtlLookupImageSectionByName(v13, "INITKDBG");
    v20[0] = *((_DWORD *)v14 + 3);
    v19[0] = *((_DWORD *)v14 + 2);
    v15 = RtlLookupImageSectionByName(v13, "MINIEX");
    v16 = *(_DWORD *)(v18 + 64);
    v17 = *((_DWORD *)v15 + 3);
    v19[1] = *((_DWORD *)v15 + 2);
    v20[1] = v17;
    updated = RtlPerformRetpolineRelocationsOnImageEx(
                *(_QWORD *)(v18 + 48),
                *(_QWORD *)(v18 + 48),
                v16,
                (__int64)Base,
                (__int64)Base,
                1,
                (__int64)v20,
                (__int64)v19,
                2u);
    if ( updated >= 0 )
    {
      updated = RtlCopyRetpolineStubsUnwindInfo(
                  *(_QWORD *)(v18 + 48),
                  *(_QWORD *)(v18 + 48),
                  (unsigned int *)Base,
                  (int)Base);
      if ( updated >= 0 )
      {
LABEL_4:
        if ( (KiSpeculationFeatures & 0x40000000000LL) != 0 )
        {
          v3 = *(__int64 **)(a1 + 16);
          v4 = (unsigned int (*)(void))((unsigned __int64)MiIsBootImageTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0));
          v5 = 0;
          while ( 1 )
          {
            updated = RtlUpdateImportRelocationsInImage(
                        v3[6],
                        v3[6],
                        *((_DWORD *)v3 + 16),
                        v4,
                        (__int64)Base,
                        (__int64)Base,
                        1,
                        (KiSpeculationFeatures & 0x20000000000LL) == 0);
            if ( ((updated + 0x80000000) & 0x80000000) == 0 && updated != -1073741637 )
              break;
            *((_DWORD *)v3 + 26) |= 0x80u;
            ++v5;
            v3 = (__int64 *)*v3;
            if ( v5 >= 2 )
              goto LABEL_8;
          }
        }
        else
        {
LABEL_8:
          updated = 0;
        }
      }
    }
  }
  dword_140C4F444 = updated;
  return (unsigned int)updated;
}
