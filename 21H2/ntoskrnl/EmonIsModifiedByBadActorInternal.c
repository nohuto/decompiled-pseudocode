/*
 * XREFs of EmonIsModifiedByBadActorInternal @ 0x140520580
 * Callers:
 *     EmonIsModifiedByBadActor @ 0x140520520 (EmonIsModifiedByBadActor.c)
 *     EmonOverflowHandler @ 0x140520920 (EmonOverflowHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonIsModifiedByBadActorInternal(unsigned int a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r9
  unsigned int Number; // ecx
  unsigned int v5; // r10d
  __int64 v7; // rcx
  char v8; // bl
  char v9; // dl
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx

  v3 = a1;
  Number = KeGetPcr()->Prcb.Number;
  v5 = 0;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v7 = HalpCounterStatus;
  else
    v7 = HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
  if ( (unsigned int)v3 < EmonNumberArchCounters )
  {
    v8 = 0;
    v9 = -1;
  }
  else
  {
    v8 = 1;
    v9 = v3 - EmonNumberArchCounters;
  }
  v10 = *(_QWORD *)(v7 + 8 * v3);
  v11 = *(_DWORD *)(v10 + 24);
  if ( !v11 )
  {
    if ( v8 )
    {
      v14 = 8LL << (4 * v9);
      goto LABEL_25;
    }
    v14 = 0x100000LL;
    goto LABEL_23;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v14 = 0LL;
    if ( v8 )
    {
LABEL_25:
      if ( a2 != (v14 | **(unsigned int **)(v10 + 16)) )
        goto LABEL_11;
      if ( (unsigned int)EmonVersion >= 2 )
      {
        if ( (unsigned int)v3 >= EmonNumberArchCounters )
          LOBYTE(v3) = v3 - EmonNumberArchCounters + 32;
        if ( ((1LL << v3) & __readmsr(0x38Fu)) == 0 )
          goto LABEL_11;
      }
LABEL_30:
      *a3 = 0;
      return v5;
    }
LABEL_23:
    v14 |= 0x400000uLL;
    goto LABEL_25;
  }
  if ( v12 == 1 )
    return (unsigned int)-1073740024;
  if ( !a2 )
  {
    if ( (unsigned int)EmonVersion < 2 )
      goto LABEL_30;
    if ( (unsigned int)v3 >= EmonNumberArchCounters )
      LOBYTE(v3) = v3 - EmonNumberArchCounters + 32;
    v13 = (1LL << v3) & __readmsr(0x38Fu);
    if ( !v8 || !v13 )
      goto LABEL_30;
  }
LABEL_11:
  *a3 = 1;
  return v5;
}
