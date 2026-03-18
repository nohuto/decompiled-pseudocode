/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x1406E9350
 * Callers:
 *     ExpWnfDeleteScopeById @ 0x140662C0C (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095821C (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x1406EBB48 (ExpWnfDeleteNameInstanceCallback.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  void *Ptr; // rcx
  void *v9; // rcx

  if ( a2 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    Count = (_QWORD *)P[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *Count )
          {
            v4 = Count;
            Count = (_QWORD *)*Count;
            *v4 = 0LL;
          }
          if ( !Count[1] )
            break;
          v5 = Count;
          Count = (_QWORD *)Count[1];
          v5[1] = 0LL;
        }
        v6 = Count[2];
        ExpWnfDeleteNameInstanceCallback(Count, P);
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 )
          break;
        Count = (_QWORD *)v7;
      }
    }
    P[7].Count = 0LL;
  }
  Ptr = P[8].Ptr;
  if ( Ptr )
    ZwClose(Ptr);
  v9 = P[9].Ptr;
  if ( v9 )
    ZwClose(v9);
  ExFreePoolWithTag(P, 0x20666E57u);
}
