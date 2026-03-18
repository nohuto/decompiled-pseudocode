/*
 * XREFs of ExpFreeHandleTableEntry @ 0x14066735C
 * Callers:
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     ExCreateHandleEx @ 0x140657360 (ExCreateHandleEx.c)
 *     ExDestroyHandle @ 0x1406672F8 (ExDestroyHandle.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpGetHandleExtraInfo @ 0x14094F360 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  char v6; // si
  unsigned int Number; // eax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v13; // [rsp+38h] [rbp+10h]

  HIDWORD(v13) = HIDWORD(a2);
  v5 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v13) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v13, a3, a4);
    if ( HandleExtraInfo )
    {
      *HandleExtraInfo = 0;
      HandleExtraInfo[1] = 0;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v6 = *(_BYTE *)(v5 + 44) & 1;
  if ( v6 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v8 = v5 + ((Number + 1LL) << 6);
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  if ( v6 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 )
      *(_QWORD *)(v9 + 8) = a3;
    else
      *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a3;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(a3 + 8) = v11;
    if ( !v11 )
      *(_QWORD *)(v8 + 16) = a3;
    *(_QWORD *)(v8 + 8) = a3;
  }
  --*(_DWORD *)(v8 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  return KeAbPostRelease(v8);
}
