/*
 * XREFs of MiSwitchToPfns @ 0x140A44AD8
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiInitializeUnusablePfns @ 0x1403B1150 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 *     MiCreateFreePfns @ 0x140A44D50 (MiCreateFreePfns.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  int v10; // eax
  ULONG_PTR v11; // r15
  __int64 v12; // rcx
  __m128i *v13; // rsi
  unsigned __int128 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rbp
  unsigned int v19; // r9d
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  char v22; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  _QWORD *v28; // rbp
  BOOL v29; // r13d
  __int128 v30; // [rsp+40h] [rbp-68h] BYREF
  __int128 v31; // [rsp+50h] [rbp-58h]
  ULONG_PTR v32; // [rsp+60h] [rbp-48h]
  __int64 *v33; // [rsp+B0h] [rbp+8h]
  __int64 *v34; // [rsp+B8h] [rbp+10h]

  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v5 = MmPfnDatabase + 48 * qword_140C528C0;
  if ( !qword_140C528C0 && !*(_WORD *)(v5 + 32) )
  {
    v20 = (unsigned __int8)MiLockPageInline(MmPfnDatabase + 48 * qword_140C528C0, a2, a3, a4);
    *(_QWORD *)(v5 + 40) &= 0xFFFFFFF000000000uLL;
    v21 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v5 + 32) = 0;
    v22 = *(_BYTE *)(v5 + 34) & 0xFD;
    *(_QWORD *)(v5 + 24) = v21 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v5 + 34) = v22 | 5;
    *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v5 + 40) |= 0x4000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v20);
  }
  v6 = (__int64 *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 32);
  v33 = (__int64 *)(a1 + 32);
  v34 = v7;
  if ( v7 != (__int64 *)(a1 + 32) )
  {
    do
    {
      v8 = *((int *)v7 + 4);
      v9 = v7[4];
      if ( (v8 & 0x80000000) != 0LL )
      {
        *((_DWORD *)v7 + 4) = v8 & 0x7FFFFFFF;
        goto LABEL_24;
      }
      if ( (v8 & 0x40000000) != 0
        || (unsigned int)v8 <= 0x18 && (v10 = 16777524, _bittest(&v10, v8))
        || (_DWORD)v8 == 29 && (MiFlags & 0x2000) == 0 )
      {
        MiCreateFreePfns(v7);
        goto LABEL_24;
      }
      v11 = v7[3];
      if ( !v11 )
      {
        if ( !--v9 )
          goto LABEL_24;
        v11 = 1LL;
      }
      if ( (unsigned int)v8 <= 0x22 )
      {
        v12 = 0x5C0800040LL;
        if ( _bittest64(&v12, v8) )
          goto LABEL_23;
      }
      if ( (_DWORD)v8 == 3 )
      {
LABEL_57:
        if ( v11 <= BugCheckParameter3 && v11 + v9 > BugCheckParameter3 + 1 )
          v7[4] = BugCheckParameter3 - v11 + 1;
        goto LABEL_24;
      }
      if ( (_DWORD)v8 == 22 || (unsigned int)(v8 - 38) <= 2 )
        goto LABEL_23;
      v13 = (__m128i *)(48 * v11 - 0x58000000000LL);
      if ( !v9 )
        goto LABEL_22;
      do
      {
        v14 = RtlCompareMemoryUlong(v13, 48 * v9, 0) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
        if ( !(*((_QWORD *)&v14 + 1) >> 5) )
        {
          if ( (_DWORD)v8 != 29 && (_DWORD)v8 != 36 )
            goto LABEL_19;
          v28 = (_QWORD *)v13->m128i_i64[1];
          if ( (_DWORD)v8 == 29 )
          {
            if ( v28 )
            {
              v29 = 0;
              if ( MiPteInShadowRange(v13->m128i_u64[1]) )
                v29 = MiPteHasShadow() != 0;
              *v28 = 0LL;
              if ( v29 )
                MiWritePteShadow((__int64)v28, 0LL);
              v13->m128i_i64[1] = 0LL;
              v28 = 0LL;
              goto LABEL_54;
            }
LABEL_56:
            MiInitializeUnusablePfns(v13, 1uLL, 0, 0x80u, 0LL, 0LL, 0);
          }
          else
          {
LABEL_54:
            if ( !v28 )
              goto LABEL_56;
            MiMarkPfnVerified((ULONG_PTR)v13, 0);
          }
LABEL_19:
          --v9;
          v15 = 48LL;
          goto LABEL_20;
        }
        v11 = (__int64)v13[0x5800000000LL].m128i_i64 / 48;
        v17 = MiRestrictRangeToNode(v11, *((_QWORD *)&v14 + 1) >> 5);
        v18 = v17;
        if ( (((_DWORD)v8 - 9) & 0xFFFFFFFD) != 0 )
        {
          if ( (_DWORD)v8 == 29 || (v19 = 64, (_DWORD)v8 == 36) )
            v19 = 128;
          MiInitializeUnusablePfns(v13, v17, 0, v19, 0LL, 0LL, 0);
        }
        else
        {
          LODWORD(v31) = 2;
          *((_QWORD *)&v31 + 1) = (__int64)v13[0x5800000000LL].m128i_i64 / 48;
          v32 = v17;
          MxCreateFreePfns(&v30);
        }
        v9 -= v18;
        v15 = 48 * v18;
LABEL_20:
        v13 = (__m128i *)((char *)v13 + v15);
      }
      while ( v9 );
      v7 = v34;
LABEL_22:
      v6 = v33;
LABEL_23:
      if ( (_DWORD)v8 == 3 )
        goto LABEL_57;
LABEL_24:
      v7 = (__int64 *)*v7;
      v34 = v7;
    }
    while ( v7 != v6 );
  }
  result = KeFlushTb(3u, 2u);
  MiFlags |= 0x8000000u;
  return result;
}
