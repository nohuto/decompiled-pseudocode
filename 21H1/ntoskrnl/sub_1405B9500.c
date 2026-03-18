/*
 * XREFs of sub_1405B9500 @ 0x1405B9500
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x1405C6384 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x140706C0C (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_1405B9500(__int64 a1)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r8
  _BYTE *v13; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // r10
  _QWORD *v16; // r8
  char *v17; // rcx
  char v18; // al
  __int64 v19; // r14
  unsigned int v20; // ebx
  unsigned int v21; // r11d
  unsigned int v22; // r9d
  char v23; // di
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  __int64 v31; // rdi
  bool v32; // zf
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // [rsp+30h] [rbp-48h]
  __int64 *ThreadTerminationPort; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v38[4]; // [rsp+48h] [rbp-30h] BYREF
  __int16 Object; // [rsp+58h] [rbp-20h] BYREF
  char v40; // [rsp+5Ah] [rbp-1Eh]
  int v41; // [rsp+5Ch] [rbp-1Ch]
  _QWORD v42[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+58h]
  LARGE_INTEGER Interval; // [rsp+D8h] [rbp+60h] BYREF

  KeExitRetpoline();
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  v2 = (unsigned int)ExGenRandom(1);
  v32 = *(_QWORD *)(a1 + 8) == 1LL;
  Interval.QuadPart = -1200000000LL - v2 % 0x5F5E100;
  if ( v32 )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v42[1] = v42;
    p_Object = (struct _KEVENT *)&Object;
    v40 = 6;
    v42[0] = v42;
    v41 = 0;
  }
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = ExGenRandom(1);
  v8 = v7 ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v9 = v5 ^ v8;
  v10 = v6 ^ v8;
  v35 = ((unsigned __int8)v7 ^ 0xDB) & 1;
  while ( 1 )
  {
    if ( (v10 ^ v8) >> 47 == -1 || (v10 ^ v8) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v9 ^ v8) + 0x18))(
        v9 ^ v8,
        v10 ^ v8,
        *(_QWORD *)((v9 ^ v8) + 0x28),
        *(_QWORD *)((v9 ^ v8) + 0x30));
      v10 = v8 ^ *(_QWORD *)((v9 ^ v8) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v38[0] = 34539786;
    v38[1] = 218497804;
    v38[2] = 235143175;
    v13 = v38;
    v38[3] = 134284555;
    v14 = 16LL;
    v15 = v10 ^ v8 ^ *(_QWORD *)((v9 ^ v8) + 0x40) | 0xFFFF800000000000uLL;
    v16 = (_QWORD *)v15;
    v17 = (char *)v38;
    v43 = __ROR8__(v15, (v10 ^ v8 ^ *(_BYTE *)((v9 ^ v8) + 0x40)) & 0x3F);
    do
    {
      v18 = *v17++;
      *v13++ = v18 ^ 0xA;
      --v14;
    }
    while ( v14 );
    v19 = v43;
    v20 = 16;
    v21 = 25;
    v22 = 0;
    do
    {
      v23 = ~(unsigned __int8)*v16 & 0x3F;
      *v16 = v15 + (KiWaitAlways ^ _byteswap_uint64(v19 ^ __ROL8__(KiWaitNever ^ *v16, KiWaitNever))) + v22;
      v19 = (v15 + __ROL8__(__ROR8__(v22 ^ (unsigned __int64)(200 - v22), v23) ^ v19, v23)) ^ 0x3D406922;
      v24 = v20;
      do
      {
        v25 = __ROL8__(*v16, 4);
        *v16 = *((unsigned __int8 *)v38 + (v25 & 0xF)) | v25 & 0xFFFFFFFFFFFFFFF0uLL;
        --v24;
      }
      while ( v24 );
      ++v16;
      if ( ++v22 == 25 )
      {
        if ( *(_QWORD *)v15 != 0x85131481131482ELL )
        {
          *(v16 - 1) ^= *(_QWORD *)v15 ^ 0x85131481131482ELL;
          v21 += *((_DWORD *)v16 - 1);
          *(v16 - 1) ^= *(_QWORD *)v15 ^ 0x85131481131482ELL;
        }
        v20 = 1;
      }
    }
    while ( v22 < v21 );
    v26 = *(_QWORD *)v15 ^ 0x85131481131482ELL;
    *(_BYTE *)(v15 + 3) = 17;
    *(_BYTE *)(v15 + 2) = 49;
    *(_BYTE *)(v15 + 1) = 72;
    *(_BYTE *)v15 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v15)(v15, v26, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v31 = *ThreadTerminationPort;
    v32 = *ThreadTerminationPort == 0;
    if ( *ThreadTerminationPort > 0 )
    {
      v33 = -v31;
      *ThreadTerminationPort = 0LL;
      v37 = v33;
      (*(void (__fastcall **)(_QWORD))(v33 + 16))(*(_QWORD *)(v33 + 24));
      memset((void *)v33, 0, 0x20uLL);
      memset(&v37, 0, sizeof(v37));
      v31 = *ThreadTerminationPort;
      v32 = *ThreadTerminationPort == 0;
    }
    if ( v32 )
    {
      do
      {
        if ( v35 )
          KeDelayExecutionThread(0, 0, &Interval);
        else
          KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
        v31 = *ThreadTerminationPort;
      }
      while ( !*ThreadTerminationPort );
    }
    v34 = *(_QWORD *)(v31 + 32);
    v9 = v8 ^ v31;
    *ThreadTerminationPort = 0LL;
    v10 = v8 ^ v34;
    if ( v35 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
