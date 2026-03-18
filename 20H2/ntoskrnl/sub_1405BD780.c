/*
 * XREFs of sub_1405BD780 @ 0x1405BD780
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x1405CB384 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x140684078 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_1405BD780(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r8
  _BYTE *v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // r10
  _QWORD *v17; // r8
  char *v18; // rcx
  char v19; // al
  __int64 v20; // r14
  unsigned int v21; // ebx
  unsigned int v22; // r11d
  unsigned int v23; // r9d
  char v24; // di
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 *ThreadTerminationPort; // [rsp+38h] [rbp-40h]
  __int64 v38; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v39[4]; // [rsp+48h] [rbp-30h] BYREF
  __int16 Object; // [rsp+58h] [rbp-20h] BYREF
  char v41; // [rsp+5Ah] [rbp-1Eh]
  int v42; // [rsp+5Ch] [rbp-1Ch]
  _QWORD v43[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+58h]
  LARGE_INTEGER Interval; // [rsp+D8h] [rbp+60h] BYREF

  KeExitRetpoline(a1, a2);
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  v3 = (unsigned int)ExGenRandom(1);
  v33 = *(_QWORD *)(a1 + 8) == 1LL;
  Interval.QuadPart = -1200000000LL - v3 % 0x5F5E100;
  if ( v33 )
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
    v43[1] = v43;
    p_Object = (struct _KEVENT *)&Object;
    v41 = 6;
    v43[0] = v43;
    v42 = 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = ExGenRandom(1);
  v9 = v8 ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v10 = v6 ^ v9;
  v11 = v7 ^ v9;
  v36 = ((unsigned __int8)v8 ^ 0xDB) & 1;
  while ( 1 )
  {
    if ( (v11 ^ v9) >> 47 == -1 || (v11 ^ v9) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v10 ^ v9) + 0x18))(
        v10 ^ v9,
        v11 ^ v9,
        *(_QWORD *)((v10 ^ v9) + 0x28),
        *(_QWORD *)((v10 ^ v9) + 0x30));
      v11 = v9 ^ *(_QWORD *)((v10 ^ v9) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v39[0] = 34539786;
    v39[1] = 218497804;
    v39[2] = 235143175;
    v14 = v39;
    v39[3] = 134284555;
    v15 = 16LL;
    v16 = v11 ^ v9 ^ *(_QWORD *)((v10 ^ v9) + 0x40) | 0xFFFF800000000000uLL;
    v17 = (_QWORD *)v16;
    v18 = (char *)v39;
    v44 = __ROR8__(v16, (v11 ^ v9 ^ *(_BYTE *)((v10 ^ v9) + 0x40)) & 0x3F);
    do
    {
      v19 = *v18++;
      *v14++ = v19 ^ 0xA;
      --v15;
    }
    while ( v15 );
    v20 = v44;
    v21 = 16;
    v22 = 25;
    v23 = 0;
    do
    {
      v24 = ~(unsigned __int8)*v17 & 0x3F;
      *v17 = v16 + (KiWaitAlways ^ _byteswap_uint64(v20 ^ __ROL8__(KiWaitNever ^ *v17, KiWaitNever))) + v23;
      v20 = (v16 + __ROL8__(__ROR8__(v23 ^ (unsigned __int64)(200 - v23), v24) ^ v20, v24)) ^ 0x3D406922;
      v25 = v21;
      do
      {
        v26 = __ROL8__(*v17, 4);
        *v17 = *((unsigned __int8 *)v39 + (v26 & 0xF)) | v26 & 0xFFFFFFFFFFFFFFF0uLL;
        --v25;
      }
      while ( v25 );
      ++v17;
      if ( ++v23 == 25 )
      {
        if ( *(_QWORD *)v16 != 0x85131481131482ELL )
        {
          *(v17 - 1) ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
          v22 += *((_DWORD *)v17 - 1);
          *(v17 - 1) ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
        }
        v21 = 1;
      }
    }
    while ( v23 < v22 );
    v27 = *(_QWORD *)v16 ^ 0x85131481131482ELL;
    *(_BYTE *)(v16 + 3) = 17;
    *(_BYTE *)(v16 + 2) = 49;
    *(_BYTE *)(v16 + 1) = 72;
    *(_BYTE *)v16 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v16)(v16, v27, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v30 = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v33 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v32 = *ThreadTerminationPort;
    v33 = *ThreadTerminationPort == 0;
    if ( *ThreadTerminationPort > 0 )
    {
      v34 = -v32;
      *ThreadTerminationPort = 0LL;
      v38 = v34;
      (*(void (__fastcall **)(_QWORD))(v34 + 16))(*(_QWORD *)(v34 + 24));
      memset((void *)v34, 0, 0x20uLL);
      memset(&v38, 0, sizeof(v38));
      v32 = *ThreadTerminationPort;
      v33 = *ThreadTerminationPort == 0;
    }
    if ( v33 )
    {
      do
      {
        if ( v36 )
          KeDelayExecutionThread(0, 0, &Interval);
        else
          KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
        v32 = *ThreadTerminationPort;
      }
      while ( !*ThreadTerminationPort );
    }
    v35 = *(_QWORD *)(v32 + 32);
    v10 = v9 ^ v32;
    *ThreadTerminationPort = 0LL;
    v11 = v9 ^ v35;
    if ( v36 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
