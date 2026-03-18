/*
 * XREFs of ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C037C3A8
 * Callers:
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02D6FF0 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C002B798 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B9D0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _EX_RUNDOWN_REF *a3,
        const struct _D3DKMT_SETALLOCATIONPRIORITY *a4)
{
  int v6; // edi
  int v7; // r14d
  size_t v8; // r15
  UINT AllocationCount; // eax
  unsigned int v11; // r12d
  struct DXGKVMB_COMMAND_BASE *v12; // r14
  int v13; // eax
  char *v14; // r13
  D3DKMT_HANDLE hResource; // r8d
  const UINT *pPriorities; // rdx
  ULONG64 v17; // rcx
  const D3DKMT_HANDLE *phAllocationList; // rdx
  __int64 v19; // r14
  struct _MDL *v20; // [rsp+20h] [rbp-1A8h]
  struct _EX_RUNDOWN_REF *v21; // [rsp+30h] [rbp-198h] BYREF
  struct _EX_RUNDOWN_REF *v22; // [rsp+38h] [rbp-190h] BYREF
  struct DXGPROCESS *v23; // [rsp+40h] [rbp-188h]
  struct DXG_VMBUS_CHANNEL_BASE *v24; // [rsp+48h] [rbp-180h]
  void *v25; // [rsp+50h] [rbp-178h]
  _BYTE v26[24]; // [rsp+58h] [rbp-170h] BYREF
  struct DXGKVMB_COMMAND_BASE *v27[2]; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-148h]

  v21 = a3;
  v23 = a2;
  v24 = this;
  v6 = -1073741811;
  v7 = 40;
  v8 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v28 = 0;
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) <= 0x10u )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v27);
    return 0LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount <= 0x20000 )
  {
    if ( a4->hResource )
    {
      v11 = 1;
    }
    else
    {
      if ( !AllocationCount )
        goto LABEL_27;
      v8 = AllocationCount;
      v7 = v8 * 4 + 40;
      v11 = AllocationCount;
    }
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v27, v24, v11 * 4 + v7, 0LL, 0LL, 0LL);
    v12 = v27[0];
    if ( !v27[0] )
    {
      v6 = -1073741801;
LABEL_28:
      WdLogSingleEntry1(3LL, v6);
      goto LABEL_29;
    }
    v13 = *((_DWORD *)a2 + 126);
    *(_QWORD *)v27[0] = 0LL;
    *((_DWORD *)v12 + 2) = v13;
    *((_BYTE *)v12 + 12) = 0;
    *((_DWORD *)v12 + 3) &= 0x1FFu;
    *((_DWORD *)v12 + 4) = 59;
    *((_DWORD *)v12 + 5) = 0;
    *((_DWORD *)v12 + 6) = v21[55].Count;
    *((_DWORD *)v12 + 8) = a4->AllocationCount;
    v14 = (char *)v12 + 40;
    v25 = (char *)v12 + v8 * 4 + 40;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26, v23);
    hResource = a4->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)v23, (DXGRESOURCEREFERENCE *)&v22, hResource);
      if ( !v22 )
      {
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v22);
LABEL_13:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
        goto LABEL_27;
      }
      *((_DWORD *)v12 + 7) = HIDWORD(v22[2].Ptr);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v22);
    }
    else
    {
      phAllocationList = a4->phAllocationList;
      if ( &phAllocationList[v8] < phAllocationList || (unsigned __int64)&phAllocationList[v8] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((char *)v12 + 40, phAllocationList, v8 * 4);
      v19 = 0LL;
      if ( a4->AllocationCount )
      {
        while ( 1 )
        {
          DXGPROCESS::GetAllocationUnsafe((__int64)v23, (DXGALLOCATIONREFERENCE *)&v21, *(_DWORD *)&v14[4 * v19]);
          if ( !v21 )
            break;
          *(_DWORD *)&v14[4 * v19] = HIDWORD(v21[2].Ptr);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= a4->AllocationCount )
            goto LABEL_15;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
        goto LABEL_13;
      }
    }
LABEL_15:
    pPriorities = a4->pPriorities;
    v17 = (ULONG64)&pPriorities[v11];
    if ( v17 < (unsigned __int64)pPriorities || v17 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, pPriorities, v11 * 4);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
    v6 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v24, (unsigned __int8 *)v27[1], v27[0], v28, v20);
  }
LABEL_27:
  if ( v6 < 0 )
    goto LABEL_28;
LABEL_29:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v27);
  return (unsigned int)v6;
}
