/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0011BB8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00247E4 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024854 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0035920 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x1C0041F34 (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00EB9C0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00ECEE8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00ED890 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00F3FA0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01187B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0124724 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0163BF4 (DxgkPowerOnOffMonitor.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02075F8 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C0208F20 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C0208F90 (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C020AA90 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211DD4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0214530 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1C0217464 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C021CB68 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C021CFC0 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C0222868 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0223BD0 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022832C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0234F84 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0243E14 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C0250C3C (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AEC4 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025CF50 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C025D088 (DxgkpIsDrtEnabled.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A48A0 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B13D0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C02CFD84 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02D9850 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorDRTTest @ 0x1C02EEA7C (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(ADAPTER_DISPLAY **this, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rdi
  bool v15; // bl
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  char *v34; // r14
  __int64 v35; // r9
  ADAPTER_DISPLAY *v36; // rdx
  char *v37; // rax
  _OWORD *v38; // rcx
  __int64 v39; // r8
  struct DXGPROCESS *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct DXGPROCESS *v43; // rdi
  __int64 v44; // rax
  char *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  DXGDEVICE *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  int updated; // eax
  ADAPTER_DISPLAY *v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  struct _KTHREAD **v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  struct DXGDEVICE *v67; // r15
  __int64 v68; // rax
  ADAPTER_RENDER **v69; // rcx
  __int64 v70; // r9
  struct _EX_RUNDOWN_REF **v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  struct _EX_RUNDOWN_REF *v75; // rbx
  _QWORD *v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // r8
  __int64 v79; // rcx
  bool v80; // bl
  struct _KTHREAD **v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  struct DXGDEVICE *v86; // rax
  __int64 v87; // rax
  struct DXGPROCESS *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  struct DXGDEVICE *v94; // rbx
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  char *v98; // rcx
  __int64 v99; // rax
  UINT v100; // ebx
  __int64 v101; // rax
  struct _D3DDDI_ALLOCATIONLIST *v102; // r15
  unsigned int v103; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rax
  char *v110; // rcx
  struct _KTHREAD **v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  struct _KTHREAD **v114; // r15
  __int64 v115; // rdx
  __int64 v116; // rcx
  struct DXGDEVICE *v117; // r12
  __int64 v118; // rax
  int v119; // r13d
  __int64 v120; // rax
  UINT v121; // edi
  UINT v122; // ebx
  unsigned int HostProcess; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r9
  int v127; // ecx
  unsigned int v128; // r8d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v130; // rdx
  __int64 v131; // rdx
  _QWORD *v132; // r8
  __int64 v133; // rax
  struct _EX_RUNDOWN_REF **v134; // rcx
  struct _EX_RUNDOWN_REF **v135; // rax
  __int64 v136; // rdx
  struct _EX_RUNDOWN_REF *v137; // rax
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v139; // rdx
  __int64 v140; // rdx
  unsigned int v141; // r8d
  int v142; // edx
  ADAPTER_DISPLAY *v143; // rcx
  struct _KTHREAD **v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  void *v150; // rcx
  NTSTATUS v151; // eax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rcx
  int v157; // ecx
  int v158; // ecx
  int v159; // ecx
  struct DXGPROCESS *v160; // rax
  struct _FILE_OBJECT *v161; // r12
  unsigned int v162; // edx
  DXGADAPTERSTOPRESETLOCKSHARED *v163; // rcx
  struct _FILE_OBJECT *v164; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  IRP *v166; // rax
  NTSTATUS Status; // eax
  struct DXGPROCESS *v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  struct CCD_BTL *v171; // rax
  int v172; // ecx
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rcx
  int v176; // ecx
  __int64 v177; // r8
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rcx
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rax
  __int64 v184; // rdx
  int v185; // eax
  __int64 v186; // rcx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  __int64 v188; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v189; // rbx
  __int64 v190; // rdx
  __int64 v191; // r8
  PKEVENT v192; // [rsp+38h] [rbp-990h]
  int v193; // [rsp+50h] [rbp-978h]
  unsigned __int8 v194[4]; // [rsp+54h] [rbp-974h] BYREF
  __int64 v195; // [rsp+58h] [rbp-970h] BYREF
  struct DXGDEVICE *v196; // [rsp+60h] [rbp-968h] BYREF
  struct DXGCONTEXT *v197; // [rsp+68h] [rbp-960h] BYREF
  __int64 v198; // [rsp+70h] [rbp-958h] BYREF
  struct _EX_RUNDOWN_REF *v199; // [rsp+78h] [rbp-950h] BYREF
  __int64 v200; // [rsp+80h] [rbp-948h] BYREF
  _QWORD v201[2]; // [rsp+88h] [rbp-940h] BYREF
  unsigned int v202; // [rsp+98h] [rbp-930h] BYREF
  int v203; // [rsp+9Ch] [rbp-92Ch]
  DXGDEVICE *v204; // [rsp+A0h] [rbp-928h] BYREF
  struct DXGDEVICE *v205; // [rsp+A8h] [rbp-920h] BYREF
  struct DXGDEVICE *v206; // [rsp+B0h] [rbp-918h] BYREF
  __int64 v207; // [rsp+B8h] [rbp-910h] BYREF
  _BYTE v208[8]; // [rsp+C0h] [rbp-908h] BYREF
  __int64 v209; // [rsp+C8h] [rbp-900h]
  char v210; // [rsp+D0h] [rbp-8F8h]
  int v211; // [rsp+D8h] [rbp-8F0h] BYREF
  int v212; // [rsp+DCh] [rbp-8ECh] BYREF
  struct _EX_RUNDOWN_REF *v213; // [rsp+E0h] [rbp-8E8h] BYREF
  struct _EX_RUNDOWN_REF *v214; // [rsp+E8h] [rbp-8E0h] BYREF
  struct _EX_RUNDOWN_REF *v215; // [rsp+F0h] [rbp-8D8h] BYREF
  struct DXGDEVICE *v216; // [rsp+F8h] [rbp-8D0h] BYREF
  _QWORD v217[2]; // [rsp+100h] [rbp-8C8h] BYREF
  _BYTE v218[8]; // [rsp+110h] [rbp-8B8h] BYREF
  ADAPTER_DISPLAY **v219; // [rsp+118h] [rbp-8B0h]
  char v220; // [rsp+120h] [rbp-8A8h]
  struct DXGDEVICE *v221; // [rsp+128h] [rbp-8A0h] BYREF
  struct DXGDEVICE *v222; // [rsp+130h] [rbp-898h] BYREF
  __int64 v223; // [rsp+138h] [rbp-890h]
  ULONG_PTR v224; // [rsp+140h] [rbp-888h]
  PVOID Object; // [rsp+148h] [rbp-880h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+150h] [rbp-878h] BYREF
  struct _FILE_OBJECT *v227; // [rsp+158h] [rbp-870h] BYREF
  _BYTE v228[8]; // [rsp+160h] [rbp-868h] BYREF
  ADAPTER_DISPLAY **v229; // [rsp+168h] [rbp-860h]
  char v230; // [rsp+170h] [rbp-858h]
  _BYTE v231[16]; // [rsp+178h] [rbp-850h] BYREF
  _QWORD v232[2]; // [rsp+188h] [rbp-840h] BYREF
  _BYTE v233[8]; // [rsp+198h] [rbp-830h] BYREF
  __int64 v234; // [rsp+1A0h] [rbp-828h]
  char v235; // [rsp+1A8h] [rbp-820h]
  struct _EX_RUNDOWN_REF *v236; // [rsp+1B0h] [rbp-818h] BYREF
  struct _EX_RUNDOWN_REF *v237; // [rsp+1B8h] [rbp-810h] BYREF
  _DWORD v238[2]; // [rsp+1C0h] [rbp-808h] BYREF
  __int64 *v239; // [rsp+1C8h] [rbp-800h]
  DXGADAPTER *v240[2]; // [rsp+1D0h] [rbp-7F8h] BYREF
  struct DXGADAPTER *v241[2]; // [rsp+1E0h] [rbp-7E8h] BYREF
  __int64 v242; // [rsp+1F0h] [rbp-7D8h] BYREF
  struct _EX_RUNDOWN_REF *v243; // [rsp+1F8h] [rbp-7D0h] BYREF
  struct _EX_RUNDOWN_REF *v244; // [rsp+200h] [rbp-7C8h] BYREF
  _BYTE v245[8]; // [rsp+208h] [rbp-7C0h] BYREF
  ADAPTER_DISPLAY **v246; // [rsp+210h] [rbp-7B8h]
  char v247; // [rsp+218h] [rbp-7B0h]
  _QWORD v248[2]; // [rsp+220h] [rbp-7A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+230h] [rbp-798h] BYREF
  struct _KEVENT Event; // [rsp+240h] [rbp-788h] BYREF
  unsigned __int8 v251[24]; // [rsp+258h] [rbp-770h] BYREF
  unsigned __int8 v252[16]; // [rsp+270h] [rbp-758h] BYREF
  __int128 v253; // [rsp+280h] [rbp-748h]
  __int128 v254; // [rsp+290h] [rbp-738h]
  __int128 v255; // [rsp+2A0h] [rbp-728h]
  __int128 v256; // [rsp+2B0h] [rbp-718h]
  __int128 v257; // [rsp+2C0h] [rbp-708h]
  PVOID P; // [rsp+2D0h] [rbp-6F8h] BYREF
  _BYTE v259[256]; // [rsp+2D8h] [rbp-6F0h] BYREF
  int v260; // [rsp+3D8h] [rbp-5F0h]
  _QWORD v261[54]; // [rsp+3E0h] [rbp-5E8h] BYREF
  struct _D3DKMT_RENDER v262; // [rsp+590h] [rbp-438h] BYREF
  __int64 v263[10]; // [rsp+700h] [rbp-2C8h] BYREF
  _QWORD v264[10]; // [rsp+750h] [rbp-278h] BYREF
  _BYTE v265[160]; // [rsp+7A0h] [rbp-228h] BYREF
  _BYTE v266[160]; // [rsp+840h] [rbp-188h] BYREF
  _BYTE v267[160]; // [rsp+8E0h] [rbp-E8h] BYREF

  memset(v263, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v263[1]);
  v263[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v263[3]) = 45;
  LOBYTE(v263[6]) = -1;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v193 = 0;
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v16 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v16 + 24) = *((unsigned int *)a2 + 1);
      WdLogEvent5_WdWarning(v16);
      LODWORD(v10) = -1073741789;
    }
    else
    {
      v11 = *((_DWORD *)a2 + 3);
      Current = DXGPROCESS::GetCurrent(v7, v6);
      if ( Current )
      {
        v15 = v11 && (unsigned __int8)DxgkpIsDrtEnabled(v13, v12);
        *((_BYTE *)Current + 348) = v15 | *((_BYTE *)Current + 348) & 0xFE;
      }
      LODWORD(v10) = 0;
    }
    return (unsigned int)v10;
  }
  if ( !g_OSTestSigningEnabled && !(unsigned __int8)DxgkpIsDrtEnabled(v7, v6) )
  {
    v18 = WdLogNewEntry5_WdWarning(v7, v6, v17);
    *(_QWORD *)(v18 + 24) = 1410LL;
LABEL_299:
    WdLogEvent5_WdWarning(v18);
    goto LABEL_300;
  }
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v7, v6) + 347) & 0x20) != 0 )
  {
    v22 = *((_DWORD *)a2 + 2);
    if ( v22 != 16 && v22 != 29 )
    {
      v23 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v23 + 24) = 239LL;
      WdLogEvent5_WdEvent(v23);
      return 3221225485LL;
    }
  }
  v25 = *((unsigned int *)a2 + 2);
  if ( (int)v25 > 21 )
  {
    if ( (int)v25 <= 29 )
    {
      if ( (_DWORD)v25 == 29 )
      {
        updated = DrtTestSignalEventCb((struct DXGADAPTER *)this, a2);
        goto LABEL_79;
      }
      v155 = (unsigned int)(v25 - 22);
      if ( !(_DWORD)v155 )
      {
        v168 = DXGPROCESS::GetCurrent(v155, v19);
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v251, v168);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v251, 0LL);
        v171 = CCD_BTL::Global(v170, v169);
        CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v171 + 8));
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v251);
        return (unsigned int)v10;
      }
      v156 = (unsigned int)(v155 - 1);
      if ( !(_DWORD)v156 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x30u )
        {
          v18 = WdLogNewEntry5_WdWarning(v156, v19, v21);
          *(_QWORD *)(v18 + 24) = 304LL;
          goto LABEL_299;
        }
        updated = DxgkpSendTestVmBusCommand((struct DXGADAPTER *)this, a2);
        goto LABEL_79;
      }
      v157 = v156 - 1;
      if ( !v157 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
          return 3221225485LL;
        g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
        return (unsigned int)v10;
      }
      v158 = v157 - 1;
      if ( v158 )
      {
        v159 = v158 - 1;
        if ( v159 )
        {
          v32 = (unsigned int)(v159 - 1);
          if ( !(_DWORD)v32 )
          {
            updated = VailDRTTest((struct DXGADAPTER *const)this, a2);
            goto LABEL_79;
          }
          if ( (_DWORD)v32 != 1 )
            goto LABEL_298;
          if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
            return 3221225485LL;
          v160 = DXGPROCESS::GetCurrent(v32, v19);
          if ( v160 )
          {
            *((_BYTE *)v160 + 348) ^= (*((_BYTE *)v160 + 348) ^ (2 * *((_BYTE *)a2 + 12))) & 2;
            return (unsigned int)v10;
          }
          return 3221225506LL;
        }
        if ( !g_OSTestSigningEnabled )
          return 3221225506LL;
        if ( *((_DWORD *)a2 + 1) < 0x14u )
          return 3221225485LL;
        v161 = 0LL;
        v229 = this;
        v230 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v228);
        if ( *((_DWORD *)this + 50) == 1 )
        {
          v162 = *((_DWORD *)a2 + 3);
          if ( v162 != -1 )
          {
            v194[0] = 0;
            LODWORD(v10) = DmmIsTargetInClientVidPnTopology(this, v162, v194);
            if ( (int)v10 < 0 )
            {
              if ( !v230 )
                return (unsigned int)v10;
              v163 = (DXGADAPTERSTOPRESETLOCKSHARED *)v228;
              goto LABEL_353;
            }
            if ( !v194[0] )
            {
              if ( v230 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v228);
              return 3221225485LL;
            }
          }
          v161 = (struct _FILE_OBJECT *)this[27];
          ObfReferenceObject(v161);
        }
        if ( v230 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v228);
        if ( !v161 )
          goto LABEL_230;
        memset(v264, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v264[1]);
        v264[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v264[3]) = 45;
        LOBYTE(v264[6]) = -1;
        v212 = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
        LODWORD(v10) = DxgkPowerOnOffMonitor(
                         (__int64)v161,
                         1u,
                         (_DWORD *)a2 + 3,
                         &v212,
                         1,
                         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v264);
        v164 = v161;
      }
      else
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
          return 3221225485LL;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        DeviceObject = 0LL;
        v227 = 0LL;
        result = DxgkGetMonitorDeviceObject(
                   (const struct _LUID *)((char *)a2 + 12),
                   *((_DWORD *)a2 + 5),
                   &v227,
                   &DeviceObject);
        if ( (int)result < 0 )
          return result;
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        IoStatusBlock = 0LL;
        v166 = IoBuildDeviceIoControlRequest(
                 0x232433u,
                 AttachedDeviceReference,
                 (char *)a2 + 24,
                 4u,
                 0LL,
                 0,
                 1u,
                 &Event,
                 &IoStatusBlock);
        if ( v166 )
        {
          Status = IofCallDriver(AttachedDeviceReference, v166);
          if ( Status == 259 )
          {
            while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
              ;
            Status = IoStatusBlock.Status;
          }
          LODWORD(v10) = Status;
        }
        else
        {
          LODWORD(v10) = -1073741823;
        }
        ObfDereferenceObject(AttachedDeviceReference);
        v164 = v227;
      }
      ObfDereferenceObject(v164);
      return (unsigned int)v10;
    }
    v172 = v25 - 30;
    if ( v172 )
    {
      v173 = (unsigned int)(v172 - 1);
      if ( !(_DWORD)v173 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          v18 = WdLogNewEntry5_WdWarning(v173, v19, v21);
          *(_QWORD *)(v18 + 24) = 1214LL;
          goto LABEL_299;
        }
        updated = DrtTestUpdateRegistryForNewOverride(
                    *(struct _LUID *)((char *)a2 + 12),
                    *((_DWORD *)a2 + 5),
                    *((_DWORD *)a2 + 6));
        goto LABEL_79;
      }
      v174 = (unsigned int)(v173 - 3);
      if ( !(_DWORD)v174 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          v186 = *((unsigned int *)a2 + 3);
          if ( (unsigned int)(v186 - 1) <= 2 )
          {
            if ( *((int *)this + 643) >= 2600 && this[334] && this[335] )
            {
              DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(v186);
              v189 = DiagnosticInfoArgs;
              if ( DiagnosticInfoArgs )
              {
                LODWORD(v10) = DXGADAPTER::DdiCollectDiagnosticInfo((DXGADAPTER *)this, DiagnosticInfoArgs, v188);
                DxgFreeDiagnosticInfoArgs(v189);
              }
              else
              {
                LODWORD(v10) = -1073741801;
              }
            }
            return (unsigned int)v10;
          }
          v18 = WdLogNewEntry5_WdWarning(v186, v19, v21);
          *(_QWORD *)(v18 + 24) = 1243LL;
        }
        else
        {
          v18 = WdLogNewEntry5_WdWarning(v174, v19, v21);
          *(_QWORD *)(v18 + 24) = 1228LL;
        }
        goto LABEL_299;
      }
      v175 = (unsigned int)(v174 - 1);
      if ( (_DWORD)v175 )
      {
        v176 = v175 - 1;
        if ( v176 )
        {
          v32 = (unsigned int)(v176 - 1);
          if ( !(_DWORD)v32 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x14u )
            {
              v184 = *((_QWORD *)this[334] + 48);
              if ( v184 )
                v185 = *(_DWORD *)(2904LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v184 + 8) + 136);
              else
                v185 = -1;
              *((_DWORD *)a2 + 4) = v185;
              return (unsigned int)v10;
            }
            v18 = WdLogNewEntry5_WdWarning(v32, v19, v21);
            *(_QWORD *)(v18 + 24) = 1386LL;
            goto LABEL_299;
          }
          if ( (_DWORD)v32 == 1 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x30u )
            {
              if ( *((int *)this + 643) < 2700 || !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this) )
              {
                v178 = WdLogNewEntry5_WdError(v32, v19);
                *(_QWORD *)(v178 + 24) = 1281LL;
                WdLogEvent5_WdError(v178);
              }
              if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
              {
                v179 = WdLogNewEntry5_WdError(v32, v19);
                *(_QWORD *)(v179 + 24) = 1289LL;
                WdLogEvent5_WdError(v179);
              }
              v180 = *((unsigned int *)a2 + 3);
              if ( !(_DWORD)v180 )
              {
                *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(this[334])
                                     ? 0xC00000BB
                                     : 0;
                return (unsigned int)v10;
              }
              if ( (_DWORD)v180 == 1 )
              {
                v195 = *((_QWORD *)a2 + 4);
                v238[0] = 1;
                v238[1] = 264;
                v239 = &v195;
                LODWORD(v10) = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                                 this[334],
                                 (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v238,
                                 v177);
                *((_DWORD *)a2 + 11) = v10;
                if ( (int)v10 < 0 )
                {
                  v183 = WdLogNewEntry5_WdError(v182, v181);
                  *(_QWORD *)(v183 + 24) = 1315LL;
                  WdLogEvent5_WdError(v183);
                }
                return (unsigned int)v10;
              }
              v18 = WdLogNewEntry5_WdWarning(v180, v19, v177);
              *(_QWORD *)(v18 + 24) = 1322LL;
            }
            else
            {
              v18 = WdLogNewEntry5_WdWarning(v32, v19, v21);
              *(_QWORD *)(v18 + 24) = 1270LL;
            }
            goto LABEL_299;
          }
          goto LABEL_298;
        }
        updated = ForceGpupTdr(a2);
        goto LABEL_79;
      }
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x18u )
        {
          if ( *((_QWORD *)a2 + 2) )
            LODWORD(v10) = DxgkSetIndirectDisplayRenderAdapterByHandle(*((_DWORD *)a2 + 3), (struct _LUID *)a2 + 2);
          v241[0] = 0LL;
          DXGADAPTER_REFERENCE::AssignByHandle(v241, *((unsigned int *)a2 + 3));
          if ( v241[0] )
          {
            v240[0] = 0LL;
            ADAPTER_DISPLAY::GetPairedRenderAdapter(*((ADAPTER_DISPLAY **)v241[0] + 334), v240, 0LL);
            if ( v240[0] )
              v9 = *(_QWORD *)((char *)v240[0] + 316);
            *((_QWORD *)a2 + 2) = v9;
            DXGADAPTER_REFERENCE::Assign(v240, 0LL);
          }
          DXGADAPTER_REFERENCE::Assign(v241, 0LL);
          return (unsigned int)v10;
        }
        v18 = WdLogNewEntry5_WdWarning(v175, v19, v21);
        *(_QWORD *)(v18 + 24) = 1344LL;
        goto LABEL_299;
      }
      return 3221225506LL;
    }
    if ( (*((_DWORD *)this + 509) & 0x800) == 0 )
      return (unsigned int)v10;
    v246 = this;
    v247 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v245);
    if ( this[335] )
    {
      if ( *((_DWORD *)this + 50) == 1 )
        LODWORD(v10) = ADAPTER_RENDER::EnableIoMmuIsolation(this[335], v190, v191);
      else
        LODWORD(v10) = 0;
    }
    if ( !v247 )
      return (unsigned int)v10;
    v163 = (DXGADAPTERSTOPRESETLOCKSHARED *)v245;
LABEL_353:
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v163);
    return (unsigned int)v10;
  }
  if ( (_DWORD)v25 == 21 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x18u )
    {
      v18 = WdLogNewEntry5_WdWarning(v25, v19, v21);
      *(_QWORD *)(v18 + 24) = 715LL;
      goto LABEL_299;
    }
    v144 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v25, v19);
    if ( !v144 )
    {
      v44 = WdLogNewEntry5_WdError(v146, v145);
      *(_QWORD *)(v44 + 24) = 723LL;
      goto LABEL_46;
    }
    v216 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v200, *((unsigned int *)a2 + 3), v144, &v216);
    if ( v216 )
    {
      v150 = (void *)*((_QWORD *)a2 + 2);
      Object = 0LL;
      v151 = ObReferenceObjectByHandle(v150, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v10 = v151;
      v193 = v151;
      if ( v151 >= 0 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v248, v216);
        KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
        if ( v248[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v248);
      }
      else
      {
        v154 = WdLogNewEntry5_WdError(v153, v152);
        *(_QWORD *)(v154 + 24) = v10;
        WdLogEvent5_WdError(v154);
      }
      if ( !v200 )
        return (unsigned int)v10;
    }
    else
    {
      v149 = WdLogNewEntry5_WdError(v148, v147);
      *(_QWORD *)(v149 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v149);
      LODWORD(v10) = -1073741811;
      v193 = -1073741811;
      if ( !v200 )
        return (unsigned int)v10;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v200 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_64;
    v69 = (ADAPTER_RENDER **)v200;
    goto LABEL_178;
  }
  if ( (int)v25 <= 12 )
  {
    if ( (_DWORD)v25 == 12 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        v55 = this[335];
        if ( v55 )
          *((_BYTE *)v55 + 888) = *((_BYTE *)a2 + 12);
        return (unsigned int)v10;
      }
      v18 = WdLogNewEntry5_WdWarning(v25, v19, v21);
      *(_QWORD *)(v18 + 24) = 393LL;
      goto LABEL_299;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( !v28 )
        {
          if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[11]) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive((__int64)a3, 1LL, 0);
          if ( (int)v10 >= 0 )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          return (unsigned int)v10;
        }
        v29 = (unsigned int)(v28 - 1);
        if ( !(_DWORD)v29 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            v18 = WdLogNewEntry5_WdWarning(v29, v19, v21);
            *(_QWORD *)(v18 + 24) = 315LL;
            goto LABEL_299;
          }
          v53 = *((unsigned int *)a2 + 3);
          if ( (unsigned int)(v53 - 1) > 0x3FF )
          {
            v18 = WdLogNewEntry5_WdWarning(v53, v19, v21);
            *(_QWORD *)(v18 + 24) = 324LL;
            goto LABEL_299;
          }
          g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
          return (unsigned int)v10;
        }
        v30 = (unsigned int)(v29 - 1);
        if ( !(_DWORD)v30 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x14u )
          {
            v18 = WdLogNewEntry5_WdWarning(v30, v19, v21);
            *(_QWORD *)(v18 + 24) = 338LL;
            goto LABEL_299;
          }
          g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
          return (unsigned int)v10;
        }
        v31 = (unsigned int)(v30 - 1);
        if ( (_DWORD)v31 )
        {
          v32 = (unsigned int)(v31 - 4);
          if ( (_DWORD)v32 )
          {
            if ( (_DWORD)v32 == 1 )
            {
              v33 = *((unsigned int *)this + 730);
              if ( (_DWORD)v33 )
              {
                v32 = (unsigned int)(v33 - 1);
                v19 = 344 * v32 + 360;
                if ( *((unsigned int *)a2 + 1) >= v19 )
                {
                  v34 = (char *)a2 + 352;
                  v35 = (unsigned int)v33;
                  do
                  {
                    v36 = this[347];
                    v37 = v34 - 336;
                    v38 = (_OWORD *)((char *)v36 + v9 + 8);
                    v39 = 2LL;
                    do
                    {
                      *(_OWORD *)v37 = *v38;
                      *((_OWORD *)v37 + 1) = v38[1];
                      *((_OWORD *)v37 + 2) = v38[2];
                      *((_OWORD *)v37 + 3) = v38[3];
                      *((_OWORD *)v37 + 4) = v38[4];
                      *((_OWORD *)v37 + 5) = v38[5];
                      *((_OWORD *)v37 + 6) = v38[6];
                      v37 += 128;
                      *((_OWORD *)v37 - 1) = v38[7];
                      v38 += 8;
                      --v39;
                    }
                    while ( v39 );
                    *(_OWORD *)v37 = *v38;
                    *((_OWORD *)v37 + 1) = v38[1];
                    *((_OWORD *)v37 + 2) = v38[2];
                    *((_OWORD *)v37 + 3) = v38[3];
                    *((_OWORD *)v37 + 4) = v38[4];
                    *(_DWORD *)v34 = *(_DWORD *)((char *)v36 + v9 + 344);
                    v34[4] = *((_BYTE *)v36 + v9 + 356);
                    v9 += 520LL;
                    v34 += 344;
                    --v35;
                  }
                  while ( v35 );
                  return (unsigned int)v10;
                }
              }
              v18 = WdLogNewEntry5_WdWarning(v32, v19, v33);
              *(_QWORD *)(v18 + 24) = 374LL;
              goto LABEL_299;
            }
            goto LABEL_298;
          }
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            v18 = WdLogNewEntry5_WdWarning(v32, v19, v21);
            *(_QWORD *)(v18 + 24) = 355LL;
            goto LABEL_299;
          }
          *((_DWORD *)a2 + 3) = *((_DWORD *)this + 730);
          return (unsigned int)v10;
        }
        if ( *((_DWORD *)a2 + 1) < 0x114u )
        {
          v18 = WdLogNewEntry5_WdWarning(v31, v19, v21);
          *(_QWORD *)(v18 + 24) = 412LL;
          goto LABEL_299;
        }
        v40 = DXGPROCESS::GetCurrent(v31, v19);
        v43 = v40;
        if ( !v40 )
        {
          v44 = WdLogNewEntry5_WdError(v42, v41);
          *(_QWORD *)(v44 + 24) = 420LL;
LABEL_46:
          WdLogEvent5_WdError(v44);
LABEL_300:
          LODWORD(v10) = -1073741811;
          return (unsigned int)v10;
        }
        v45 = (char *)v40 + 176;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v45, 0LL);
        *((_QWORD *)v45 + 1) = KeGetCurrentThread();
        v204 = 0LL;
        v46 = *((unsigned int *)a2 + 3);
        if ( (_DWORD)v46 )
        {
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v206, v46, (struct _KTHREAD **)v43, &v204);
          if ( !v204 )
          {
            v48 = WdLogNewEntry5_WdError(v47, v46);
            *(_QWORD *)(v48 + 24) = *((unsigned int *)a2 + 3);
            WdLogEvent5_WdError(v48);
            LODWORD(v10) = -1073741811;
            if ( v206 )
            {
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v206 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v206 + 2), v206);
              LODWORD(v10) = -1073741811;
            }
            goto LABEL_53;
          }
          if ( v206 && _InterlockedExchangeAdd64((volatile signed __int64 *)v206 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v206 + 2), v206);
        }
        if ( !v204 )
        {
          v49 = *((_QWORD *)v43 + 35);
          v50 = v49 ? (DXGDEVICE *)(v49 - 24) : 0LL;
          v204 = v50;
          if ( !v50 )
          {
            v51 = WdLogNewEntry5_WdError(0LL, v46);
            *(_QWORD *)(v51 + 24) = 447LL;
            WdLogEvent5_WdError(v51);
            LODWORD(v10) = -1073741811;
LABEL_53:
            *((_QWORD *)v45 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v45, 0LL);
            KeLeaveCriticalRegion();
            return (unsigned int)v10;
          }
        }
        DXGDEVICE::GetContexts(v204, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
        *((_DWORD *)a2 + 3) = *(_DWORD *)(v52 + 436);
        *((_QWORD *)v45 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v45, 0LL);
        KeLeaveCriticalRegion();
LABEL_64:
        LODWORD(v10) = v193;
        return (unsigned int)v10;
      }
LABEL_77:
      LODWORD(v10) = -1073741637;
      return (unsigned int)v10;
    }
    updated = MonitorDRTTest((DXGADAPTER *)this, a2, (__int64)v263);
LABEL_79:
    LODWORD(v10) = updated;
    return (unsigned int)v10;
  }
  v56 = (unsigned int)(v25 - 14);
  if ( !(_DWORD)v56 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x14u )
    {
      v18 = WdLogNewEntry5_WdWarning(v56, v19, v21);
      *(_QWORD *)(v18 + 24) = 907LL;
      goto LABEL_299;
    }
    v143 = this[27];
    if ( v143 )
    {
      updated = DxgkHandleThermalCoolingDrtEscape(v143, a2);
      goto LABEL_79;
    }
LABEL_230:
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  v57 = v56 - 1;
  if ( !v57 )
  {
    if ( *((_DWORD *)a2 + 1) < 0xA8u )
      return 3221225485LL;
    v141 = *((_DWORD *)a2 + 4);
    if ( v141 >= *((_DWORD *)this + 730) )
      return 3221225485LL;
    v142 = *((_DWORD *)a2 + 3);
    if ( v142 )
    {
      if ( v142 <= 0 )
        return 3221225485LL;
      if ( v142 <= 3 )
      {
        DXGADAPTER::ForcePState((__int64)this, v142, v141, *((_DWORD *)a2 + 6));
      }
      else if ( v142 == 4 )
      {
        *((_DWORD *)a2 + 7) = *((_DWORD *)this + 994);
      }
      else
      {
        if ( v142 != 5 )
          return 3221225485LL;
        DXGADAPTER::QueryPStateEngineData(
          (DXGADAPTER *)this,
          *((_DWORD *)a2 + 5),
          (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
          (unsigned int *)a2 + 4);
      }
    }
    else
    {
      DXGADAPTER::ForcePStateAcrossNodes((DXGADAPTER *)this, *((_DWORD *)a2 + 6));
    }
    return (unsigned int)v10;
  }
  v58 = (unsigned int)(v57 - 1);
  if ( !(_DWORD)v58 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x60u )
    {
      v18 = WdLogNewEntry5_WdWarning(v58, v19, v21);
      *(_QWORD *)(v18 + 24) = 462LL;
      goto LABEL_299;
    }
    v111 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v58, v19);
    v114 = v111;
    if ( !v111 )
    {
      v44 = WdLogNewEntry5_WdError(v113, v112);
      *(_QWORD *)(v44 + 24) = 470LL;
      goto LABEL_46;
    }
    v222 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v198, *((unsigned int *)a2 + 3), v111, &v222);
    v117 = v222;
    if ( !v222 )
    {
      v118 = WdLogNewEntry5_WdError(v116, v115);
      *(_QWORD *)(v118 + 24) = *((unsigned int *)a2 + 3);
LABEL_174:
      WdLogEvent5_WdError(v118);
      LODWORD(v10) = -1073741811;
      v193 = -1073741811;
LABEL_175:
      if ( !v198 )
        return (unsigned int)v10;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v198 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_64;
      v69 = (ADAPTER_RENDER **)v198;
      goto LABEL_178;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
    v119 = 0;
    v203 = 0;
    v224 = 0LL;
    v120 = *(_QWORD *)(*((_QWORD *)v117 + 2) + 16LL);
    v223 = v120;
    if ( *(_BYTE *)(v120 + 209) )
    {
      *(_OWORD *)v252 = *(_OWORD *)a2;
      v253 = *((_OWORD *)a2 + 1);
      v254 = *((_OWORD *)a2 + 2);
      v255 = *((_OWORD *)a2 + 3);
      v256 = *((_OWORD *)a2 + 4);
      v257 = *((_OWORD *)a2 + 5);
      *(_DWORD *)&v252[12] = *((_DWORD *)v117 + 110);
      v121 = *(_DWORD *)&v252[12];
      v122 = *(_DWORD *)(v120 + 4280);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v114);
      LODWORD(v192) = 96;
      if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v223 + 4208),
                  HostProcess,
                  v122,
                  v121,
                  0,
                  D3DKMT_ESCAPE_DRT_TEST,
                  0,
                  (size_t)v192,
                  v252) < 0 )
      {
        v118 = WdLogNewEntry5_WdError(v125, v124);
        *(_QWORD *)(v118 + 24) = 512LL;
        goto LABEL_174;
      }
      v119 = HIDWORD(v254);
      v203 = v255;
      v224 = v257;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v232, v117);
    v234 = *(_QWORD *)(*((_QWORD *)v117 + 2) + 16LL);
    v235 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v233);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v267, (__int64)v117, 0, v126, 0);
    LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v267, 0LL);
    v193 = v10;
    if ( (int)v10 >= 0 )
    {
      memset(v261, 0, 0x1A8uLL);
      HIDWORD(v261[0]) = *((_DWORD *)a2 + 3);
      LODWORD(v261[2]) = 4;
      v261[3] = (char *)a2 + 16;
      v127 = LODWORD(v261[0]) | 0x200;
      LODWORD(v261[0]) |= 0x200u;
      if ( *((_BYTE *)a2 + 60) )
      {
        v127 |= 1u;
        LODWORD(v261[0]) = v127;
      }
      if ( *((_BYTE *)a2 + 65) )
      {
        v127 |= 0x20u;
        LODWORD(v261[0]) = v127;
      }
      if ( *((_BYTE *)a2 + 61) )
      {
        v127 |= 0x400u;
        LODWORD(v261[0]) = v127;
      }
      if ( *((_BYTE *)a2 + 62) )
      {
        v127 |= 0x1000u;
        LODWORD(v261[0]) = v127;
      }
      if ( *((_BYTE *)a2 + 63) )
      {
        v127 |= 0x2000u;
        LODWORD(v261[0]) = v127;
      }
      if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
        LODWORD(v261[0]) = v127 | 0x8000;
      LOBYTE(v261[51]) = *((_BYTE *)a2 + 64);
      LODWORD(v261[48]) = *((_DWORD *)a2 + 14);
      HIDWORD(v261[48]) = *((_DWORD *)a2 + 17);
      HIDWORD(v261[47]) = *((_DWORD *)a2 + 10);
      LODWORD(v261[49]) = *((_DWORD *)a2 + 18);
      v261[50] = *((_QWORD *)a2 + 10);
      LODWORD(v10) = DXGDEVICE::CreateStandardAllocation(
                       v117,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v261,
                       (struct COREDEVICEACCESS *)v267);
      v193 = v10;
      if ( (int)v10 >= 0 )
      {
        v128 = HIDWORD(v261[6]);
        *((_DWORD *)a2 + 11) = HIDWORD(v261[6]);
        *((_QWORD *)a2 + 6) = v261[1];
        if ( (*((_BYTE *)v114 + 347) & 0x20) != 0 )
        {
          v213 = 0LL;
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v114,
                                                        (DXGALLOCATIONREFERENCE *)&v237,
                                                        v128);
          DXGALLOCATIONREFERENCE::MoveAssign(&v213, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v237, v130);
          if ( v213
            && (v132 = (_QWORD *)*((_QWORD *)v117 + 2),
                v131 = *(_QWORD *)(v213[1].Count + 16),
                *(_QWORD *)(v131 + 16) == v132[2]) )
          {
            v133 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v132[80] + 8LL) + 632LL))(
                     v132[81],
                     v213[3].Count,
                     0LL);
          }
          else
          {
            v133 = 0LL;
          }
          *((_QWORD *)a2 + 10) = v133;
          v134 = &v213;
        }
        else
        {
          if ( !*(_BYTE *)(v223 + 209) )
            goto LABEL_184;
          v215 = 0LL;
          v135 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                              (__int64)v114,
                                              (DXGALLOCATIONREFERENCE *)&v244,
                                              v128);
          DXGALLOCATIONREFERENCE::MoveAssign(&v215, v135);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v244, v136);
          v137 = v215;
          if ( v215 )
          {
            LODWORD(v215[12].Count) = v119;
            HIDWORD(v137[12].Ptr) = v119;
            v137[15].Count = v224;
          }
          v214 = 0LL;
          ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                      (__int64)v114,
                                                      (DXGRESOURCEREFERENCE *)&v236,
                                                      *((_DWORD *)a2 + 12));
          DXGRESOURCEREFERENCE::MoveAssign(&v214, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v236, v139);
          if ( v214 )
            HIDWORD(v214[2].Ptr) = v203;
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v214, v140);
          v134 = &v215;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v134, v131);
        goto LABEL_184;
      }
      LODWORD(v10) = -1073741811;
      v193 = -1073741811;
    }
LABEL_184:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v267);
    if ( v235 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v233);
    if ( v232[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v232);
    goto LABEL_175;
  }
  v59 = (unsigned int)(v58 - 1);
  if ( (_DWORD)v59 )
  {
    v60 = (unsigned int)(v59 - 1);
    if ( (_DWORD)v60 )
    {
      v32 = (unsigned int)(v60 - 1);
      if ( !(_DWORD)v32 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
          return 3221225485LL;
        if ( g_OSTestSigningEnabled )
        {
          v80 = *((_DWORD *)a2 + 3) != 0;
          *((_BYTE *)DXGGLOBAL::GetGlobal(v32, v19) + 1376) = v80;
          return (unsigned int)v10;
        }
        goto LABEL_77;
      }
      if ( (_DWORD)v32 == 1 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v18 = WdLogNewEntry5_WdWarning(v32, v19, v21);
          *(_QWORD *)(v18 + 24) = 625LL;
          goto LABEL_299;
        }
        v61 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v32, v19);
        v64 = (__int64)v61;
        if ( !v61 )
        {
          v44 = WdLogNewEntry5_WdError(v63, v62);
          *(_QWORD *)(v44 + 24) = 633LL;
          goto LABEL_46;
        }
        v221 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v196, *((unsigned int *)a2 + 3), v61, &v221);
        v67 = v221;
        if ( !v221 )
        {
          v68 = WdLogNewEntry5_WdError(v66, v65);
          *(_QWORD *)(v68 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v68);
          LODWORD(v10) = -1073741811;
          v193 = -1073741811;
LABEL_97:
          if ( !v196 )
            return (unsigned int)v10;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v196 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
            goto LABEL_64;
          v69 = (ADAPTER_RENDER **)v196;
          goto LABEL_178;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v201, v67);
        v209 = *(_QWORD *)(*((_QWORD *)v67 + 2) + 16LL);
        v210 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v208);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v265, (__int64)v67, 0, v70, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v265, 0LL);
        v193 = v10;
        if ( (int)v10 < 0 )
        {
LABEL_101:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v265);
          if ( v210 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v208);
          if ( v201[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v201);
          goto LABEL_97;
        }
        v199 = 0LL;
        v71 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                           v64,
                                           (DXGALLOCATIONREFERENCE *)&v243,
                                           *((_DWORD *)a2 + 4));
        DXGALLOCATIONREFERENCE::MoveAssign(&v199, v71);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v243, v72);
        v75 = v199;
        if ( v199 )
        {
          v78 = (_QWORD *)*((_QWORD *)v67 + 2);
          v79 = *(_QWORD *)(v199[1].Count + 16);
          if ( *(_QWORD *)(v79 + 16) == v78[2] )
          {
            if ( *((_BYTE *)a2 + 20) )
            {
              if ( (v199[9].Count & 0x800) == 0 )
              {
                v211 = 0;
                v242 = 0LL;
                LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v78[80] + 8LL) + 232LL))(
                                 v78[81],
                                 v199[3].Count,
                                 0LL,
                                 &v211,
                                 &v242,
                                 0LL);
                v193 = v10;
                if ( (int)v10 >= 0 )
                  LODWORD(v75[9].Count) |= 0x800u;
                goto LABEL_108;
              }
              v76 = (_QWORD *)WdLogNewEntry5_WdError(v79, v73);
              v76[3] = 681LL;
            }
            else
            {
              if ( (v199[9].Count & 0x800) != 0 )
              {
                (*(void (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(v78[80] + 8LL) + 240LL))(v78[81], v199[3].Count);
                goto LABEL_108;
              }
              v76 = (_QWORD *)WdLogNewEntry5_WdError(v79, v73);
              v76[3] = 702LL;
            }
          }
          else
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdError(v79, v73);
            v76[3] = v67;
            v76[4] = v75;
            v76[5] = -1073741811LL;
          }
        }
        else
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
          v76[3] = *((unsigned int *)a2 + 4);
        }
        WdLogEvent5_WdError(v76);
        LODWORD(v10) = -1073741811;
        v193 = -1073741811;
LABEL_108:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v199, v77);
        goto LABEL_101;
      }
LABEL_298:
      v18 = WdLogNewEntry5_WdWarning(v32, v19, v21);
      *(_QWORD *)(v18 + 24) = *((int *)a2 + 2);
      goto LABEL_299;
    }
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v18 = WdLogNewEntry5_WdWarning(v60, v19, v21);
      *(_QWORD *)(v18 + 24) = 876LL;
      goto LABEL_299;
    }
    v81 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v60, v19);
    if ( !v81 )
    {
      v44 = WdLogNewEntry5_WdError(v83, v82);
      *(_QWORD *)(v44 + 24) = 884LL;
      goto LABEL_46;
    }
    v205 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v207, *((unsigned int *)a2 + 3), v81, &v205);
    v86 = v205;
    if ( v205 )
    {
      *((_BYTE *)v205 + 1871) = 1;
      *(_BYTE *)(*((_QWORD *)v86 + 5) + 297LL) = 1;
      if ( !v207 )
        return (unsigned int)v10;
    }
    else
    {
      v87 = WdLogNewEntry5_WdError(v85, v84);
      *(_QWORD *)(v87 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v87);
      LODWORD(v10) = -1073741811;
      v193 = -1073741811;
      if ( !v207 )
        return (unsigned int)v10;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v207 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_64;
    v69 = (ADAPTER_RENDER **)v207;
LABEL_178:
    ADAPTER_RENDER::DestroyDeviceNoLocks(v69[2], (struct DXGDEVICE *)v69);
    goto LABEL_64;
  }
  if ( *((_DWORD *)a2 + 1) < 0xA8u )
  {
    v18 = WdLogNewEntry5_WdWarning(v59, v19, v21);
    *(_QWORD *)(v18 + 24) = 762LL;
    goto LABEL_299;
  }
  v88 = DXGPROCESS::GetCurrent(v59, v19);
  if ( !v88 )
  {
    v44 = WdLogNewEntry5_WdError(v90, v89);
    *(_QWORD *)(v44 + 24) = 770LL;
    goto LABEL_46;
  }
  v197 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v231, *((_DWORD *)a2 + 3), v88, &v197, 0);
  if ( !v197 )
  {
    v93 = WdLogNewEntry5_WdError(v92, v91);
    *(_QWORD *)(v93 + 24) = 780LL;
    WdLogEvent5_WdError(v93);
    LODWORD(v10) = -1073741811;
LABEL_138:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v231);
    return (unsigned int)v10;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
  v94 = (struct DXGDEVICE *)*((_QWORD *)v197 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v217, v94);
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v197 + 464));
  v219 = this;
  v220 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v266, (__int64)v94, 0, v95, 0);
  LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v266, 0LL);
  if ( (int)v10 < 0 )
  {
    v98 = (char *)v197 + 464;
    *((_QWORD *)v197 + 59) = 0LL;
    ExReleasePushLockExclusiveEx(v98, 0LL);
    KeLeaveCriticalRegion();
LABEL_141:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v266);
    if ( v220 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
    if ( v217[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v217);
    goto LABEL_138;
  }
  if ( *((_DWORD *)a2 + 8) > 0x10u )
  {
    v99 = WdLogNewEntry5_WdError(v97, v96);
    *(_QWORD *)(v99 + 24) = 801LL;
    WdLogEvent5_WdError(v99);
    LODWORD(v10) = -1073741811;
  }
  v100 = *((_DWORD *)a2 + 4);
  if ( !v100 )
  {
    v101 = WdLogNewEntry5_WdError(v97, v96);
    *(_QWORD *)(v101 + 24) = 806LL;
    WdLogEvent5_WdError(v101);
    LODWORD(v10) = -1073741811;
    v100 = *((_DWORD *)a2 + 4);
  }
  memset(&v262, 0, sizeof(v262));
  v262.hDevice = *((_DWORD *)a2 + 3);
  v262.AllocationCount = *((_DWORD *)a2 + 8);
  v262.CommandLength = v100;
  v262.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
  v102 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
  v262.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
  *(_DWORD *)&v262.Flags |= 0x20u;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v197 + 2) + 16LL) + 16LL));
  v194[0] = IsDxgmms2;
  v202 = v103;
  P = 0LL;
  v260 = 0;
  v105 = 0LL;
  v205 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_160:
    if ( (int)v10 >= 0 )
      LODWORD(v10) = DXGCONTEXT::Render(
                       v197,
                       &v262,
                       (struct COREDEVICEACCESS *)v266,
                       (struct DXGADAPTERSTOPRESETLOCKSHARED *)v218,
                       &v197,
                       v105,
                       0LL);
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(v202, (struct _EX_RUNDOWN_REF **)v105);
    v110 = (char *)v197 + 464;
    *((_QWORD *)v197 + 59) = 0LL;
    ExReleasePushLockExclusiveEx(v110, 0LL);
    KeLeaveCriticalRegion();
    if ( P != v259 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v260 = 0;
    goto LABEL_141;
  }
  v105 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, v103);
  v205 = (struct DXGDEVICE *)v105;
  if ( v105 )
  {
    LODWORD(v10) = DxgkReferenceAllocationList(&v202, v102, v105, *((struct DXGDEVICE **)v197 + 2));
    goto LABEL_160;
  }
  v109 = WdLogNewEntry5_WdWarning(v107, v106, v108);
  *(_QWORD *)(v109 + 24) = 835LL;
  WdLogEvent5_WdWarning(v109);
  if ( P != v259 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v260 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v266);
  if ( v220 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
  if ( v217[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v217);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v231);
  return 3221225495LL;
}
