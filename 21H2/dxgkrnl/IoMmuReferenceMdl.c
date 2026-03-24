/*
 * XREFs of IoMmuReferenceMdl @ 0x1C0057224
 * Callers:
 *     IoMmuMapStagingMdlInternal @ 0x1C00570E0 (IoMmuMapStagingMdlInternal.c)
 *     IoMmuUnmapStagingMdlInternal @ 0x1C0057424 (IoMmuUnmapStagingMdlInternal.c)
 * Callees:
 *     IoMmuUpdatePfn @ 0x1C0057520 (IoMmuUpdatePfn.c)
 */

__int64 __fastcall IoMmuReferenceMdl(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r15
  int updated; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

  v4 = *(unsigned int *)(a2 + 24);
  v8 = 0;
  v9 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  if ( (_DWORD)v4 != *(_DWORD *)(a2 + 16) )
  {
    do
    {
      LOBYTE(v10) = a3;
      v11 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v4);
      updated = IoMmuUpdatePfn(a1, v11, v10, a4);
      v8 = updated;
      if ( updated == -1073741801 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( updated == 259 )
      {
        v14 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(v14 + 8 * v9) = v11;
        v9 = (unsigned int)(v9 + 1);
        if ( (_DWORD)v9 == *(_DWORD *)(a2 + 20) )
          goto LABEL_15;
      }
    }
    while ( (_DWORD)v4 != *(_DWORD *)(a2 + 16) );
    if ( updated < 0 )
    {
      if ( !a3 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v15 + 24) = 437LL;
        WdLogEvent5_WdAssertion(v15);
      }
      if ( (_DWORD)v4 )
      {
        v16 = 0LL;
        do
        {
          if ( (int)IoMmuUpdatePfn(a1, *(_QWORD *)(v16 + *(_QWORD *)a2), 0LL, -1LL) < 0 )
          {
            v19 = WdLogNewEntry5_WdAssertion(v18, v17);
            *(_QWORD *)(v19 + 24) = 444LL;
            WdLogEvent5_WdAssertion(v19);
          }
          v16 += 8LL;
          --v4;
        }
        while ( v4 );
      }
      goto LABEL_19;
    }
LABEL_15:
    if ( (_DWORD)v4 != *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + 20) != (_DWORD)v9 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v20 + 24) = 427LL;
      WdLogEvent5_WdAssertion(v20);
    }
  }
  *(_DWORD *)(a2 + 28) = v9;
  *(_DWORD *)(a2 + 24) = v4;
LABEL_19:
  ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
  return v8;
}
