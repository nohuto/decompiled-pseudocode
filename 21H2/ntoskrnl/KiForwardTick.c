/*
 * XREFs of KiForwardTick @ 0x1402CC8D0
 * Callers:
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140269420 (KeCountSetBitsAffinityEx.c)
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 *     KeOrAffinityEx @ 0x1402D0100 (KeOrAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, __int64 a3, char a4, char *a5)
{
  unsigned int v6; // r15d
  __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // dx
  unsigned int v12; // edi
  __int64 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int16 v16; // r15
  __int16 v17; // r14
  unsigned __int16 i; // ax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // edi
  unsigned __int16 v22; // dx
  __int16 *v23; // r9
  unsigned __int16 v24; // r8
  __int64 v25; // r12
  __int64 result; // rax
  unsigned int v27; // r8d
  __int64 v28; // rcx
  char *v29; // rdi
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // cx
  int v32; // ecx
  char v33; // r12
  unsigned __int16 v34; // di
  unsigned int v35; // edx
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  char v40; // cl
  __int128 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v47[43]; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE v48[168]; // [rsp+110h] [rbp+10h] BYREF

  memset(&v47[1], 0, 0xA0uLL);
  v6 = 1;
  if ( PoSkipTickMode == 2 )
    goto LABEL_52;
  v46 = 1310721;
  memset(v47, 0, 0xA4uLL);
  if ( KeNumberNodes )
  {
    v7 = KeNodeBlock;
    v8 = (unsigned __int16)KeNumberNodes;
    do
    {
      v9 = *(unsigned __int16 *)(*v7 + 144);
      v10 = *(_QWORD *)(*v7 + 64);
      if ( (unsigned __int16)v46 <= (unsigned __int16)v9 )
        LOWORD(v46) = v9 + 1;
      *(_QWORD *)&v47[2 * v9 + 1] |= v10;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v11 = 0;
  if ( !(_WORD)v46 )
    goto LABEL_52;
  while ( !*(_QWORD *)&v47[2 * v11 + 1] )
  {
    if ( ++v11 >= (unsigned __int16)v46 )
      goto LABEL_52;
  }
  v12 = (unsigned __int16)v46;
  v13 = (__int64 *)&v47[1];
  v14 = (unsigned __int16)v46;
  do
  {
    v15 = *v13++;
    *(__int64 *)((char *)v13 + a5 - (char *)&v47[1]) = ~v15;
    --v14;
  }
  while ( v14 );
  v16 = HIWORD(v46);
  v17 = HIWORD(v46);
  if ( v12 < HIWORD(v46) )
    memset(&a5[8 * v12 + 8], 0xFFu, 8LL * (HIWORD(v46) - v12));
  *((_DWORD *)a5 + 1) = 0;
  *(_WORD *)a5 = v16;
  *((_WORD *)a5 + 1) = v16;
  memset(v48, 0, sizeof(v48));
  if ( v16 >= (unsigned int)KeActiveProcessors[0] )
    v17 = KeActiveProcessors[0];
  *(_WORD *)a5 = v17;
  for ( i = 0; i < *(_WORD *)a5; *(_QWORD *)&a5[8 * v19 + 8] &= *(_QWORD *)&KeActiveProcessors[4 * v19 + 4] )
    v19 = i++;
  if ( a5 != v48 )
  {
    *((_DWORD *)a5 + 1) = 0;
    *((_WORD *)a5 + 1) = 20;
    if ( i < 0x14u )
    {
      do
      {
        v20 = i++;
        *(_QWORD *)&a5[8 * v20 + 8] = 0LL;
      }
      while ( i < *((_WORD *)a5 + 1) );
    }
  }
  if ( a4 )
    KeOrAffinityEx(a5, &KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v33 = KiLastForwardedHand;
    v46 = 1310721;
    v34 = 0;
    memset(v47, 0, 0xA4uLL);
    do
    {
      LOBYTE(v35) = v33 - 1;
      v36 = qword_140CFD7A8[2 * v34];
      do
      {
        v35 = (unsigned __int8)(v35 + 1);
        v37 = *(_QWORD *)(((unsigned __int64)v35 << 6) + v36);
        if ( (unsigned __int16)v46 <= v34 )
          LOWORD(v46) = v34 + 1;
        *(_QWORD *)&v47[2 * v34 + 1] |= v37;
      }
      while ( v35 != (unsigned __int8)a3 );
      ++v34;
    }
    while ( v34 < (unsigned __int16)KiActiveGroups );
    KeOrAffinityEx(a5, &v46, a5);
  }
  v21 = *(unsigned __int16 *)a5;
  v22 = KeActiveProcessors[0];
  if ( (unsigned __int16)v21 < (unsigned int)KeActiveProcessors[0] )
  {
    v23 = KeActiveProcessors;
    v22 = *(_WORD *)a5;
  }
  else
  {
    v23 = (__int16 *)a5;
  }
  v24 = 0;
  if ( !v22 )
  {
LABEL_55:
    if ( v24 < (unsigned __int16)*v23 )
    {
      while ( !*(_QWORD *)&v23[4 * v24 + 4] )
      {
        if ( ++v24 >= (unsigned __int16)*v23 )
          goto LABEL_56;
      }
      goto LABEL_27;
    }
LABEL_56:
    v6 = 1;
LABEL_52:
    v25 = a1;
LABEL_53:
    v29 = 0LL;
    KeCopyAffinityEx(a5, KeActiveProcessors);
    goto LABEL_32;
  }
  while ( *(_QWORD *)&a5[8 * v24 + 8] == *(_QWORD *)&KeActiveProcessors[4 * v24 + 4] )
  {
    if ( ++v24 >= v22 )
      goto LABEL_55;
  }
LABEL_27:
  v25 = a1;
  result = *(unsigned int *)(a1 + 36);
  v27 = KiProcessorIndexToNumberMappingTable[result];
  v28 = v27 >> 6;
  if ( v21 > (unsigned int)v28 )
  {
    result = *(_QWORD *)&a5[8 * v28 + 8] & ~(1LL << (v27 & 0x3F));
    *(_QWORD *)&a5[8 * v28 + 8] = result;
  }
  if ( PoSkipTickMode )
  {
    result = KeCountSetBitsAffinityEx((unsigned __int16 *)a5);
    if ( (unsigned int)result > 3 )
    {
      v6 = 1;
      goto LABEL_53;
    }
  }
  v6 = 0;
  v29 = a5;
  v30 = 0;
  if ( !*(_WORD *)a5 )
    goto LABEL_39;
  while ( 1 )
  {
    result = v30;
    if ( *(_QWORD *)&a5[8 * v30 + 8] )
      break;
    if ( ++v30 >= *(_WORD *)a5 )
      goto LABEL_39;
  }
LABEL_32:
  v45 = 0LL;
  v44 = 0LL;
  if ( v6 )
  {
    LODWORD(v44) = 4;
  }
  else
  {
    if ( !v29 || (v31 = 0, !*(_WORD *)v29) )
    {
LABEL_65:
      v32 = -1073741811;
LABEL_66:
      KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v32, v6);
    }
    while ( !*(_QWORD *)&v29[8 * v31 + 8] )
    {
      if ( ++v31 >= *(_WORD *)v29 )
        goto LABEL_65;
    }
    LODWORD(v44) = 2;
    *((_QWORD *)&v44 + 1) = v29;
  }
  v32 = HalpInterruptSendIpi(&v44, 0xD2u);
  if ( v32 < 0 )
    goto LABEL_66;
  result = a3;
  KiLastForwardedHand = a3;
LABEL_39:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v38 = (unsigned int)KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlot = KiPollSlotNext;
    KiPollSlotNext = result;
    if ( (unsigned int)result >= a2 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v38 != *(_DWORD *)(v25 + 36) )
    {
      v39 = (unsigned int)KiProcessorIndexToNumberMappingTable[v38];
      v40 = v39 & 0x3F;
      result = v39 >> 6;
      if ( ((*(_QWORD *)&a5[8 * result + 8] >> v40) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(v25 + 36);
    }
  }
  return result;
}
