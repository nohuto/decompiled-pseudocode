/*
 * XREFs of DxgkDeviceIoctl @ 0x1C00434C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A80 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?CheckTokenForVMGroupMembership@@YAJXZ @ 0x1C0042E7C (-CheckTokenForVMGroupMembership@@YAJXZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C005D950 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0113D14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0284248 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C028439C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C02847F8 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B43AC (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DxgkDeviceIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 LowPart; // rsi
  void **UserBuffer; // r12
  __int64 Length; // rcx
  ULONG64 Parameters; // rdx
  ULONG Options; // r13d
  __int64 v10; // rax
  __int64 v11; // rbx
  DXGVIRTUALMACHINE **v12; // rsi
  DxgkCompositionObject *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 *v19; // rax
  __int128 v20; // xmm6
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // al
  int v33; // eax
  DXGVIRTUALMACHINE *v34; // r13
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  bool v42; // r8
  int Handle; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  void *v49[2]; // [rsp+48h] [rbp-70h] BYREF
  ULONG64 v50; // [rsp+58h] [rbp-60h]
  __int64 v51; // [rsp+60h] [rbp-58h]
  _OWORD v52[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v53; // [rsp+D0h] [rbp+18h]
  struct DXGPROCESS *v54; // [rsp+D8h] [rbp+20h] BYREF

  v53 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  UserBuffer = (void **)a2->UserBuffer;
  v49[1] = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LODWORD(v54) = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (ULONG64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v50 = Parameters;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (_DWORD)LowPart != 2310147 )
  {
    v10 = WdLogNewEntry5_WdWarning(Length, Parameters, a3);
    *(_QWORD *)(v10 + 24) = LowPart;
    LODWORD(v11) = -1073741808;
    *(_QWORD *)(v10 + 32) = -1073741808LL;
    WdLogEvent5_WdWarning(v10);
    goto LABEL_45;
  }
  v12 = 0LL;
  v51 = 0LL;
  v13 = 0LL;
  v49[0] = 0LL;
  v52[0] = 0LL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 877LL;
    WdLogEvent5_WdWarning(v17);
    LODWORD(v11) = -1073741637;
    goto LABEL_45;
  }
  if ( Options != 16 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = 884LL;
LABEL_7:
    WdLogEvent5_WdWarning(v18);
    LODWORD(v11) = -1073741306;
    goto LABEL_45;
  }
  if ( (_DWORD)v54 != 8 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = 891LL;
    goto LABEL_7;
  }
  v19 = (__int128 *)v50;
  if ( v50 >= MmUserProbeAddress )
    v19 = (__int128 *)MmUserProbeAddress;
  v20 = *v19;
  v52[0] = *v19;
  ProbeForWrite(UserBuffer, 8uLL, 1u);
  v21 = CheckTokenForVMGroupMembership();
  v11 = v21;
  if ( v21 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v24 + 24) = v11;
    WdLogEvent5_WdError(v24);
  }
  if ( (int)v11 < 0 )
    goto LABEL_43;
  Current = DXGPROCESS::GetCurrent();
  v54 = Current;
  if ( Current )
  {
    LOBYTE(v27) = *((_BYTE *)Current + 347);
    if ( (v27 & 0x10) != 0 )
    {
      if ( (v27 & 0x20) != 0 )
        v12 = (DXGVIRTUALMACHINE **)*((_QWORD *)Current + 62);
      else
        v12 = (DXGVIRTUALMACHINE **)Current;
      LODWORD(v11) = 0;
      goto LABEL_33;
    }
    v31 = WdLogNewEntry5_WdError(v27, v26);
    v11 = -1073741811LL;
    goto LABEL_31;
  }
  v28 = DXGPROCESS::CreateDxgProcess(&v54, 0LL, 0LL, 1u, 0LL, 0LL);
  v11 = v28;
  if ( v28 < 0
    || ((v32 = *((_BYTE *)v54 + 347), (v32 & 0x20) == 0)
      ? (v12 = (DXGVIRTUALMACHINE **)((unsigned __int64)v54 & -(__int64)((v32 & 0x10) != 0)))
      : (v12 = (DXGVIRTUALMACHINE **)*((_QWORD *)v54 + 62)),
        v33 = DXGPROCESSVMWP::InitializeVmwpProcess((DXGPROCESSVMWP *)v12, 0LL, 0LL, 0LL, 0LL, 0, 0LL),
        v11 = v33,
        v33 < 0) )
  {
    v31 = WdLogNewEntry5_WdError(v30, v29);
LABEL_31:
    *(_QWORD *)(v31 + 24) = v11;
    WdLogEvent5_WdError(v31);
    goto LABEL_32;
  }
  v34 = v12[62];
  v35 = DXGVIRTUALMACHINE::InitializeVirtualMachine(v34, 0LL, 1u);
  v11 = v35;
  if ( v35 < 0 )
  {
    v38 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v38 + 24) = v11;
    WdLogEvent5_WdError(v38);
  }
  *(_OWORD *)((char *)v34 + 248) = v20;
LABEL_32:
  if ( (int)v11 >= 0 )
  {
LABEL_33:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v52,
      (DXGVIRTUALMACHINE *)((char *)v12[62] + 64));
    v13 = DXGVIRTUALMACHINE::ReferenceVailObject(v12[62]);
    if ( !v13 )
    {
      LODWORD(v11) = -1073741275;
      v41 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v41 + 24) = -1073741275LL;
      *(_QWORD *)(v41 + 32) = 975LL;
      WdLogEvent5_WdAssertion(v41);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
    if ( (int)v11 >= 0 )
    {
      Handle = DxgkCompositionObject::CreateHandle(v13, 0xC0060000, v42, 1, v49);
      v11 = Handle;
      if ( Handle >= 0 )
      {
        v53 = 8;
      }
      else
      {
        v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
        *(_QWORD *)(v47 + 24) = v11;
        WdLogEvent5_WdWarning(v47);
      }
      if ( (int)v11 >= 0 )
      {
        if ( (unsigned __int64)UserBuffer >= MmUserProbeAddress )
          UserBuffer = (void **)MmUserProbeAddress;
        *UserBuffer = v49[0];
      }
    }
  }
LABEL_43:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_45:
  a2->IoStatus.Information = v53;
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
