/*
 * XREFs of HampConnectionDeliverPayload @ 0x1800082B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall HampConnectionDeliverPayload(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  BOOLEAN result; // al
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+34h] [rbp-34h]
  __int64 v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 v11; // [rsp+44h] [rbp-24h]
  __int64 v12; // [rsp+4Ch] [rbp-1Ch]
  __int64 v13; // [rsp+54h] [rbp-14h]
  int v14; // [rsp+5Ch] [rbp-Ch]

  if ( a3 )
  {
    v5 = a3;
    a3[1] = a2[7];
  }
  else
  {
    v7[1] = a2[7];
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v7[0] = a2[6];
    v5 = v7;
    v8 = 3;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(a1 + 80))(v5);
  if ( !a3 )
  {
    a2[6] = -1LL;
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  return result;
}
