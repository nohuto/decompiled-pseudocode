/*
 * XREFs of MiApplyRetpolineFixupsToKernelAndHal @ 0x140A43490
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140A431FC (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1403AD048 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlLookupImageSectionByName @ 0x140587464 (RtlLookupImageSectionByName.c)
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x140589ED0 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14058A38C (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall MiApplyRetpolineFixupsToKernelAndHal(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 *v4; // rbx
  unsigned int (*v5)(void); // rsi
  unsigned int v6; // edi
  int updated; // ecx
  char *v9; // rbx
  PIMAGE_NT_HEADERS v10; // rax
  const char *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r12
  PIMAGE_NT_HEADERS v16; // r15
  const char *v17; // rax
  int v18; // ebx
  __int64 *v19; // rdi
  unsigned int v20; // r13d
  __int64 v21; // rsi
  const char *v22; // rax
  PVOID v23; // r9
  unsigned int v24; // r8d
  int v25; // ecx
  __int64 v26; // [rsp+58h] [rbp-69h] BYREF
  __int64 v27; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v28[4]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v29[14]; // [rsp+78h] [rbp-49h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v26 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140C4CB8C = *(_DWORD *)(v1 + 3468) >> 12;
  if ( (KiSpeculationFeatures & 0x2000000) != 0
    && (v26 = v3,
        v9 = *(char **)(v3 + 48),
        v10 = RtlImageNtHeader(v9),
        v11 = RtlLookupImageSectionByName((__int64)v10, "RETPOL"),
        v12 = *((_DWORD *)v11 + 2),
        Base = &v9[*((unsigned int *)v11 + 3)],
        dword_140C4CBC8 = (v12 >> 12) + ((v12 & 0xFFF) != 0),
        dword_140C4CBC8 > (unsigned int)dword_140C4CB8C) )
  {
    updated = -1073741811;
  }
  else if ( ((KiSpeculationFeatures & 0x2000000) != 0 || (KiSpeculationFeatures & 0x4000000) != 0)
         && (MiFlags & 0x10000) != 0 )
  {
    v13 = ((unsigned int)KiSpeculationFeatures >> 25) & 1;
    memset(v29, 0, 0x68uLL);
    v14 = v13 | 2;
    if ( (KiSpeculationFeatures & 0x4000000) == 0 )
      v14 = v13;
    v29[1] = v14;
    updated = VslpEnterIumSecureMode(2u, 220, 0, (__int64)v29);
  }
  else if ( (KiSpeculationFeatures & 0x2000000) != 0 )
  {
    v15 = v26;
    v16 = RtlImageNtHeader(*(PVOID *)(v26 + 48));
    v17 = RtlLookupImageSectionByName((__int64)v16, "INITKDBG");
    v18 = 0;
    v19 = &v26;
    v28[0] = *((_DWORD *)v17 + 3);
    v20 = 1;
    LODWORD(v27) = *((_DWORD *)v17 + 2);
    while ( 1 )
    {
      v21 = *v19;
      v22 = RtlLookupImageSectionByName((__int64)v16, "MINIEX");
      v23 = Base;
      v24 = *(_DWORD *)(v21 + 64);
      v25 = *((_DWORD *)v22 + 3);
      v28[v20 - 2] = *((_DWORD *)v22 + 2);
      v28[v20] = v25;
      updated = RtlPerformRetpolineRelocationsOnImageEx(
                  *(char **)(v21 + 48),
                  *(_QWORD *)(v21 + 48),
                  v24,
                  (__int64)v23,
                  (__int64)v23,
                  1,
                  (__int64)v28,
                  (__int64)&v27,
                  v20 + 1);
      if ( updated < 0 )
        break;
      v20 = 0;
      ++v18;
      ++v19;
      if ( v18 )
      {
        updated = RtlCopyRetpolineStubsUnwindInfo(
                    *(_QWORD *)(v15 + 48),
                    *(_QWORD *)(v15 + 48),
                    (unsigned int *)Base,
                    (int)Base);
        if ( updated < 0 )
          break;
        goto LABEL_6;
      }
    }
  }
  else
  {
LABEL_6:
    if ( (KiSpeculationFeatures & 0x4000000) != 0 )
    {
      v4 = *(__int64 **)(a1 + 16);
      v5 = (unsigned int (*)(void))((unsigned __int64)MiIsBootImageTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x2000000) != 0));
      v6 = 0;
      while ( 1 )
      {
        updated = RtlUpdateImportRelocationsInImage(
                    (char *)v4[6],
                    v4[6],
                    *((_DWORD *)v4 + 16),
                    v5,
                    (__int64)Base,
                    (__int64)Base,
                    1,
                    (KiSpeculationFeatures & 0x2000000) == 0);
        if ( ((updated + 0x80000000) & 0x80000000) == 0 && updated != -1073741637 )
          break;
        *((_DWORD *)v4 + 26) |= 0x80u;
        ++v6;
        v4 = (__int64 *)*v4;
        if ( v6 >= 2 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      updated = 0;
    }
  }
  dword_140C4CBCC = updated;
  return (unsigned int)updated;
}
