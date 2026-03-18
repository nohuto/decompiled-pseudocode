/*
 * XREFs of ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0245FA4
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C028F458 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C0290830 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        void **a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        union _LARGE_INTEGER *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  unsigned int HostHandle; // eax
  union _LARGE_INTEGER *v13; // rdi
  unsigned int v14; // r13d
  LONGLONG QuadPart; // rsi
  int v16; // ebx
  unsigned int HostProcess; // eax
  __int64 v18; // rdx
  size_t v19; // r14
  BOOL v20; // ecx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v30; // esi
  __int64 v31; // rax
  struct _MDL *v32; // [rsp+28h] [rbp-48h]
  __int64 v33; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-38h]
  int v35; // [rsp+3Ch] [rbp-34h]
  int v36; // [rsp+40h] [rbp-30h]
  int v37; // [rsp+48h] [rbp-28h]
  unsigned int v38; // [rsp+4Ch] [rbp-24h]
  unsigned __int64 v39; // [rsp+50h] [rbp-20h]
  unsigned int v40; // [rsp+58h] [rbp-18h]
  LONGLONG v41; // [rsp+60h] [rbp-10h]
  int v42; // [rsp+68h] [rbp-8h]

  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  v13 = a7;
  v14 = HostHandle;
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  v16 = *((_DWORD *)a3 + 8);
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v33 = 0LL;
  v19 = *((unsigned int *)a3 + 40);
  v34 = HostProcess;
  v20 = v13 == 0LL;
  v39 = a5;
  v40 = a6;
  v21 = (v19 + 31) & 0xFFFFFFF8;
  v35 = 1;
  v22 = v42 & 0xFFFFFFFE | v20;
  v36 = 1014;
  v37 = v16;
  v38 = v14;
  v41 = QuadPart;
  v42 = v22;
  if ( v21 > 0x20000 || v21 < (unsigned int)v19 )
  {
    v31 = WdLogNewEntry5_WdWarning(v22, v18, 1LL);
    *(_QWORD *)(v31 + 24) = v21;
    WdLogEvent5_WdWarning(v31);
    return 2147483653LL;
  }
  else
  {
    v25 = operator new(v21, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( v25 )
    {
      a6 = (v19 + 31) & 0xFFFFFFF8;
      v30 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
              this,
              (struct DXGKVMB_COMMAND_BASE *)&v33,
              0x40u,
              v25,
              &a6,
              v32);
      if ( v30 >= 0 )
      {
        if ( a6 < v21 )
        {
          v30 = -1073741823;
        }
        else
        {
          v30 = *(_DWORD *)v25;
          if ( (_DWORD)v19 )
            memmove(a3[19], v25 + 3, v19);
          *a8 = v25[2];
          if ( a9 )
            *a9 = v25[1];
        }
      }
      operator delete[](v25);
      return (unsigned int)v30;
    }
    else
    {
      v28 = WdLogNewEntry5_WdLowResource(v24, v23, v26, v27);
      *(_QWORD *)(v28 + 24) = 11680LL;
      WdLogEvent5_WdLowResource(v28);
      return 3221225495LL;
    }
  }
}
