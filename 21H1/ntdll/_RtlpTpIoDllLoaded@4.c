/*
 * XREFs of _RtlpTpIoDllLoaded@4 @ 0x4B385807
 * Callers:
 *     _RtlpTpIoDllNotification@12 @ 0x4B385910 (_RtlpTpIoDllNotification@12.c)
 * Callees:
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 */

void __thiscall RtlpTpIoDllLoaded(_DWORD *this, int a2)
{
  _UNICODE_STRING *v3; // esi
  PRTL_SPLAY_LINKS v4; // ecx
  _RTL_SPLAY_LINKS **p_LeftChild; // edi
  unsigned int LeftChild; // edx
  _DWORD *BaseAddress; // [esp+10h] [ebp-20h]
  _RTL_SPLAY_LINKS *v8; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v4 = RtlpTpIoTree;
  while ( 1 )
  {
    BaseAddress = &v4->Parent;
    if ( !v4 )
      break;
    p_LeftChild = &v4[-5].LeftChild;
    LeftChild = (unsigned int)v4[-5].LeftChild;
    if ( LeftChild < this[3] )
      goto LABEL_7;
    if ( LeftChild >= this[3] + this[4] )
    {
      if ( LeftChild >= this[3] )
        v4 = v4->LeftChild;
      else
LABEL_7:
        v4 = v4->RightChild;
    }
    else
    {
      v4 = RtlDelete(v4);
      RtlpTpIoTree = v4;
      *BaseAddress = v3;
      v3 = (_UNICODE_STRING *)p_LeftChild;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v3 )
  {
    v8 = *(_RTL_SPLAY_LINKS **)&v3[7].Length;
    if ( *(_DWORD *)&v3[6].Length != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TppRaiseInvalidParameter();
    }
    else
    {
      TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
    RtlFreeAnsiString(v3 + 9);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    v3 = (_UNICODE_STRING *)v8;
  }
}
