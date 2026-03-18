/*
 * XREFs of ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C02B2A7C
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C02B27FC (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C023A174 (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C023A3D0 (-EnsureServerVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C02425EC (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Initialize(
        DXGVMBUSCHANNEL *this,
        __int64 a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        char a6)
{
  unsigned int v8; // r12d
  struct _KEVENT *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int128 v64; // [rsp+30h] [rbp-50h] BYREF
  __int128 v65; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v66[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v67; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v68)(); // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v69)(); // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v70)(); // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v71)(); // [rsp+78h] [rbp-8h]

  v8 = 2;
  *((_BYTE *)this + 27) = a6 != 0;
  if ( a6 )
  {
    v14 = EnsureServerVmBusInterface((__int64)this, a2);
    v17 = v14;
    if ( v14 >= 0 )
      goto LABEL_9;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v18[4] = 213LL;
LABEL_29:
    v18[3] = v17;
    v18[5] = this;
    WdLogEvent5_WdError(v18);
    goto LABEL_30;
  }
  v9 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 4) = v9;
  if ( !v9 )
  {
    v17 = -1073741801LL;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v18[4] = 199LL;
    goto LABEL_29;
  }
  KeInitializeEvent(v9, NotificationEvent, 0);
  v19 = EnsureClientVmBusInterface(v13, v12);
  v17 = v19;
  if ( v19 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v20, v15);
    v18[4] = 224LL;
    goto LABEL_29;
  }
LABEL_9:
  v21 = (_QWORD *)((char *)this + 16);
  LOBYTE(v15) = a6;
  v22 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, __int64, char *))qword_1C00B3080)(
          g_pDriverObject->DeviceObject,
          v15,
          (char *)this + 16);
  v17 = v22;
  if ( v22 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v25[3] = v17;
    v25[4] = 238LL;
    v25[5] = this;
    WdLogEvent5_WdError(v25);
    VmBusInterfaceDereference(v27, v26);
    goto LABEL_30;
  }
  LOBYTE(v23) = 1;
  ((void (__fastcall *)(_QWORD, __int64))qword_1C00B3138)(*v21, v23);
  v28 = *v21;
  if ( !a6 )
  {
    v39 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD))qword_1C00B3170)(
            v28,
            &DxgkVailVmBusChannelType,
            &DxgkVailVmBusChannel,
            0LL);
    v17 = v39;
    if ( v39 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v18[4] = 311LL;
      goto LABEL_29;
    }
    goto LABEL_24;
  }
  v64 = DxgkVailVmBusChannel;
  v65 = DxgkVailVmBusChannelType;
  v29 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *))qword_1C00B32F8)(v28, &v65, &v64);
  v17 = v29;
  if ( v29 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
    v32[4] = 262LL;
LABEL_17:
    v32[3] = v17;
    v32[5] = this;
    WdLogEvent5_WdError(v32);
    goto LABEL_19;
  }
  if ( a2 )
  {
    v33 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C00B3308)(*v21, a2);
    v17 = v33;
    if ( v33 >= 0 )
      goto LABEL_20;
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v32[4] = 279LL;
    goto LABEL_17;
  }
  v8 = 3;
LABEL_19:
  if ( (int)v17 < 0 )
    goto LABEL_30;
LABEL_20:
  v36 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C00B32E0)(*v21, v8);
  v17 = v36;
  if ( v36 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
    v18[4] = 296LL;
    goto LABEL_29;
  }
LABEL_24:
  if ( a5 )
    ((void (__fastcall *)(_QWORD))qword_1C00B30E0)(*v21);
  if ( (int)v17 >= 0 )
  {
    v42 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C00B30F0)(*v21, 2048LL);
    v17 = v42;
    if ( v42 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
      v18[4] = 329LL;
      goto LABEL_29;
    }
  }
LABEL_30:
  if ( !a6 )
  {
    v45 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C00B3168)(*((_QWORD *)this + 2), 8LL, 8LL);
    v17 = v45;
    if ( v45 >= 0 )
      goto LABEL_34;
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
    v48[3] = v17;
    v48[4] = 343LL;
    v48[5] = this;
    WdLogEvent5_WdError(v48);
  }
  if ( (int)v17 < 0 )
  {
LABEL_46:
    ((void (__fastcall *)(_QWORD))qword_1C00B3088)(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    VmBusInterfaceDereference(v62, v61);
    return (unsigned int)v17;
  }
LABEL_34:
  ((void (__fastcall *)(_QWORD, DXGVMBUSCHANNEL *))qword_1C00B3148)(*((_QWORD *)this + 2), this);
  v49 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD))qword_1C00B30F8)(
          *((_QWORD *)this + 2),
          &ProcessRingPacket,
          0LL);
  v17 = v49;
  if ( v49 < 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
    v52[4] = 359LL;
LABEL_38:
    v52[3] = v17;
    v52[5] = this;
    WdLogEvent5_WdError(v52);
    goto LABEL_46;
  }
  v53 = *((_QWORD *)this + 2);
  v67 = 0LL;
  v68 = ProcessChannelClosed;
  v69 = ProcessChannelSuspended;
  v70 = ProcessChannelStarted;
  v71 = ProcessChannelPostStarted;
  v66[0] = 1;
  v66[1] = 48;
  v54 = ((__int64 (__fastcall *)(__int64, _DWORD *))qword_1C00B3100)(v53, v66);
  v17 = v54;
  if ( v54 < 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
    v52[4] = 382LL;
    goto LABEL_38;
  }
  if ( !a6 )
  {
    v57 = ((__int64 (__fastcall *)(_QWORD))qword_1C00B30B0)(*((_QWORD *)this + 2));
    v17 = v57;
    if ( v57 >= 0 )
    {
LABEL_44:
      *((_BYTE *)this + 24) = 1;
      goto LABEL_45;
    }
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
    v60[3] = v17;
    v60[4] = 394LL;
    v60[5] = this;
    WdLogEvent5_WdError(v60);
  }
  if ( (int)v17 < 0 )
    goto LABEL_46;
  if ( !a6 )
    goto LABEL_44;
LABEL_45:
  if ( (int)v17 < 0 )
    goto LABEL_46;
  return (unsigned int)v17;
}
