/*
 * XREFs of IopIsFileOpenOrSection @ 0x140895A80
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D1310 (MmSectionToSectionObjectPointers.c)
 */

bool __fastcall IopIsFileOpenOrSection(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rsi
  bool v6; // bl
  unsigned __int64 v8; // rcx
  struct _OBJECT_TYPE *v9; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a4;
  v6 = 0;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)];
  if ( v9 == (struct _OBJECT_TYPE *)IoFileObjectType )
  {
    if ( v4 == v8 + 48 )
      v6 = *((_BYTE *)a4 + 8) == 0;
    else
      v6 = *(_QWORD *)(v4 + 24) == *(_QWORD *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x48);
  }
  else if ( v9 == MmSectionObjectType && *(_QWORD *)(v4 + 40) )
  {
    v6 = MmSectionToSectionObjectPointers(v8 + 48) == *(_QWORD *)(v4 + 40);
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v11, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v6;
}
