/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0237CB8
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C02383C8 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C023853C (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C023A140 (-EnsureServerVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C0242560 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall CreateServerVmBusChannel(
        __int64 a1,
        void *a2,
        struct _DEVICE_OBJECT *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        const struct _UNICODE_STRING *a6,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a7,
        void (*a8)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a9)(struct VMBCHANNEL__ *, unsigned int),
        unsigned int a10,
        struct VMBCHANNEL__ **a11)
{
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  struct VMBCHANNEL__ *v26; // [rsp+20h] [rbp-50h] BYREF
  __int128 v27; // [rsp+30h] [rbp-40h] BYREF
  __int128 v28; // [rsp+40h] [rbp-30h] BYREF
  int v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h]
  char v31; // [rsp+60h] [rbp-10h]

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2135);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2135LL);
  *a11 = 0LL;
  LODWORD(v16) = EnsureServerVmBusInterface();
  if ( (int)v16 < 0 )
    goto LABEL_22;
  v26 = 0LL;
  LOBYTE(v15) = 1;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, struct VMBCHANNEL__ **))qword_1C00B4290)(
                   a3,
                   v15,
                   &v26);
  if ( (int)v16 < 0 )
  {
LABEL_21:
    VmBusInterfaceDereference();
    goto LABEL_22;
  }
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00B4518)(v26, a1);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00B4300)(v26, 0x20000LL);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, void *))qword_1C00B4358)(v26, a2);
  v28 = (__int128)*a4;
  v27 = (__int128)*a5;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int128 *, __int128 *))qword_1C00B4508)(
                   v26,
                   &v28,
                   &v27);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1C00B4310)(
                   v26,
                   a7);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), void (*)(struct VMBCHANNEL__ *, unsigned int)))qword_1C00B4308)(
                   v26,
                   a8,
                   a9);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00B44F0)(v26, 2LL);
  ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1C00B42F0)(v26, a6);
  if ( a10
    && (v18 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, _QWORD, _QWORD))qword_1C00B44F8)(
                v26,
                (unsigned __int16)a10,
                0LL),
        v16 = v18,
        v18 < 0) )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = v16;
    WdLogEvent5_WdError(v21);
  }
  else
  {
    LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B42C0)(v26);
    if ( (int)v16 < 0 )
      goto LABEL_19;
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B4370)(v26);
  }
  if ( (int)v16 >= 0 )
  {
    *a11 = v26;
    goto LABEL_20;
  }
LABEL_19:
  v22 = WdLogNewEntry5_WdError(v17, v15);
  *(_QWORD *)(v22 + 24) = (int)v16;
  WdLogEvent5_WdError(v22);
  ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B4298)(v26);
LABEL_20:
  if ( (int)v16 < 0 )
    goto LABEL_21;
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v15);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v29);
  return (unsigned int)v16;
}
