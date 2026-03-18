/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x140229BD8
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x14021ACBC (PsBoostThreadIoQoS.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14024E928 (KiAbThreadInsertList.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // edi
  __int64 v8; // rdx
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
  if ( *(_DWORD *)(a1 + v8) )
  {
    v9 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v9 = 1;
    *a4 |= (v6 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(a1 + v8), 1u);
    return v9;
  }
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1444));
  else
    PsBoostThreadIoEx(a1, 1LL, 0LL, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 816) )
    KiAbQueueAutoBoostDpc((PVOID)(a2 - 35696));
  return 0;
}
