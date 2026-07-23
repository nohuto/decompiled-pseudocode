/*
 * XREFs of MiGetPrototypePteRanges @ 0x1403584E8
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x1402F4350 (MiReplacePageOfProtoPool.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiObtainProtoBaseFromNode @ 0x140263AC0 (MiObtainProtoBaseFromNode.c)
 *     RtlSetBits @ 0x1402D6370 (RtlSetBits.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPrototypePteRanges(unsigned __int64 a1, _RTL_BITMAP *a2)
{
  unsigned __int64 v2; // r13
  unsigned int v4; // r12d
  KIRQL v5; // al
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 j; // rbx
  _QWORD *i; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r10
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // edx
  bool v31; // zf
  __int64 NumberToSet; // [rsp+60h] [rbp+40h] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+68h] [rbp+48h]
  __int64 v34; // [rsp+70h] [rbp+50h] BYREF

  BitMapHeader = a2;
  NumberToSet = 0LL;
  v2 = a1 + 4096;
  v4 = 1;
  v5 = ExAcquireSpinLockShared(&dword_140C4C940);
  v6 = (_QWORD *)qword_140C4C938;
  v7 = v5;
  if ( qword_140C4C938 )
  {
    do
    {
      v34 = 0LL;
      v8 = MiObtainProtoBaseFromNode(v6, &v34);
      if ( v9 >= v8 )
      {
        if ( a1 < v8 + 8 * v34 )
          break;
        v6 = (_QWORD *)v6[1];
      }
      else
      {
        v6 = (_QWORD *)*v6;
      }
    }
    while ( v6 );
  }
  v10 = (unsigned __int64)v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v11 = MiObtainProtoBaseFromNode((_QWORD *)v10, &NumberToSet);
      v12 = NumberToSet;
      v13 = v11;
      if ( v11 < a1 )
      {
        if ( v11 + 8 * NumberToSet > a1 )
        {
          v13 = a1;
          v12 = NumberToSet - ((__int64)(a1 - v11) >> 3);
          NumberToSet = v12;
        }
        if ( v13 < a1 )
          break;
      }
      if ( v13 >= v2 )
        break;
      if ( (*(_BYTE *)(v10 + 24) & 7) == 4 )
      {
        v4 = 0;
        break;
      }
      v14 = (__int64)(v13 - a1) >> 3;
      if ( v12 + (unsigned __int64)(unsigned int)v14 > 0x200 )
      {
        LODWORD(v12) = 512 - v14;
        NumberToSet = (unsigned int)(512 - v14);
      }
      RtlSetBits(BitMapHeader, v14, v12);
      if ( (_DWORD)v14 )
      {
        v15 = *(_QWORD *)v10;
        v16 = v10;
        if ( *(_QWORD *)v10 )
        {
          while ( 1 )
          {
            v10 = v15;
            if ( !*(_QWORD *)(v15 + 8) )
              break;
            v15 = *(_QWORD *)(v15 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v10 || *(_QWORD *)(v10 + 8) == v16 )
              break;
            v16 = v10;
          }
        }
        if ( v10 )
          continue;
      }
      break;
    }
    v17 = v6[1];
    if ( v17 )
    {
      for ( i = *(_QWORD **)v17; i; i = (_QWORD *)*i )
        v17 = (unsigned __int64)i;
    }
    else
    {
      for ( j = v6[2]; ; j = *(_QWORD *)(v17 + 16) )
      {
        v17 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v17 || *(_QWORD **)v17 == v6 )
          break;
        v6 = (_QWORD *)v17;
      }
    }
    while ( v17 )
    {
      v21 = MiObtainProtoBaseFromNode((_QWORD *)v17, &NumberToSet);
      if ( v21 >= v2 || v21 < a1 )
        break;
      if ( (*(_BYTE *)(v17 + 24) & 7) == 4 )
      {
        v4 = 0;
        break;
      }
      v22 = NumberToSet;
      v23 = (__int64)(v21 - a1) >> 3;
      v24 = (unsigned int)v23;
      if ( (unsigned __int64)(unsigned int)v23 + NumberToSet > 0x200 )
      {
        v22 = (unsigned int)(512 - v23);
        NumberToSet = v22;
      }
      RtlSetBits(BitMapHeader, v23, v22);
      if ( v24 + v22 == 512 )
        break;
      v20 = *(_QWORD **)(v17 + 8);
      v25 = v17;
      if ( v20 )
      {
        do
        {
          v17 = (unsigned __int64)v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
      }
      else
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v17 || *(_QWORD *)v17 == v25 )
            break;
          v25 = v17;
        }
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4C940);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v31 = (v30 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v4;
}
