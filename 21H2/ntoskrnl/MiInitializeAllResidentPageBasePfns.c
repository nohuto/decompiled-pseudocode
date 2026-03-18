/*
 * XREFs of MiInitializeAllResidentPageBasePfns @ 0x140246160
 * Callers:
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MxCreateFreePfns @ 0x140AF5478 (MxCreateFreePfns.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializeAllResidentPageBasePfns(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // r10
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // di
  char v13; // r9
  char v14; // r8
  unsigned __int64 v15; // r14
  __m128i *i; // rax
  __int64 v17; // r15
  volatile signed __int32 *v18; // rbx
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  bool v26; // zf
  __int128 v28; // [rsp+20h] [rbp-30h] BYREF
  __int128 v29; // [rsp+30h] [rbp-20h] BYREF
  __m128i v30; // [rsp+40h] [rbp-10h] BYREF

  v7 = *a1;
  v8 = a3;
  v28 = xmmword_140C51E30;
  v9 = MiLargePageSizes[a4];
  v30.m128i_i64[0] = xmmword_140C51E50;
  v10 = _mm_srli_si128((__m128i)xmmword_140C51E50, 8).m128i_u64[0];
  v30.m128i_i64[1] = (v10 ^ (v7 << 43)) & 0x1FF80000000000LL ^ v10;
  v30.m128i_i8[4] = (BYTE4(xmmword_140C51E50) ^ ~(_BYTE)a4) & 3 ^ BYTE4(xmmword_140C51E50);
  v29 = xmmword_140C51E40;
  v11 = 48 * a2 - 0x220000000000LL;
  if ( a7 )
  {
    CurrentIrql = 17;
    *((_QWORD *)&v29 + 1) |= 0x8000000000000000uLL;
  }
  else
  {
    if ( (_DWORD)InitializationPhase )
      *((_QWORD *)&v29 + 1) |= 0x8000000000000000uLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  v13 = ((_BYTE)a5 << 6) | v30.m128i_i8[2] & 0x3F;
  v14 = ((_BYTE)a5 << 6) | v30.m128i_i8[2] & 0x3D;
  if ( !a6 )
    *(_QWORD *)&v29 = MiUpdatePageFileHighInPte(v29, 4294967293LL);
  v15 = v11 + 48 * v8;
  LOBYTE(i) = v14 ^ (v13 ^ v14) & 7;
  v30.m128i_i8[2] = (char)i;
  if ( v11 < v15 )
  {
    v17 = 48 * v9;
    v18 = (volatile signed __int32 *)(v11 + 24);
    do
    {
      if ( !a7 && (_DWORD)InitializationPhase )
      {
        a5 = 0;
        while ( _interlockedbittestandset64(v18, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&a5);
          while ( *(__int64 *)v18 < 0 );
        }
      }
      for ( i = (__m128i *)v11; i != (__m128i *)(v18 + 6); i += 3 )
      {
        v19 = _mm_loadu_si128((const __m128i *)&v29);
        *i = _mm_loadu_si128((const __m128i *)&v28);
        v20 = _mm_loadu_si128(&v30);
        i[1] = v19;
        i[2] = v20;
      }
      if ( !a7 && (_DWORD)InitializationPhase )
      {
        LOBYTE(i) = -1;
        _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
      }
      v11 += v17;
      v18 = (volatile signed __int32 *)((char *)v18 + v17);
    }
    while ( v11 < v15 );
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          SchedulerAssist = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    LOBYTE(i) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return (char)i;
}
