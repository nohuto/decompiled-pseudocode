/*
 * XREFs of MiCfgInitializeProcess @ 0x1406EF6BC
 * Callers:
 *     MiMapProcessExecutable @ 0x1406EF590 (MiMapProcessExecutable.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14021E7C0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14022C03C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceVad @ 0x14022C1B0 (MiReferenceVad.c)
 *     MiLockVad @ 0x14022E378 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiCommitVadCfgBits @ 0x140627A50 (MiCommitVadCfgBits.c)
 *     MiMapCfgBitMapSection @ 0x1406EE9DC (MiMapCfgBitMapSection.c)
 *     MiReferenceCfgVad @ 0x1406F006C (MiReferenceCfgVad.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rax
  int v5; // r14d
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int16 v12; // cx
  __int16 v13; // dx
  __int64 v14; // r10
  __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 2512) & 1) == 0 )
    return 0LL;
  v20 = 0LL;
  v18 = 0LL;
  if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
  {
    v11 = *(_QWORD *)(a1 + 1408);
    if ( !v11 )
      return 3221225595LL;
    v12 = *(_WORD *)(v11 + 8);
    if ( v12 != 332 && v12 != 452 )
      return 3221225595LL;
  }
  v19 = 0x20000000000LL;
  result = MiMapCfgBitMapSection(a1, qword_140C4CAA0, (__int64)&v20, (int)&v18, (__int64)&v19);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad(CurrentThread, v18, 0LL);
    v4 = *(_QWORD *)(a1 + 1408);
    if ( !v4 || (v13 = *(_WORD *)(v4 + 8), v13 != 332) && v13 != 452 )
    {
LABEL_5:
      v5 = 0;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      v6 = *(_QWORD **)(a1 + 2008);
      v7 = 0LL;
      while ( v6 )
      {
        v7 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v7 )
      {
        if ( (v7[6] & 0x70) == 0x20 )
        {
          MiReferenceVad((__int64)v7);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          MiLockVad((__int64)CurrentThread, (__int64)v7);
          v5 = MiCommitVadCfgBits((__int64)v7, 0LL, 0LL);
          MiUnlockAndDereferenceVad(v7);
          if ( v5 < 0 )
            return (unsigned int)v5;
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        }
        v9 = (_QWORD *)v7[1];
        v10 = v7;
        if ( v9 )
        {
          v7 = (_QWORD *)v7[1];
          for ( i = (_QWORD *)*v9; i; i = (_QWORD *)*i )
            v7 = i;
        }
        else
        {
          while ( 1 )
          {
            v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v7 || (_QWORD *)*v7 == v10 )
              break;
            v10 = v7;
          }
        }
      }
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      return (unsigned int)v5;
    }
    v14 = 0LL;
    v15 = &MiWowSubsystems6432;
    v16 = 0LL;
    while ( v13 != *(_WORD *)v15 )
    {
      v16 = (unsigned int)(v16 + 1);
      v15 = (__int64 *)((char *)v15 + 2);
      if ( (_DWORD)v16 )
        goto LABEL_30;
    }
    v14 = *((_QWORD *)&unk_140C4CA38 + 8 * v16);
LABEL_30:
    v17 = *(_QWORD *)(a1 + 1496);
    v20 = 0LL;
    v18 = 0LL;
    v19 = (2 * (v17 >> 4)) >> 3;
    result = MiMapCfgBitMapSection(a1, v14, (__int64)&v20, (int)&v18, (__int64)&v19);
    if ( (int)result >= 0 )
    {
      MiReferenceCfgVad(CurrentThread, v18, 1LL);
      goto LABEL_5;
    }
  }
  return result;
}
