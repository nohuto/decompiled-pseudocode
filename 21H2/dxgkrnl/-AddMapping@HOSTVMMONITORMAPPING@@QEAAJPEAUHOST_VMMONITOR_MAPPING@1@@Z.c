/*
 * XREFs of ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C0058FA8
 * Callers:
 *     _lambda_369d4bf1093f23b208c35a56a1ae801e_::operator() @ 0x1C0157008 (_lambda_369d4bf1093f23b208c35a56a1ae801e_--operator().c)
 *     _lambda_908f0e8ad16bb8359ff8641d3c1ab648_::operator() @ 0x1C01572B4 (_lambda_908f0e8ad16bb8359ff8641d3c1ab648_--operator().c)
 * Callees:
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00025BC (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___ @ 0x1C00585F4 (HOSTVMMONITORMAPPING--IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___ @ 0x1C0058A38 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x1C005958C (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C01C5974 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02BF51C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C033D3D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::AddMapping(KSPIN_LOCK *this, struct _LUID *a2)
{
  DXGADAPTER *v4; // rbx
  int SourceConnectedToTargetInClientVidPn; // edi
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // r8d
  ADAPTER_DISPLAY **v9; // r14
  DXGADAPTER *v10; // rdx
  __int64 v11; // r9
  __int64 LowPart; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rax
  unsigned int v16; // r12d
  DXGADAPTER *v17; // rbx
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rax
  KSPIN_LOCK v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r8
  int v23; // eax
  char v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-9Ch] BYREF
  HOST_VMMONITOR_MAPPING_ENTRY *v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v30; // [rsp+80h] [rbp-80h]
  char v31; // [rsp+88h] [rbp-78h]
  DXGADAPTER *v32[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v33[5]; // [rsp+A0h] [rbp-60h] BYREF
  char *v34; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  char v36; // [rsp+E8h] [rbp-18h]
  _BYTE v37[144]; // [rsp+F0h] [rbp-10h] BYREF

  v32[0] = 0LL;
  v27 = 0LL;
  v26 = 0;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v32, a2);
  v4 = v32[0];
  if ( !v32[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry3(3LL, a2->LowPart, a2->HighPart, -1073741585LL);
    goto LABEL_48;
  }
  v30 = v32[0];
  v31 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  if ( *((_BYTE *)v4 + 2705) )
    goto LABEL_44;
  if ( *((_DWORD *)v4 + 50) != 1 )
  {
    v4 = v32[0];
LABEL_44:
    v10 = v4;
    goto LABEL_45;
  }
  v9 = (ADAPTER_DISPLAY **)v32[0];
  if ( !*((_QWORD *)v32[0] + 349) )
  {
    v10 = v32[0];
LABEL_45:
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry2(3LL, v10, -1073741585LL);
LABEL_46:
    if ( v31 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    goto LABEL_48;
  }
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v32[0], a2[1].LowPart, &v26);
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741584;
    LowPart = a2[1].LowPart;
    v13 = -1073741584LL;
    v14 = 3LL;
LABEL_9:
    WdLogSingleEntry3(v14, v9, LowPart, v13);
    goto LABEL_46;
  }
  if ( *(_QWORD *)&a2[4] && !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v9, v26) )
  {
    v13 = -1071775738LL;
    SourceConnectedToTargetInClientVidPn = -1071775738;
    LowPart = v26;
    v14 = 4LL;
    goto LABEL_9;
  }
  v15 = (HOST_VMMONITOR_MAPPING_ENTRY *)operator new[](0x60uLL, 0x4B677844u, 64LL, v11);
  if ( !v15 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741801;
    WdLogSingleEntry1(6LL, 346LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v7,
        v6,
        v8,
        0LL,
        1,
        -1,
        L"Failed to allocate new entry",
        346LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_46;
  }
  *((_QWORD *)v15 + 9) = 0LL;
  v27 = v15;
  v34 = (char *)(this + 2);
  v36 = 0;
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  this[3] = (KSPIN_LOCK)KeGetCurrentThread();
  v36 = 1;
  v33[0] = &v28;
  v33[1] = &v25;
  v28 = 0;
  v25 = 0;
  v33[2] = a2;
  HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___((_QWORD **)this, (__int64)v33);
  v16 = v26;
  v17 = v32[0];
  if ( v28 >= 0x11 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741756;
    WdLogSingleEntry2(3LL, *(_QWORD *)&a2[2], -1073741756LL);
  }
  else if ( v25 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741723;
    WdLogSingleEntry4(3LL, v32[0], a2[1].LowPart, *(_QWORD *)&a2[2], -1073741723LL);
  }
  else
  {
    *((_DWORD *)v27 + 16) = v26;
    v18 = v27;
    *((_OWORD *)v27 + 1) = *(_OWORD *)&a2->LowPart;
    *((_OWORD *)v18 + 2) = *(_OWORD *)&a2[2].LowPart;
    *((_OWORD *)v18 + 3) = *(_OWORD *)&a2[4].LowPart;
    v19 = *this;
    v20 = v27;
    if ( *(KSPIN_LOCK **)(*this + 8) != this )
      __fastfail(3u);
    *(_QWORD *)v27 = v19;
    *((_QWORD *)v20 + 1) = this;
    *(_QWORD *)(v19 + 8) = v20;
    *this = (KSPIN_LOCK)v20;
  }
  if ( v36 )
  {
    v36 = 0;
    *((_QWORD *)v34 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v7 = (int)v27;
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    if ( v27 )
      HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v27, v6);
    v27 = 0LL;
  }
  else
  {
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v27 + 9, v17);
  }
  if ( v31 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  if ( SourceConnectedToTargetInClientVidPn >= 0 && *((_QWORD *)v27 + 6) )
  {
    DXGADAPTER::IncrementVSyncWaiter(v17, v16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v17, 0LL);
    SourceConnectedToTargetInClientVidPn = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
LABEL_38:
      HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___(
        (HOST_VMMONITOR_MAPPING_ENTRY *)this,
        (__int64 *)&v27);
      goto LABEL_39;
    }
    v21 = *((_QWORD *)v17 + 350);
    if ( v21 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v21 + 624) + 8LL) + 544LL))(
             *(_QWORD *)(v21 + 632),
             v16) )
      {
        goto LABEL_39;
      }
      LOBYTE(v22) = 1;
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v21 + 624) + 8LL)
                                                                        + 552LL))(
              *(_QWORD *)(v21 + 632),
              4LL,
              v22,
              v16);
    }
    else
    {
      v23 = ADAPTER_DISPLAY::ControlVSyncAdapter(v9[349], v16);
    }
    SourceConnectedToTargetInClientVidPn = v23;
    if ( v23 < 0 )
      goto LABEL_38;
LABEL_39:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
  }
LABEL_48:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    McTemplateK0xqppq_EtwWriteTransfer(
      v7,
      v6,
      v8,
      *a2,
      a2[1].LowPart,
      *(_QWORD *)&a2[4],
      *(_QWORD *)&a2[2],
      SourceConnectedToTargetInClientVidPn);
  DXGADAPTER_REFERENCE::Assign(v32, 0LL);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
