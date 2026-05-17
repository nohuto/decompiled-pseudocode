/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x180110640
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x18004563C (EtwpGetNextRegistration.c)
 */

__int64 __fastcall EtwEnumerateProcessRegGuids(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _DWORD *v4; // r14
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 result; // rax
  unsigned __int64 NextRegistration; // rcx
  unsigned int i; // eax

  v4 = (_DWORD *)a3;
  v6 = (unsigned int)a2 >> 4;
  v7 = 0;
  if ( !a1 && (_DWORD)a2 )
    return 87LL;
  NextRegistration = 0LL;
LABEL_5:
  while ( 1 )
  {
    NextRegistration = EtwpGetNextRegistration(NextRegistration, a2, a3, a4);
    if ( !NextRegistration )
      break;
    a4 = v7;
    if ( v7 >= v6 )
      a4 = v6;
    for ( i = 0; i < (unsigned int)a4; ++i )
    {
      a3 = 16LL * i;
      a2 = *(_QWORD *)(NextRegistration + 32) - *(_QWORD *)(a3 + a1);
      if ( !a2 )
        a2 = *(_QWORD *)(NextRegistration + 40) - *(_QWORD *)(a3 + a1 + 8);
      if ( !a2 )
        goto LABEL_5;
    }
    if ( v7 < v6 )
      *(_OWORD *)(16LL * v7 + a1) = *(_OWORD *)(NextRegistration + 32);
    ++v7;
  }
  result = v6 < v7 ? 0x7A : 0;
  *v4 = 16 * v7;
  return result;
}
