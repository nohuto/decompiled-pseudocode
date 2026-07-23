/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x1406F499C
 * Callers:
 *     PsUpdateComponentPower @ 0x1402F67A0 (PsUpdateComponentPower.c)
 *     PopProcessDisplayRequiredChange @ 0x140670990 (PopProcessDisplayRequiredChange.c)
 *     NtSetThreadExecutionState @ 0x1406713E0 (NtSetThreadExecutionState.c)
 * Callees:
 *     RtlTimelineBitmapUpdateRange @ 0x14022C2E4 (RtlTimelineBitmapUpdateRange.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeQueryTimelineBitmapTime @ 0x1402AA050 (KeQueryTimelineBitmapTime.c)
 *     RtlTimelineBitmapUpdate @ 0x1402F68C0 (RtlTimelineBitmapUpdate.c)
 *     RtlStateDurationUpdate @ 0x1402F6F04 (RtlStateDurationUpdate.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopEtEnergyContextSetState @ 0x1406F4EF8 (PopEtEnergyContextSetState.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406F6E88 (PopEtEnergyContextProcessStateUpdate.c)
 */

void __fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebp
  int v7; // esi
  int v8; // esi
  int v9; // esi
  unsigned int v10; // eax
  int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int *v16; // rcx
  unsigned int TimelineBitmapTime; // edx
  unsigned int v18; // edx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // edx
  int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // r9d
  __int16 v25; // r8
  unsigned int *v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  __int16 v29; // dx
  unsigned int v30; // r8d
  unsigned int v31; // edx
  bool v32; // zf
  __int64 v33; // rbp
  bool v34; // bl
  unsigned int *v35; // rbp
  __int64 v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // r8d
  unsigned int v39; // edx
  _QWORD *v40; // r11
  unsigned int v41; // ebx
  unsigned int v42; // ecx
  int v43; // r8d
  unsigned int v44; // edx
  int v45; // r9d
  __int64 v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+20h] [rbp-D8h]
  _DWORD v49[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 2280);
  v4 = a3;
  memset(v49, 0, sizeof(v49));
  if ( v3 )
  {
    PopAcquireRwLockExclusive(v3 + 432);
    if ( a2 == 9 )
    {
      v20 = HIDWORD(*(_QWORD *)(v3 + 384));
      v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_QWORD *)(v3 + 384);
      if ( v21 > 0x3E8 )
        v21 = 1000;
      v22 = -1;
      if ( ~v21 >= (v20 & 0x7FFFFFFFu) )
        v22 = (v20 & 0x7FFFFFFF) + v21;
      HIDWORD(v46) = (v20 ^ v22) & 0x7FFFFFFF ^ v20;
      LODWORD(v46) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_QWORD *)(v3 + 384) = v46;
      TimelineBitmapTime = KeQueryTimelineBitmapTime();
      v16 = (unsigned int *)(v3 + 344);
      goto LABEL_16;
    }
    if ( a2 <= 9 )
    {
      v7 = a2 - 4;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( v9 )
          {
            if ( v9 == 1 )
            {
              memset(&v49[2], 0, 0x88uLL);
              v49[1] = HIDWORD(a3);
              v49[0] = v4;
              PopEtEnergyContextSetState(a1, v49);
            }
            goto LABEL_17;
          }
          v10 = KeQueryTimelineBitmapTime();
          v11 = -1;
          v12 = v10;
          if ( (_WORD)v4 )
          {
            v13 = *(_DWORD *)(v3 + 128);
            if ( ~(unsigned __int16)v4 < v13 )
              v14 = -1;
            else
              v14 = v13 + (unsigned __int16)v4;
            *(_DWORD *)(v3 + 128) = v14;
            RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v12);
          }
          if ( WORD1(a3) )
          {
            v18 = *(_DWORD *)(v3 + 132);
            v19 = v18 + WORD1(a3);
            if ( ~WORD1(a3) < v18 )
              v19 = v11;
            *(_DWORD *)(v3 + 132) = v19;
            RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v12);
          }
          if ( !WORD2(a3) )
          {
LABEL_17:
            PopReleaseRwLock(v3 + 432);
            return;
          }
          v15 = *(_DWORD *)(v3 + 136);
          if ( ~WORD2(a3) >= v15 )
            v11 = v15 + WORD2(a3);
          *(_DWORD *)(v3 + 136) = v11;
          v16 = (unsigned int *)(v3 + 336);
          TimelineBitmapTime = v12;
LABEL_16:
          RtlTimelineBitmapUpdate(v16, TimelineBitmapTime);
          goto LABEL_17;
        }
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 112),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v28 = KeQueryTimelineBitmapTime();
        v29 = *(_WORD *)(v3 + 464);
        v30 = v28;
        v26 = (unsigned int *)(v3 + 312);
        if ( v4 )
        {
          *(_WORD *)(v3 + 464) = v29 | 2;
          v27 = v28;
          goto LABEL_32;
        }
        *(_WORD *)(v3 + 464) = v29 & 0xFFFD;
        v31 = v28;
      }
      else
      {
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 104),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v23 = KeQueryTimelineBitmapTime();
        v25 = *(_WORD *)(v3 + 464);
        v26 = (unsigned int *)(v3 + 304);
        if ( v4 )
        {
          v27 = v23;
          *(_WORD *)(v3 + 464) = v25 | 1;
LABEL_32:
          RtlTimelineBitmapUpdate(v26, v27);
LABEL_33:
          PopEtEnergyContextProcessStateUpdate(a1);
          goto LABEL_17;
        }
        v31 = v23;
        *(_WORD *)(v3 + 464) = v25 & 0xFFFE;
        v30 = v23;
      }
      RtlTimelineBitmapUpdateRange((__int64 *)v26, v31 - (v24 >> 12), v30);
      goto LABEL_33;
    }
    if ( a2 <= 11 )
    {
      v32 = v4 == 0;
      v33 = 360LL;
      v34 = !v32;
      if ( a2 != 11 )
        v33 = 352LL;
      v35 = (unsigned int *)(v3 + v33);
      v36 = 400LL;
      if ( a2 != 11 )
        v36 = 392LL;
      RtlStateDurationUpdate(
        (unsigned __int64 *)(v3 + v36),
        !v32,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v37 = KeQueryTimelineBitmapTime();
      TimelineBitmapTime = v37;
      v16 = v35;
      if ( v34 )
        goto LABEL_16;
      v39 = v37 - (v38 >> 12);
    }
    else
    {
      if ( a2 == 13 )
      {
        ++*(_DWORD *)(v3 + 424);
        TimelineBitmapTime = KeQueryTimelineBitmapTime();
        v16 = (unsigned int *)(v3 + 376);
        goto LABEL_16;
      }
      if ( a2 != 12 )
      {
        if ( a2 == 14 )
          ++*(_DWORD *)(v3 + 428);
        goto LABEL_17;
      }
      v40 = (_QWORD *)(v3 + 408);
      if ( v4 == 3 )
      {
        if ( *(int *)(v3 + 412) < 0 )
          goto LABEL_17;
        v43 = HIDWORD(*v40);
        v44 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *v40;
        if ( v44 > 0x1000 )
          v44 = 4096;
        v45 = -1;
        if ( ~v44 >= (v43 & 0x7FFFFFFFu) )
          v45 = (v43 & 0x7FFFFFFF) + v44;
        HIDWORD(v47) = (v43 ^ v45) & 0x7FFFFFFF ^ v43;
        LODWORD(v47) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *v40 = v47;
        TimelineBitmapTime = KeQueryTimelineBitmapTime();
LABEL_57:
        v16 = (unsigned int *)(v3 + 368);
        goto LABEL_16;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
        goto LABEL_17;
      v41 = *(_DWORD *)(v3 + 472);
      if ( v4 == 1 )
      {
        *(_DWORD *)(v3 + 472) = ++v41;
        if ( v41 > 1 )
          goto LABEL_17;
      }
      else if ( v41 )
      {
        *(_DWORD *)(v3 + 472) = --v41;
        if ( v41 )
          goto LABEL_17;
      }
      RtlStateDurationUpdate(
        (unsigned __int64 *)(v3 + 408),
        v41 != 0,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v37 = KeQueryTimelineBitmapTime();
      TimelineBitmapTime = v37;
      if ( v41 )
        goto LABEL_57;
      v39 = v37 - (v42 >> 12);
      v16 = (unsigned int *)(v3 + 368);
    }
    RtlTimelineBitmapUpdateRange((__int64 *)v16, v39, v37);
    goto LABEL_17;
  }
}
