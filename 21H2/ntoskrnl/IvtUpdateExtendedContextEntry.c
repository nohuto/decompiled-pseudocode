/*
 * XREFs of IvtUpdateExtendedContextEntry @ 0x1404E0FB0
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1404DF808 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x1409AB0B8 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x1409ABBD8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtBuildExtendedContextEntry @ 0x1404DFAAC (IvtBuildExtendedContextEntry.c)
 *     IvtGetBlockedDomain @ 0x1404E015C (IvtGetBlockedDomain.c)
 *     IvtGetContextEntryType @ 0x1404E01B0 (IvtGetContextEntryType.c)
 *     IvtInvalidateExtendedContextEntry @ 0x1404E093C (IvtInvalidateExtendedContextEntry.c)
 */

__int64 *__fastcall IvtUpdateExtendedContextEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v14; // r8
  __int64 BlockedDomain; // r15
  __int64 v16; // rax
  char v17; // r12
  __int64 v18; // r13
  __int64 v19; // rbx
  __int128 v20; // xmm0
  unsigned __int64 v21; // rdx
  char v22; // r9
  char v23; // r14
  int v24; // ecx
  unsigned __int64 v25; // r8
  char ContextEntryType; // al
  __int64 v27; // r8
  char v28; // r9
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned int v31; // r14d
  unsigned int i; // ebx
  __int64 *result; // rax
  __int128 v34; // [rsp+48h] [rbp-30h] BYREF
  __int128 v35; // [rsp+58h] [rbp-20h]
  char v36; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v37; // [rsp+D0h] [rbp+58h] BYREF
  char v38; // [rsp+D8h] [rbp+60h]

  v38 = a4;
  v37 = a3;
  v8 = *a2;
  v9 = (unsigned __int64)*a2 >> 8;
  v11 = *(_QWORD *)(a1 + 32);
  v12 = 2 * v9;
  if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
    v14 = (_QWORD *)(v11 + 8 * (v12 + ((unsigned __int8)((unsigned __int8)v8 >> 3) >= 0x10u)));
  else
    v14 = (_QWORD *)(v11 + 8 * v12);
  BlockedDomain = 0x10000LL;
  v16 = *(_WORD *)a2 & 7;
  v38 = 0;
  v17 = 0;
  v18 = 0x10000LL;
  v19 = *v14 + 32 * (v16 | (8LL * ((v8 >> 3) & 0xF)));
  v20 = *(_OWORD *)(v19 + 16);
  v21 = *(_QWORD *)v19;
  v34 = *(_OWORD *)v19;
  v35 = v20;
  if ( (v34 & 1) != 0 && !a7 )
  {
    v38 = 1;
    v18 = (unsigned __int16)(DWORD2(v34) >> 8);
  }
  v22 = (v21 & 0x800) != 0;
  v23 = 0;
  v36 = v22;
  v37 = 0LL;
  if ( a5 )
  {
    v24 = *(_DWORD *)(a5 + 4);
    if ( v24 == 1 )
    {
      v23 = 1;
      v17 = 1;
      BlockedDomain = IvtGetBlockedDomain(a1, a2, &v37);
      v22 = v36;
      goto LABEL_17;
    }
    if ( v24 )
    {
      BlockedDomain = *(unsigned int *)(a5 + 24);
      v25 = *(_QWORD *)(a5 + 16) >> 12;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 270) )
        goto LABEL_17;
      BlockedDomain = *(unsigned int *)(a1 + 224);
      v25 = *(__int64 *)(a1 + 272) >> 12;
    }
    v23 = 1;
    v37 = v25;
    v17 = 1;
  }
  else if ( (v34 & 1) != 0 )
  {
    BlockedDomain = (unsigned __int16)(DWORD2(v34) >> 8);
    v37 = v21 >> 12;
    v23 = (v21 & 0x18) == 0;
  }
LABEL_17:
  ContextEntryType = IvtGetContextEntryType(v22, v23);
  IvtBuildExtendedContextEntry(
    a1,
    ContextEntryType,
    (unsigned __int64)v35 >> 12,
    v35 & 0xF,
    v28,
    BlockedDomain,
    v27,
    (__int64)&v34);
  v30 = v34;
  if ( (v34 & 1) != 0 )
  {
    *(_OWORD *)(v19 + 16) = v35;
    *(_QWORD *)(v19 + 8) = *((_QWORD *)&v34 + 1);
    *(_QWORD *)v19 = v30;
  }
  else
  {
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 8) = 0LL;
    *(_QWORD *)(v19 + 16) = 0LL;
    *(_QWORD *)(v19 + 24) = 0LL;
  }
  if ( v38 )
  {
    v31 = 0;
    for ( i = *a2; v31 < a2[1]; ++v31 )
    {
      IvtInvalidateExtendedContextEntry(a1, i, v18, v29);
      if ( v17 )
        IvtInvalidateExtendedContextEntry(a1, i, BlockedDomain, v29);
      i += a2[2];
    }
  }
  result = a8;
  if ( a8 )
    *a8 = v18;
  return result;
}
