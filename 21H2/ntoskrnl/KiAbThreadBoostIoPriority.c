/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x140205AD4
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1402FCAD4 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402045F8 (PsBoostThreadIoQoS.c)
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14024652C (KiAbThreadInsertList.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // edi
  __int64 v8; // r10
  unsigned int v9; // ecx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = a3;
  if ( (_DWORD)a3 )
  {
    PsBoostThreadIoQoS(a1, 0);
    v8 = 864LL;
  }
  else
  {
    PsBoostThreadIoEx(a1, 0LL, a3, 0LL);
    v8 = 860LL;
  }
  _InterlockedOr(v11, 0);
  if ( *(_DWORD *)(v8 + a1) )
  {
    v9 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v9 = 1;
    *a4 |= (v6 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(v8 + a1), 1u);
    return v9;
  }
  if ( v6 )
    PsBoostThreadIoQoS(a1, 1);
  else
    PsBoostThreadIoEx(a1, 1LL, 0LL, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 816) )
    KiAbQueueAutoBoostDpc((PVOID)(a2 - 34672));
  return 0;
}
