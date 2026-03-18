/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C007B880
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001008 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EE3C (VidSchiFreeQueuePacket.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EC80 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001F79E (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0097180 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00B8D3A (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        HANDLE Handle)
{
  unsigned int v8; // r12d
  NTSTATUS v9; // eax
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  __int64 Elements; // rax
  struct _VIDSCH_QUEUE_PACKET **v13; // rdi
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  __int64 v16; // rsi
  struct VIDSCH_HW_QUEUE *v17; // r14
  __int64 v18; // r12
  _DWORD *QueuePacket; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  struct _VIDSCH_QUEUE_PACKET *v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  struct _VIDSCH_QUEUE_PACKET *v28; // rdx
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  PVOID v30; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  char v32; // [rsp+68h] [rbp-60h] BYREF
  int v33; // [rsp+78h] [rbp-50h]
  __int64 v35; // [rsp+D8h] [rbp+10h]
  int v36; // [rsp+E0h] [rbp+18h]

  v8 = a1;
  if ( a3 > 0x41 || !a3 && !a1 )
  {
    v14 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v25, 0x40000LL);
    return v14;
  }
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 0x110) != 0 )
  {
    v10 = 0;
    v30 = Handle;
    v36 = 1;
  }
  else
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v30 = Object;
    v10 = v9;
    v36 = 0;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(1LL, v9);
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      return v10;
    }
  }
  v11 = v8 + a3;
  P = 0LL;
  v33 = 0;
  Elements = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements((__int64 *)&P, v8 + a3);
  v13 = (struct _VIDSCH_QUEUE_PACKET **)Elements;
  v14 = -1073741801;
  if ( !Elements )
  {
    WdLogSingleEntry0(3LL);
    goto LABEL_23;
  }
  v15 = 0;
  if ( !v11 )
  {
LABEL_22:
    v14 = v10;
    goto LABEL_23;
  }
  v35 = a2 - Elements;
  v16 = Elements;
  while ( 1 )
  {
    v17 = 0LL;
    if ( v15 >= v8 )
    {
      _mm_lfence();
      v18 = *(_QWORD *)(a4 + 8LL * (v15 - v8));
LABEL_11:
      QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v18, *(_DWORD *)(v18 + 796) == 0);
      goto LABEL_12;
    }
    v18 = 0LL;
    v17 = *(struct VIDSCH_HW_QUEUE **)(v35 + v16);
    if ( !v17 )
      goto LABEL_11;
    QueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(*(_QWORD *)(v35 + v16), 0LL);
LABEL_12:
    *(_QWORD *)v16 = QueuePacket;
    if ( !QueuePacket )
      break;
    *QueuePacket = 895576406;
    *(_DWORD *)(*(_QWORD *)v16 + 48LL) = 5;
    *(_QWORD *)(*(_QWORD *)v16 + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)v16 + 52LL) = 2;
    v20 = *(_QWORD *)v16;
    if ( v17 )
      *(_QWORD *)(v20 + 96) = v17;
    else
      *(_QWORD *)(v20 + 88) = v18;
    *(_QWORD *)(*(_QWORD *)v16 + 104LL) = KeGetCurrentThread();
    *(_QWORD *)(*(_QWORD *)v16 + 72LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v16 + 272LL) ^= (*(_DWORD *)(*(_QWORD *)v16 + 272LL) ^ a5) & 1;
    *(_DWORD *)(*(_QWORD *)v16 + 272LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v16 + 272LL) = *(_DWORD *)(*(_QWORD *)v16 + 272LL) & 0xFFFFFFF7 | (8 * v36);
    *(_QWORD *)(*(_QWORD *)v16 + 536LL) = v30;
    *(_QWORD *)(*(_QWORD *)v16 + 792LL) = 0LL;
    v21 = *(_QWORD *)v16;
    if ( v15 )
    {
      *(_QWORD *)(v21 + 800) = v13[v15 - 1];
      *((_QWORD *)v13[v15 - 1] + 99) = *(_QWORD *)v16;
    }
    else
    {
      *(_QWORD *)(v21 + 800) = 0LL;
    }
    v8 = a1;
    ++v15;
    v16 += 8LL;
    if ( v15 >= v11 )
    {
      v22 = v11;
      do
      {
        v23 = *v13;
        if ( *((_QWORD *)*v13 + 12) )
          VidSchiSubmitCommandPacketToHwQueue(v23);
        else
          VidSchiSubmitCommandPacketToQueue((__int64)v23);
        ++v13;
        --v22;
      }
      while ( v22 );
      goto LABEL_22;
    }
  }
  v14 = -1073741801;
  WdLogSingleEntry2(3LL, -1073741801LL, 10951LL);
  if ( v15 )
  {
    v27 = v15;
    do
    {
      v28 = *v13;
      if ( *v13 )
      {
        if ( *((_QWORD *)v28 + 12) )
          VidSchiFreeQueuePacket(v17, v28);
        else
          VidSchiFreeQueuePacket(v18, (__int64)v28);
      }
      ++v13;
      --v27;
    }
    while ( v27 );
    v14 = -1073741801;
  }
LABEL_23:
  if ( P != &v32 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v14;
}
