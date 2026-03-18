/*
 * XREFs of MiIterateOverPartitions @ 0x14038A2A8
 * Callers:
 *     MiMirrorBlackPhase @ 0x14038A168 (MiMirrorBlackPhase.c)
 *     MiLockAllMemoryLists @ 0x14038A214 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x14038A250 (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x14038A288 (MiResumeFromHibernate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiIterateOverPartitions(void (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // edx
  int v7; // r10d
  char *v8; // r11
  unsigned int v9; // esi
  unsigned int v10; // ecx
  __int64 result; // rax
  char *v12; // rdx
  __int64 i; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int SizeOfBitMap; // edx

  v2 = 0;
  while ( 2 )
  {
    v5 = v2 < qword_140C51F28->SizeOfBitMap ? v2 : 0;
    v6 = qword_140C51F28->SizeOfBitMap - 1;
    v7 = ((__int64)qword_140C51F28->Buffer & 4) != 0LL ? 0x20 : 0;
    v8 = (char *)qword_140C51F28->Buffer - (((__int64)qword_140C51F28->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v9 = v7 + v6;
      v10 = v7 + v5;
      result = v6 - v5 + 1;
      if ( v6 - v5 != -1 )
      {
        v12 = &v8[8 * ((unsigned __int64)v10 >> 6)];
        result = ~*(_QWORD *)v12;
        for ( i = result | ((1LL << (v10 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v12 )
        {
          v12 += 8;
          if ( v12 > &v8[8 * ((unsigned __int64)v9 >> 6)] )
            goto LABEL_16;
        }
        _BitScanForward64((unsigned __int64 *)&result, ~i);
        v14 = result + ((unsigned int)((v12 - v8) >> 3) << 6);
        if ( v14 <= v9 )
          break;
      }
LABEL_16:
      v14 = -1;
LABEL_17:
      if ( !v5 )
        goto LABEL_11;
      SizeOfBitMap = v2 + 1;
      if ( v2 + 1 > qword_140C51F28->SizeOfBitMap )
        SizeOfBitMap = qword_140C51F28->SizeOfBitMap;
      v6 = SizeOfBitMap - 1;
      v5 = 0;
    }
    if ( v14 == -1 )
      goto LABEL_17;
    v14 -= v7;
LABEL_11:
    if ( v14 >= v2 && v14 != -1 )
    {
      v2 = v14 + 1;
      v15 = *(_QWORD *)(qword_140C51F48 + 8LL * v14);
      if ( (*(_DWORD *)(v15 + 4) & 2) != 0 )
        a1(v15, a2);
      continue;
    }
    return result;
  }
}
