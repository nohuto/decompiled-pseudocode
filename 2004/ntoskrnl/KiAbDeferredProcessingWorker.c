/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x140329E40
 * Callers:
 *     <none>
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiAbPropagateBoosts @ 0x140329F14 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        __int64 SystemArgument2)
{
  _QWORD **v4; // rdi
  char *v6; // rbp
  _QWORD *v7; // rcx
  __int64 v8; // r8
  volatile signed __int16 *v9; // rbx
  signed __int32 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = (_QWORD **)(SystemArgument1 + 4334);
  v6 = (char *)(SystemArgument1 + 4335);
  while ( 1 )
  {
    v7 = *v4;
    if ( !*v4 )
    {
      KiAbPropagateBoosts(v6, v4, &v11, SystemArgument2);
      v7 = *v4;
      if ( !*v4 )
        break;
    }
    v9 = (volatile signed __int16 *)(v7 - 102);
    *v4 = (_QWORD *)*v7;
    *v7 = 1LL;
    _InterlockedOr(v10, 0);
    if ( *((_BYTE *)v7 + 55) )
      KiAbProcessThreadLocks((_DWORD)v7 - 816, 0, 0, 1, (__int64)&v11, (__int64)v6, 0LL);
    _InterlockedDecrement16(v9 + 434);
  }
  SystemArgument1[4340] = 0LL;
  KiReadyDeferredReadyList((__int64)SystemArgument1, &v11, v8, SystemArgument2);
}
