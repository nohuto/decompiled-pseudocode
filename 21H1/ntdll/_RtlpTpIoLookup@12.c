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

NTSTATUS __fastcall RtlpTpIoLookup(unsigned __int8 **a1, unsigned int a2, HANDLE FileHandle)
{
  PRTL_SPLAY_LINKS v4; // edi
  NTSTATUS v5; // ebx
  unsigned __int8 *p_LeftChild; // esi
  _RTL_SPLAY_LINKS *RightChild; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 *v11; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v11 = 0;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  ms_exc.registration.TryLevel = 0;
  v4 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      p_LeftChild = (unsigned __int8 *)&v4[-5].LeftChild;
      v11 = (unsigned __int8 *)&v4[-5].LeftChild;
      if ( v4[-5].LeftChild == (_RTL_SPLAY_LINKS *)a2 )
        break;
      if ( v4[-5].LeftChild <= (_RTL_SPLAY_LINKS *)a2 )
      {
        RightChild = v4->RightChild;
        if ( !RightChild )
        {
          v5 = RtlpTpIoAlloc(&v11, a2, FileHandle);
          p_LeftChild = v11;
          if ( !v11 )
            goto LABEL_14;
          v8 = v11 + 56;
          v4->RightChild = (_RTL_SPLAY_LINKS *)(v11 + 56);
          goto LABEL_13;
        }
      }
      else
      {
        RightChild = v4->LeftChild;
        if ( !RightChild )
        {
          v5 = RtlpTpIoAlloc(&v11, a2, FileHandle);
          p_LeftChild = v11;
          if ( !v11 )
            goto LABEL_14;
          v8 = v11 + 56;
          v4->LeftChild = (_RTL_SPLAY_LINKS *)(v11 + 56);
LABEL_13:
          *(_DWORD *)v8 = v4;
          goto LABEL_14;
        }
      }
      v4 = RightChild;
    }
    v5 = TpBindFileToDirect(FileHandle, (int)(p_LeftChild + 4), *((_DWORD *)p_LeftChild + 12));
    if ( v5 >= 0 )
      ++*((_DWORD *)p_LeftChild + 13);
  }
  else
  {
    v5 = RtlpTpIoAlloc(&v11, a2, FileHandle);
    p_LeftChild = v11;
  }
LABEL_14:
  ms_exc.registration.TryLevel = -2;
  if ( p_LeftChild && RtlpTpIoTree != (PRTL_SPLAY_LINKS)(p_LeftChild + 56) )
    RtlpTpIoTree = RtlSplay((PRTL_SPLAY_LINKS)(p_LeftChild + 56));
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = p_LeftChild;
  return v5;
}
