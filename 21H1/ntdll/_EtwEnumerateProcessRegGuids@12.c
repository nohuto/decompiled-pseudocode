/*
 * XREFs of _EtwEnumerateProcessRegGuids@12 @ 0x4B3802E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _EtwpGetNextRegistration@4 @ 0x4B2EF857 (_EtwpGetNextRegistration@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _EtwEnumerateProcessRegGuids@12 @ 0x4B3802E0 (_EtwEnumerateProcessRegGuids@12.c)
 */

ULONG __cdecl EtwEnumerateProcessRegGuids(PVOID OutBuffer, ULONG OutBufferSize, PULONG ReturnLength)
{
  ULONG v3; // edi
  ULONG v4; // ebx
  unsigned int NextRegistration; // eax
  _RTL_SRWLOCK *v7; // ecx
  ULONG v8; // eax
  ULONG i; // edi
  unsigned int *v10; // edi
  ULONG v11; // esi
  size_t v12; // [esp-4h] [ebp-44h]
  ULONG v13; // [esp+1Ch] [ebp-24h]
  _RTL_SRWLOCK *v14; // [esp+24h] [ebp-1Ch]

  v3 = OutBufferSize >> 4;
  v4 = 0;
  if ( !OutBuffer && OutBufferSize )
    return 87;
  NextRegistration = EtwpGetNextRegistration(0);
  while ( 1 )
  {
    v7 = (_RTL_SRWLOCK *)NextRegistration;
    v14 = (_RTL_SRWLOCK *)NextRegistration;
    if ( !NextRegistration )
      break;
    if ( v4 >= v3 )
    {
      v8 = v3;
      v13 = v3;
    }
    else
    {
      v8 = v4;
      v13 = v4;
    }
    for ( i = 0; i < v8; ++i )
    {
      LODWORD(v12) = 16;
      if ( !memcmp(&v7[3], (char *)OutBuffer + 16 * i, v12) )
      {
        v7 = v14;
        goto LABEL_17;
      }
      v7 = v14;
      v8 = v13;
    }
    if ( v4 < OutBufferSize >> 4 )
    {
      v10 = (unsigned int *)((char *)OutBuffer + 16 * v4);
      *v10++ = v7[3].Value;
      *v10++ = v7[4].Value;
      *v10 = v7[5].Value;
      v10[1] = v7[6].Value;
    }
    ++v4;
LABEL_17:
    NextRegistration = EtwpGetNextRegistration(v7);
    v3 = OutBufferSize >> 4;
  }
  if ( v4 <= v3 )
    v11 = 0;
  else
    v11 = 122;
  *ReturnLength = 16 * v4;
  return v11;
}
