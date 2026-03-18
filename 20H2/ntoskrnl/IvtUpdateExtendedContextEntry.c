/*
 * XREFs of IvtUpdateExtendedContextEntry @ 0x1404DF330
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1404DDBB8 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x1409AD2B8 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x1409ADDB8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtBuildExtendedContextEntry @ 0x1404DDE5C (IvtBuildExtendedContextEntry.c)
 *     IvtGetBlockedDomain @ 0x1404DE50C (IvtGetBlockedDomain.c)
 *     IvtGetContextEntryType @ 0x1404DE560 (IvtGetContextEntryType.c)
 *     IvtInvalidateExtendedContextEntry @ 0x1404DECEC (IvtInvalidateExtendedContextEntry.c)
 */

__int64 *__fastcall IvtUpdateExtendedContextEntry(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8)
{
  unsigned __int64 v9; // r8
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 BlockedDomain; // r14
  char v15; // r12
  __int64 v16; // r13
  __int64 v17; // rbx
  __int128 v18; // xmm0
  unsigned __int64 v19; // rdx
  char v20; // r9
  char v21; // r15
  int v22; // ecx
  unsigned __int64 v23; // r8
  char ContextEntryType; // al
  __int64 v25; // r8
  char v26; // r9
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 *result; // rax
  __int128 v31; // [rsp+50h] [rbp-28h] BYREF
  __int128 v32; // [rsp+60h] [rbp-18h]
  char v33; // [rsp+C0h] [rbp+48h]
  unsigned int v34; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v35; // [rsp+D0h] [rbp+58h] BYREF
  char v36; // [rsp+D8h] [rbp+60h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v9 = 2 * ((unsigned __int64)a2 >> 8);
  v11 = a2;
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
    v13 = (_QWORD *)(v12 + 8 * (v9 + ((unsigned __int8)(v11 >> 3) >= 0x10u)));
  else
    v13 = (_QWORD *)(v12 + 8 * v9);
  v36 = 0;
  BlockedDomain = 0x10000LL;
  v15 = 0;
  v16 = 0x10000LL;
  v17 = *v13 + 32 * (a2 & 7 | (8LL * ((a2 >> 3) & 0xF)));
  v18 = *(_OWORD *)(v17 + 16);
  v19 = *(_QWORD *)v17;
  v31 = *(_OWORD *)v17;
  v32 = v18;
  if ( (v31 & 1) != 0 && !a7 )
  {
    v36 = 1;
    v16 = (unsigned __int16)(DWORD2(v31) >> 8);
  }
  v20 = (v19 & 0x800) != 0;
  v21 = 0;
  v33 = v20;
  v35 = 0LL;
  if ( a5 )
  {
    v22 = *(_DWORD *)(a5 + 4);
    if ( v22 == 1 )
    {
      v21 = 1;
      v15 = 1;
      BlockedDomain = IvtGetBlockedDomain(a1, &v34, &v35);
      v20 = v33;
      goto LABEL_17;
    }
    if ( v22 )
    {
      BlockedDomain = *(unsigned int *)(a5 + 24);
      v23 = *(_QWORD *)(a5 + 16) >> 12;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 270) )
        goto LABEL_17;
      BlockedDomain = *(unsigned int *)(a1 + 224);
      v23 = *(__int64 *)(a1 + 272) >> 12;
    }
    v21 = 1;
    v35 = v23;
    v15 = 1;
  }
  else if ( (v31 & 1) != 0 )
  {
    BlockedDomain = (unsigned __int16)(DWORD2(v31) >> 8);
    v35 = v19 >> 12;
    v21 = (v19 & 0x18) == 0;
  }
LABEL_17:
  ContextEntryType = IvtGetContextEntryType(v20, v21);
  IvtBuildExtendedContextEntry(
    a1,
    ContextEntryType,
    (unsigned __int64)v32 >> 12,
    v32 & 0xF,
    v26,
    BlockedDomain,
    v25,
    (__int64)&v31);
  v28 = v31;
  if ( (v31 & 1) != 0 )
  {
    *(_OWORD *)(v17 + 16) = v32;
    *(_QWORD *)(v17 + 8) = *((_QWORD *)&v31 + 1);
    *(_QWORD *)v17 = v28;
  }
  else
  {
    *(_QWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_QWORD *)(v17 + 24) = 0LL;
  }
  if ( v36 )
  {
    IvtInvalidateExtendedContextEntry(a1, a2, v16, v27);
    if ( v15 )
      IvtInvalidateExtendedContextEntry(a1, a2, BlockedDomain, v29);
  }
  result = a8;
  if ( a8 )
    *a8 = v16;
  return result;
}
