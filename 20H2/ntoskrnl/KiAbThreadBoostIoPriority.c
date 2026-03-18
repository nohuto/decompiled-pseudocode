/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x14035F5D4
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     KiAbThreadInsertList @ 0x140326E40 (KiAbThreadInsertList.c)
 *     PsBoostThreadIoQoS @ 0x14035D3B8 (PsBoostThreadIoQoS.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, _QWORD *a2, int a3, _DWORD *a4)
{
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v10; // ecx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    PsBoostThreadIoQoS(a1, 0LL);
    v8 = 864LL;
  }
  else
  {
    PsBoostThreadIoEx(a1, 0, 0, 0LL);
    v8 = 860LL;
  }
  _InterlockedOr(v12, 0);
  if ( *(_DWORD *)(v8 + a1) )
  {
    v10 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v10 = 1;
    *a4 |= (a3 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(v8 + a1), 1u);
    return v10;
  }
  if ( a3 )
    PsBoostThreadIoQoS(a1, 1LL);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, (_QWORD *)(a1 + 816), v9) )
    KiAbQueueAutoBoostDpc(a2 - 4334);
  return 0;
}
