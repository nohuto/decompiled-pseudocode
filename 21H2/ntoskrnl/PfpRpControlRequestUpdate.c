/*
 * XREFs of PfpRpControlRequestUpdate @ 0x1406B403C
 * Callers:
 *     PfpRpControlRequestPerform @ 0x1406B3D9C (PfpRpControlRequestPerform.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     PfpRpCHashAddEntries @ 0x1406B41D4 (PfpRpCHashAddEntries.c)
 *     PfpRpCHashDeleteEntries @ 0x1406B444C (PfpRpCHashDeleteEntries.c)
 */

__int64 __fastcall PfpRpControlRequestUpdate(__int64 a1, _DWORD *a2)
{
  unsigned int *v3; // rdx
  unsigned int v5; // esi
  _QWORD *v6; // r15
  unsigned int *v7; // r14
  int v8; // ecx
  __int64 v9; // r12
  void *v10; // rcx
  __int64 v11; // rbp
  PEPROCESS v12; // rcx
  __int64 result; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+8h] BYREF

  Process = 0LL;
  v3 = a2 + 6;
  v5 = 0;
  v6 = v3;
  v7 = v3;
  v8 = a2[1];
  v9 = (unsigned int)(v8 + a2[2]);
  if ( (_DWORD)v9 )
  {
    do
    {
      v10 = (void *)v7[1];
      v11 = *v7;
      *v6++ = v11;
      if ( (_DWORD)v10 && PsLookupProcessByProcessId(v10, &Process) >= 0 )
      {
        v12 = Process;
        if ( HIDWORD(Process[1].ActiveProcessors.Bitmap[8]) == (_DWORD)v11 )
        {
          if ( v5 < a2[1] )
            _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x4000u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFFBFFF);
          v12 = Process;
        }
        ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      }
      ++v5;
      v7 += 2;
    }
    while ( v5 < (unsigned int)v9 );
    v8 = a2[1];
    v3 = a2 + 6;
  }
  result = PfpRpCHashAddEntries(a1, a1 + 96, a1 + 120, v3, v8);
  if ( (int)result >= 0 )
  {
    if ( !a2[2] || !*(_DWORD *)(a1 + 112) || (result = PfpRpCHashDeleteEntries(a1, a1 + 96, a1 + 120), (int)result >= 0) )
    {
      PfpRpCHashAddEntries(
        a1,
        a1 + 56,
        a1 + 88,
        (((unsigned __int64)&a2[2 * v9 + 7] + 3) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * (unsigned int)a2[3],
        a2[4]);
      if ( a2[3] && *(_DWORD *)(a1 + 72) )
      {
        result = PfpRpCHashDeleteEntries(a1, a1 + 56, a1 + 88);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
