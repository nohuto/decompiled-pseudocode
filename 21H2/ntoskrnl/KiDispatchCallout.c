/*
 * XREFs of KiDispatchCallout @ 0x1402A43F0
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiDispatchCallout(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r10
  unsigned __int8 CurrentIrql; // bl
  _BYTE *v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int64 v12; // r10
  _QWORD *v13; // r9
  char *v14; // rcx
  char v15; // al
  __int64 v16; // r15
  unsigned int v17; // esi
  unsigned int v18; // r11d
  char v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  _DWORD v29[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+68h] [rbp+28h] BYREF
  __int64 v31; // [rsp+70h] [rbp+30h]
  __int64 v32; // [rsp+70h] [rbp+30h]

  KeExitRetpoline();
  v6 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ *a4 ^ retaddr;
  *(_QWORD *)(a1 + 56) = v6 ^ (unsigned __int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  retaddr = 0LL;
  v8 = v29;
  v9 = 16;
  v10 = 16LL;
  v11 = *(_QWORD *)(v6 + 32) ^ *(_QWORD *)(v6 + 64);
  v29[0] = 51251211;
  v29[1] = 201785869;
  v12 = v11 | 0xFFFF800000000000uLL;
  v29[2] = 251986182;
  v29[3] = 150995978;
  v13 = (_QWORD *)v12;
  v31 = __ROR8__(v12, v12 & 0x3F);
  v14 = (char *)v29;
  do
  {
    v15 = *v14++;
    *v8++ = v15 ^ 0xB;
    --v10;
  }
  while ( v10 );
  v16 = v31;
  v17 = 25;
  v18 = 0;
  do
  {
    v19 = ~(unsigned __int8)*v13 & 0x3F;
    *v13 = v12 + (KiWaitAlways ^ _byteswap_uint64(v16 ^ __ROL8__(KiWaitNever ^ *v13, KiWaitNever))) + v18;
    v16 = (v12 + __ROL8__(__ROR8__(v18 ^ (unsigned __int64)(200 - v18), v19) ^ v16, v19)) ^ 0x7E80690F;
    v20 = v9;
    do
    {
      v21 = __ROL8__(*v13, 4);
      *v13 = *((unsigned __int8 *)v29 + (v21 & 0xF)) | v21 & 0xFFFFFFFFFFFFFFF0uLL;
      --v20;
    }
    while ( v20 );
    ++v13;
    if ( ++v18 == 25 )
    {
      if ( *(_QWORD *)v12 != 0x85131481131482ELL )
      {
        *(v13 - 1) ^= *(_QWORD *)v12 ^ 0x85131481131482ELL;
        v17 += *((_DWORD *)v13 - 1);
        *(v13 - 1) ^= *(_QWORD *)v12 ^ 0x85131481131482ELL;
      }
      v9 = 1;
    }
  }
  while ( v18 < v17 );
  v32 = *(_QWORD *)v12 ^ 0x85131481131482ELL;
  *(_DWORD *)v12 = -1390710795;
  *(_DWORD *)v12 ^= 0xBC2A27DB;
  ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v12)(v12, v32, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
