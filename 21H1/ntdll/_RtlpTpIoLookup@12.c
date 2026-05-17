/*
 * XREFs of _RtlpTpIoLookup@12 @ 0x4B385A3D
 * Callers:
 *     _RtlSetIoCompletionCallback@12 @ 0x4B385470 (_RtlSetIoCompletionCallback@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TpBindFileToDirect@12 @ 0x4B2E713D (_TpBindFileToDirect@12.c)
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpTpIoAlloc@12 @ 0x4B3855A8 (_RtlpTpIoAlloc@12.c)
 *     _RtlpTpIoLookup@12 @ 0x4B385A3D (_RtlpTpIoLookup@12.c)
 */

int __fastcall RtlpTpIoLookup(int **a1, unsigned int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int *v6; // esi
  int v7; // eax
  int *v8; // eax
  int *v11; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v11 = 0;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  ms_exc.registration.TryLevel = 0;
  v4 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v6 = (int *)(v4 - 56);
      v11 = (int *)(v4 - 56);
      if ( *(_DWORD *)(v4 - 56) == a2 )
        break;
      if ( *(_DWORD *)(v4 - 56) <= a2 )
      {
        v7 = *(_DWORD *)(v4 + 8);
        if ( !v7 )
        {
          v5 = RtlpTpIoAlloc((int *)&v11, a2, a3);
          v6 = v11;
          if ( !v11 )
            goto LABEL_14;
          v8 = v11 + 14;
          *(_DWORD *)(v4 + 8) = v11 + 14;
          goto LABEL_13;
        }
      }
      else
      {
        v7 = *(_DWORD *)(v4 + 4);
        if ( !v7 )
        {
          v5 = RtlpTpIoAlloc((int *)&v11, a2, a3);
          v6 = v11;
          if ( !v11 )
            goto LABEL_14;
          v8 = v11 + 14;
          *(_DWORD *)(v4 + 4) = v11 + 14;
LABEL_13:
          *v8 = v4;
          goto LABEL_14;
        }
      }
      v4 = v7;
    }
    v5 = TpBindFileToDirect(a3, (int)(v6 + 1), v6[12]);
    if ( v5 >= 0 )
      ++v6[13];
  }
  else
  {
    v5 = RtlpTpIoAlloc((int *)&v11, a2, a3);
    v6 = v11;
  }
LABEL_14:
  ms_exc.registration.TryLevel = -2;
  if ( v6 && (int *)RtlpTpIoTree != v6 + 14 )
    RtlpTpIoTree = (int)RtlSplay(v6 + 14);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v6;
  return v5;
}
