/*
 * XREFs of IoQueuesInitialize @ 0x1C000B334
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C000BD8C (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C000F654 (NVMeSubmissionQueueInit.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r14d
  unsigned int v4; // r13d
  __int64 v5; // r9
  __int64 v6; // r8
  void **v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  void **v10; // rdi
  __int64 v11; // r9
  char *v12; // rcx
  __int64 v13; // rdx
  void **v14; // rcx
  int v15; // edi
  void *v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // r14d
  unsigned int v19; // eax
  unsigned int v20; // edi
  void **v21; // rcx
  unsigned int v22; // r14d
  void *v23; // rcx
  unsigned int i; // edi
  _QWORD *v25; // r8
  unsigned int j; // edi
  _QWORD *v27; // r8
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+30h] [rbp-38h]
  int v35; // [rsp+38h] [rbp-30h]
  int v36; // [rsp+38h] [rbp-30h]
  char *v37; // [rsp+40h] [rbp-28h] BYREF
  void *v38; // [rsp+48h] [rbp-20h] BYREF
  __int64 v39; // [rsp+50h] [rbp-18h] BYREF
  __int64 v40; // [rsp+58h] [rbp-10h]
  __int64 v41; // [rsp+60h] [rbp-8h]
  _QWORD savedregs[8]; // [rsp+68h] [rbp+0h]
  void *v43; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+50h]
  char *v45; // [rsp+C0h] [rbp+58h] BYREF
  char *v46; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 282);
  v2 = 0;
  v37 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v4 = 1;
  if ( !(_WORD)v1 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 280);
  if ( !(_WORD)v5 )
    return 0;
  v6 = *(unsigned __int16 *)(a1 + 278);
  v7 = (void **)(a1 + 776);
  v8 = *(unsigned __int16 *)(a1 + 278) << 6;
  v9 = 16 * v6;
  v44 = v8;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v13 = 16 * v5 * v6;
    v12 = (char *)(*(_QWORD *)*v7 + v9);
    v37 = v12;
    v46 = &v12[v13];
    v45 = &v12[v13 + v13];
    goto LABEL_11;
  }
  StorPortExtendedFunction(
    0LL,
    a1,
    (unsigned int)(344 * v1),
    1701672526LL,
    a1 + 776,
    v31,
    v33,
    v35,
    (_DWORD)v37,
    v38,
    v39,
    v40,
    v41,
    savedregs[0],
    savedregs[1],
    savedregs[2],
    savedregs[3],
    savedregs[4]);
  v10 = (void **)(a1 + 768);
  StorPortExtendedFunction(
    0LL,
    a1,
    136 * (unsigned int)*(unsigned __int16 *)(a1 + 280),
    1701672526LL,
    a1 + 768,
    v32,
    v34,
    v36,
    (_DWORD)v37,
    v38,
    v39,
    v40,
    v41,
    savedregs[0],
    savedregs[1],
    savedregs[2],
    savedregs[3],
    savedregs[4]);
  if ( !*v7
    || !*v10
    || (StorPortExtendedFunction(
          0LL,
          a1,
          16 * *(unsigned __int16 *)(a1 + 278) * (unsigned int)*(unsigned __int16 *)(a1 + 280),
          1701672526LL,
          (unsigned int)&v37,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]),
        !v37)
    || (StorPortExtendedFunction(
          0LL,
          a1,
          16 * *(unsigned __int16 *)(a1 + 278) * (unsigned int)*(unsigned __int16 *)(a1 + 280),
          1701672526LL,
          (unsigned int)&v46,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]),
        !v46)
    || (v4 = (*(unsigned __int16 *)(a1 + 280) - 1) / *(unsigned __int16 *)(a1 + 282) + 1,
        StorPortExtendedFunction(
          0LL,
          a1,
          8 * v4 * *(unsigned __int16 *)(a1 + 282),
          1701672526LL,
          (unsigned int)&v45,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]),
        !v45) )
  {
LABEL_24:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 768) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 280); ++i )
        {
          v25 = (_QWORD *)(*(_QWORD *)(a1 + 768) + 136LL * i);
          if ( *v25 )
            NVMeFreeDmaBuffer(a1, v8, v25, v25[1]);
        }
      }
      if ( *v7 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 282); ++j )
        {
          v27 = (char *)*v7 + 344 * j;
          if ( *v27 )
            NVMeFreeDmaBuffer(a1, v9, v27, v27[1]);
        }
      }
      if ( v45 )
        StorPortExtendedFunction(
          1LL,
          a1,
          v45,
          v11,
          v30,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]);
      if ( v46 )
        StorPortExtendedFunction(
          1LL,
          a1,
          v46,
          v11,
          v30,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]);
      if ( v37 )
        StorPortExtendedFunction(
          1LL,
          a1,
          v37,
          v11,
          v30,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]);
      if ( *v7 )
        StorPortExtendedFunction(
          1LL,
          a1,
          *v7,
          v11,
          v30,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]);
      v28 = *(_QWORD *)(a1 + 768);
      if ( v28 )
        StorPortExtendedFunction(
          1LL,
          a1,
          v28,
          v11,
          v30,
          v31,
          v33,
          v35,
          (_DWORD)v37,
          v38,
          v39,
          v40,
          v41,
          savedregs[0],
          savedregs[1],
          savedregs[2],
          savedregs[3],
          savedregs[4]);
    }
    *(_DWORD *)(a1 + 280) = 0;
    return 0;
  }
  NVMeZeroMemory(*v7, 344 * *(unsigned __int16 *)(a1 + 282));
  NVMeZeroMemory(*v10, 136 * *(unsigned __int16 *)(a1 + 280));
  LOWORD(v5) = *(_WORD *)(a1 + 280);
  LOWORD(v6) = *(_WORD *)(a1 + 278);
  v12 = v37;
LABEL_11:
  NVMeZeroMemory(v12, 16 * (unsigned __int16)v5 * (unsigned __int16)v6);
  NVMeZeroMemory(v46, 16 * *(unsigned __int16 *)(a1 + 278) * *(unsigned __int16 *)(a1 + 280));
  NVMeZeroMemory(v45, 8 * v4 * *(unsigned __int16 *)(a1 + 282));
  LODWORD(v43) = 0;
  if ( *(_WORD *)(a1 + 280) )
  {
    do
    {
      v14 = *(void ***)(a1 + 768);
      v38 = 0LL;
      v15 = (_DWORD)v14 + 136 * v2;
      v39 = 0LL;
      if ( *(_BYTE *)(a1 + 16) )
      {
        v16 = *v14;
        v38 = v16;
      }
      else
      {
        if ( (unsigned int)NVMeAllocateDmaBuffer(a1, v8, &v38, &v39) )
          goto LABEL_24;
        v16 = v38;
        if ( !v38 )
          goto LABEL_24;
      }
      NVMeZeroMemory(v16, v8);
      v17 = v2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 278);
      v18 = (int)v43;
      NVMeSubmissionQueueInit(
        a1,
        v15,
        (_DWORD)v43 + 1,
        (_DWORD)v38,
        v39,
        (__int64)&v37[16 * v17],
        (__int64)&v46[16 * v17]);
      v19 = *(unsigned __int16 *)(a1 + 280);
      v2 = v18 + 1;
      LODWORD(v43) = v2;
    }
    while ( v2 < v19 );
  }
  v20 = 0;
  if ( *(_WORD *)(a1 + 282) )
  {
    while ( v20 < *(unsigned __int16 *)(a1 + 280) )
    {
      v21 = (void **)*v7;
      v43 = 0LL;
      v22 = (_DWORD)v21 + 344 * v20;
      v39 = 0LL;
      if ( *(_BYTE *)(a1 + 16) )
      {
        v23 = *v21;
        v43 = v23;
      }
      else if ( (unsigned int)NVMeAllocateDmaBuffer(a1, v9, &v43, &v39) || (v23 = v43) == 0LL )
      {
        v8 = v44;
        goto LABEL_24;
      }
      NVMeZeroMemory(v23, v9);
      NVMeCompletionQueueInit(a1, v22, v20 + 1, (_DWORD)v43, v39, (__int64)&v45[8 * v20 * (unsigned __int64)v4]);
      if ( ++v20 >= *(unsigned __int16 *)(a1 + 282) )
        return 1;
    }
  }
  return 1;
}
