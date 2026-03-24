/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C00D1030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001690 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00076E0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011100 (VidSchiFreeQueuePacket.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0032B4C (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037A90 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C0B4 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00804F0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D367C (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, HANDLE Handle)
{
  int v6; // ebx
  int v8; // edi
  __int64 v9; // r14
  unsigned int v10; // r13d
  struct _VIDSCH_QUEUE_PACKET **v11; // rax
  struct _VIDSCH_QUEUE_PACKET **v12; // rdi
  unsigned int v13; // ebp
  struct _VIDSCH_QUEUE_PACKET **v14; // rsi
  __int64 v15; // r12
  struct VIDSCH_HW_QUEUE *v16; // r15
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v23; // edx
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _VIDSCH_QUEUE_PACKET *v27; // rax
  struct _VIDSCH_QUEUE_PACKET *v28; // rdx
  __int64 v29; // rbx
  struct _VIDSCH_QUEUE_PACKET *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  struct _VIDSCH_QUEUE_PACKET *v33; // rdx
  __int64 v34; // rax
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  PVOID v36; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+40h] [rbp-68h] BYREF
  char v38; // [rsp+48h] [rbp-60h] BYREF
  int v39; // [rsp+58h] [rbp-50h]
  unsigned int v40; // [rsp+B0h] [rbp+8h]
  __int64 v41; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v42; // [rsp+C0h] [rbp+18h]

  v40 = a1;
  v6 = a3;
  v8 = a1;
  if ( (unsigned int)a3 <= 0x41 && ((_DWORD)a3 || (_DWORD)a1) )
  {
    v42 = *((_BYTE *)DXGPROCESS::GetCurrent() + 347);
    if ( (v42 & 0x20) != 0 )
    {
      LODWORD(v9) = 0;
      v36 = Handle;
    }
    else
    {
      Object = 0LL;
      v17 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v9 = v17;
      v36 = Object;
      if ( v17 < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = v9;
        WdLogEvent5_WdAssertion(v21);
        return (unsigned int)v9;
      }
    }
    P = 0LL;
    v10 = v8 + v6;
    v39 = 0;
    v11 = (struct _VIDSCH_QUEUE_PACKET **)NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements(
                                            &P,
                                            v8 + v6);
    v12 = v11;
    if ( v11 )
    {
      v13 = 0;
      if ( !v10 )
        goto LABEL_40;
      v41 = a2 - (_QWORD)v11;
      v14 = v11;
      while ( 1 )
      {
        v15 = 0LL;
        v16 = 0LL;
        if ( v13 >= v40 )
        {
          _mm_lfence();
          v15 = *(_QWORD *)(a4 + 8LL * (v13 - v40));
        }
        else
        {
          v16 = *(struct _VIDSCH_QUEUE_PACKET **)((char *)v14 + v41);
        }
        v23 = 0;
        if ( v16 )
        {
          HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v16, 0LL);
        }
        else
        {
          LOBYTE(v23) = *(_DWORD *)(v15 + 796) == 0;
          HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateQueuePacket(v15, v23);
        }
        *v14 = HwQueuePacket;
        if ( !HwQueuePacket )
          break;
        *(_DWORD *)HwQueuePacket = 895576406;
        *((_DWORD *)*v14 + 12) = 5;
        *((_QWORD *)*v14 + 7) = MEMORY[0xFFFFF78000000320];
        *((_DWORD *)*v14 + 13) = 2;
        v27 = *v14;
        if ( v16 )
          *((_QWORD *)v27 + 12) = v16;
        else
          *((_QWORD *)v27 + 11) = v15;
        *((_QWORD *)*v14 + 13) = KeGetCurrentThread();
        *((_QWORD *)*v14 + 9) = 0LL;
        *((_DWORD *)*v14 + 68) ^= (*((_DWORD *)*v14 + 68) ^ a5) & 1;
        *((_DWORD *)*v14 + 68) |= 2u;
        *((_DWORD *)*v14 + 68) ^= (*((_DWORD *)*v14 + 68) ^ (v42 >> 2)) & 8;
        *((_QWORD *)*v14 + 67) = v36;
        *((_QWORD *)*v14 + 99) = 0LL;
        v28 = *v14;
        if ( v13 )
        {
          *((_QWORD *)v28 + 100) = v12[v13 - 1];
          *((_QWORD *)v12[v13 - 1] + 99) = *v14;
        }
        else
        {
          *((_QWORD *)v28 + 100) = 0LL;
        }
        ++v13;
        ++v14;
        if ( v13 >= v10 )
        {
          v29 = v10;
          do
          {
            v30 = *v12;
            if ( *((_QWORD *)*v12 + 12) )
              VidSchiSubmitCommandPacketToHwQueue(v30);
            else
              VidSchiSubmitCommandPacketToQueue((__int64)v30);
            ++v12;
            --v29;
          }
          while ( v29 );
          goto LABEL_40;
        }
      }
      v31 = WdLogNewEntry5_WdWarning(v26, v25);
      *(_QWORD *)(v31 + 24) = -1073741801LL;
      *(_QWORD *)(v31 + 32) = 10689LL;
      WdLogEvent5_WdWarning(v31);
      if ( v13 )
      {
        v32 = v13;
        do
        {
          v33 = *v12;
          if ( *v12 )
          {
            if ( *((_QWORD *)v33 + 12) )
              VidSchiFreeQueuePacket(v16, v33);
            else
              VidSchiFreeQueuePacket(v15, (__int64)v33);
          }
          ++v12;
          --v32;
        }
        while ( v32 );
      }
    }
    LODWORD(v9) = -1073741801;
LABEL_40:
    if ( P != &v38 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v9;
  }
  v34 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
  *(_QWORD *)(v34 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v34);
  return 3221225485LL;
}
