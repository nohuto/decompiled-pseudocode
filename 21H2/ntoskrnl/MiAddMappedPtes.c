/*
 * XREFs of MiAddMappedPtes @ 0x1406F40E0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x140761714 (MiMapSystemImage.c)
 * Callees:
 *     MiGetSharedProtos @ 0x140256DF8 (MiGetSharedProtos.c)
 *     MiMakePrototypePteDirect @ 0x14026DA80 (MiMakePrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x14026E548 (MiMakeDemandZeroPte.c)
 *     MiGetSubsectionDriverProtos @ 0x14027B234 (MiGetSubsectionDriverProtos.c)
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5, int a6)
{
  int v7; // r14d
  __int64 *v8; // rdi
  BOOL v9; // r15d
  unsigned __int64 v10; // rsi
  __int64 DemandZeroPte; // rbx
  unsigned __int64 v12; // r13
  unsigned int *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rcx
  int v16; // edx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 PrototypePteDirect; // rax
  __int64 SubsectionDriverProtos; // rax
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v7 = a6;
  v8 = a1;
  v26 = 0LL;
  if ( (MiFlags & 0x8000) == 0 || (v9 = a6 != 0, (MiFlags & 0x4000) == 0) )
    v9 = 0;
  v10 = (unsigned __int64)&a1[a2];
  DemandZeroPte = 0LL;
  v12 = 0LL;
  v13 = MiOffsetToProtos(a3, *a4, &v26);
  v14 = (__int64)v13;
  if ( v13 )
  {
    if ( (*((_BYTE *)v13 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
      goto LABEL_23;
    if ( v7 )
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos(v13);
      if ( SubsectionDriverProtos )
        goto LABEL_24;
    }
    v15 = *(_QWORD *)(v14 + 8);
    v16 = 0;
    v17 = v15 + 8 * v26;
    v18 = v15 + 8LL * *(unsigned int *)(v14 + 44);
    while ( 1 )
    {
      if ( (unsigned __int64)v8 >= v10 )
        return 0LL;
      if ( v17 < v18 )
        goto LABEL_9;
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v14 )
      {
        if ( v17 < *(_QWORD *)(a3 + 136)
                 + 8
                 * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32)) )
        {
          do
          {
            *v8++ = MiMakePrototypePteDirect(v17);
            if ( (unsigned __int64)v8 >= v10 )
              break;
            v17 = v25 + 8;
          }
          while ( v17 < v24 );
        }
        return 0LL;
      }
      v17 = *(_QWORD *)(v14 + 8);
      if ( (*(_BYTE *)(v14 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
      {
LABEL_23:
        SubsectionDriverProtos = MiGetSharedProtos(a3, a5, v14);
      }
      else
      {
        if ( !v7 )
          goto LABEL_15;
        SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v14);
        if ( !SubsectionDriverProtos )
          goto LABEL_15;
      }
LABEL_24:
      v17 = *(_QWORD *)(SubsectionDriverProtos + 72);
LABEL_15:
      if ( !v9 || (v22 = *(unsigned __int16 *)(v14 + 32), (v22 & 4) == 0) )
      {
LABEL_10:
        PrototypePteDirect = MiMakePrototypePteDirect(v17);
        goto LABEL_11;
      }
      v23 = (*(unsigned __int16 *)(v14 + 34) >> 4) + (*(_DWORD *)(v14 + 40) << 9);
      v12 = v17 + 8LL * ((v23 >> 12) + ((v23 & 0xFFF) != 0));
      DemandZeroPte = MiMakeDemandZeroPte(
                        (v22 >> 1) & 0x1F,
                        (unsigned int)((8LL * *(unsigned int *)(v14 + 44) - 8LL * ((v23 >> 12) + ((v23 & 0xFFF) != 0))) >> 3)
                      - (*(_DWORD *)(v14 + 52) & 0x3FFFFFFF));
LABEL_9:
      if ( !v16 || v17 < v12 )
        goto LABEL_10;
      PrototypePteDirect = DemandZeroPte;
      --v16;
LABEL_11:
      *v8++ = PrototypePteDirect;
      v17 += 8LL;
    }
  }
  return 3221225503LL;
}
