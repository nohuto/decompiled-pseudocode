/*
 * XREFs of _AlpcGetMessageFromCompletionList@8 @ 0x4B33EB10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __aullrem @ 0x4B2F67C0 (__aullrem.c)
 */

PPORT_MESSAGE __cdecl AlpcGetMessageFromCompletionList(
        PVOID CompletionList,
        PALPC_MESSAGE_ATTRIBUTES *MessageAttributes)
{
  unsigned int v2; // ebx
  int v3; // esi
  unsigned __int64 v4; // kr00_8
  unsigned int v5; // ecx
  signed __int64 v6; // rax
  int v7; // ecx
  int v8; // ebx
  signed __int64 v9; // rax
  _PORT_MESSAGE *v10; // esi
  int v11; // edx
  int v13; // [esp+10h] [ebp-1Ch]
  unsigned __int64 v14; // [esp+14h] [ebp-18h]
  char *v15; // [esp+20h] [ebp-Ch]
  int v16; // [esp+24h] [ebp-8h]
  unsigned int v17; // [esp+28h] [ebp-4h]

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CompletionList + 80);
  v17 = *((_DWORD *)CompletionList + 4) >> 2;
  v15 = (char *)CompletionList + *((_DWORD *)CompletionList + 3);
  v4 = _InterlockedCompareExchange64((volatile signed __int64 *)CompletionList + 8, 0LL, 0LL);
  v3 = HIDWORD(v4);
  v2 = v4;
  v16 = v2;
  do
  {
    v5 = v2 & 0xFFFFFF;
    v14 = __PAIR64__(v2, v3);
    if ( (v2 & 0xFFFFFF) == 0xFFFFFF
      || v5 >= v17
      || (HIDWORD(v6) = (__PAIR64__(v3, v2) >> 24) & 0xFFFFFF, HIDWORD(v6) >= v17) )
    {
      v10 = 0;
      goto LABEL_14;
    }
    v13 = *(_DWORD *)&v15[4 * (v2 & 0xFFFFFF)];
    LODWORD(v6) = v16;
    if ( v5 == HIDWORD(v6) )
    {
      v7 = v3 | 0xFFFF;
      v8 = -1;
    }
    else
    {
      v8 = v16 ^ (v16 ^ (((unsigned __int64)v5 + 1) % v17)) & 0xFFFFFF;
      v7 = v3;
    }
    HIDWORD(v6) = v3;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)CompletionList + 8, __SPAIR64__(v7, v8), v6);
    v3 = HIDWORD(v9);
    v2 = v9;
    v16 = v9;
  }
  while ( __PAIR64__(v9, HIDWORD(v9)) != v14 );
  v10 = (_PORT_MESSAGE *)((char *)CompletionList + v13 + *((_DWORD *)CompletionList + 7));
  if ( MessageAttributes )
  {
    if ( *((_DWORD *)CompletionList + 9) )
    {
      v11 = ((_BYTE)v10 + (unsigned __int8)v10->u1.s1.TotalLength) & 3;
      *MessageAttributes = (PALPC_MESSAGE_ATTRIBUTES)((char *)v10
                                                    + (unsigned __int16)v10->u1.s1.TotalLength
                                                    + (v11 != 0 ? 4 - v11 : 0));
    }
    else
    {
      *MessageAttributes = 0;
    }
  }
LABEL_14:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CompletionList + 80);
  return v10;
}
