/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007D38 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A4AC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B71C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AFC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025B6C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025D70 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C00377B0 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x1C0043DF4 (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00EA1A0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EAD80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0113A10 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C012BEC0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01349B4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01352C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0177F24 (DxgkPowerOnOffMonitor.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020B574 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C020CEA0 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C020CF10 (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C020EA10 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0215D54 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02184C0 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1C021B3F4 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C0220AF8 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220F50 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02267C8 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0227B6C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022C2CC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0238F80 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0247F54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C0255020 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025F474 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0261504 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0261638 (DxgkpIsDrtEnabled.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A9270 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B5D80 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C02D4644 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02DE110 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorDRTTest @ 0x1C02F334C (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(ADAPTER_DISPLAY **a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **this)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  struct DXGPROCESS *Current; // rdi
  bool v13; // bl
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  char *v32; // r14
  __int64 v33; // r9
  ADAPTER_DISPLAY *v34; // rdx
  char *v35; // rax
  _OWORD *v36; // rcx
  __int64 v37; // r8
  struct DXGPROCESS *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DXGPROCESS *v41; // rdi
  __int64 v42; // rax
  char *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  DXGDEVICE *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int updated; // eax
  ADAPTER_DISPLAY *v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  struct _KTHREAD **v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  struct DXGDEVICE *v65; // r15
  __int64 v66; // rax
  ADAPTER_RENDER **v67; // rcx
  __int64 v68; // r9
  struct _EX_RUNDOWN_REF **v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  struct _EX_RUNDOWN_REF *v73; // rbx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  _QWORD *v76; // r8
  __int64 v77; // rcx
  bool v78; // bl
  struct _KTHREAD **v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct DXGDEVICE *v84; // rax
  __int64 v85; // rax
  struct DXGPROCESS *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  struct DXGDEVICE *v92; // rbx
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  char *v96; // rcx
  __int64 v97; // rax
  UINT v98; // ebx
  __int64 v99; // rax
  struct _D3DDDI_ALLOCATIONLIST *v100; // r15
  unsigned int v101; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rax
  char *v108; // rcx
  struct _KTHREAD **v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  struct _KTHREAD **v112; // r15
  __int64 v113; // rdx
  __int64 v114; // rcx
  struct DXGDEVICE *v115; // r12
  __int64 v116; // rax
  int v117; // r13d
  __int64 v118; // rax
  UINT v119; // edi
  UINT v120; // ebx
  unsigned int HostProcess; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r9
  int v125; // ecx
  unsigned int v126; // r8d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v128; // rdx
  __int64 v129; // rdx
  _QWORD *v130; // r8
  __int64 v131; // rax
  struct _EX_RUNDOWN_REF **v132; // rcx
  struct _EX_RUNDOWN_REF **v133; // rax
  __int64 v134; // rdx
  struct _EX_RUNDOWN_REF *v135; // rax
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v137; // rdx
  __int64 v138; // rdx
  unsigned int v139; // r8d
  int v140; // edx
  ADAPTER_DISPLAY *v141; // rcx
  struct _KTHREAD **v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  void *v148; // rcx
  NTSTATUS v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rcx
  int v155; // ecx
  int v156; // ecx
  int v157; // ecx
  struct DXGPROCESS *v158; // rax
  struct _FILE_OBJECT *v159; // r12
  unsigned int v160; // edx
  DXGADAPTERSTOPRESETLOCKSHARED *v161; // rcx
  struct _FILE_OBJECT *v162; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  IRP *v164; // rax
  NTSTATUS Status; // eax
  struct DXGPROCESS *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  struct CCD_BTL *v169; // rax
  int v170; // ecx
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rcx
  int v174; // ecx
  __int64 v175; // r8
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rdx
  int v183; // eax
  __int64 v184; // rcx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  __int64 v186; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v187; // rbx
  __int64 v188; // rdx
  __int64 v189; // r8
  PKEVENT v190; // [rsp+38h] [rbp-990h]
  int v191; // [rsp+50h] [rbp-978h]
  unsigned __int8 v192[4]; // [rsp+54h] [rbp-974h] BYREF
  __int64 v193; // [rsp+58h] [rbp-970h] BYREF
  struct DXGDEVICE *v194; // [rsp+60h] [rbp-968h] BYREF
  struct DXGCONTEXT *v195; // [rsp+68h] [rbp-960h] BYREF
  __int64 v196; // [rsp+70h] [rbp-958h] BYREF
  struct _EX_RUNDOWN_REF *v197; // [rsp+78h] [rbp-950h] BYREF
  __int64 v198; // [rsp+80h] [rbp-948h] BYREF
  _QWORD v199[2]; // [rsp+88h] [rbp-940h] BYREF
  unsigned int v200; // [rsp+98h] [rbp-930h] BYREF
  int v201; // [rsp+9Ch] [rbp-92Ch]
  DXGDEVICE *v202; // [rsp+A0h] [rbp-928h] BYREF
  struct DXGDEVICE *v203; // [rsp+A8h] [rbp-920h] BYREF
  struct DXGDEVICE *v204; // [rsp+B0h] [rbp-918h] BYREF
  __int64 v205; // [rsp+B8h] [rbp-910h] BYREF
  _BYTE v206[8]; // [rsp+C0h] [rbp-908h] BYREF
  __int64 v207; // [rsp+C8h] [rbp-900h]
  char v208; // [rsp+D0h] [rbp-8F8h]
  int v209; // [rsp+D8h] [rbp-8F0h] BYREF
  int v210; // [rsp+DCh] [rbp-8ECh] BYREF
  struct _EX_RUNDOWN_REF *v211; // [rsp+E0h] [rbp-8E8h] BYREF
  struct _EX_RUNDOWN_REF *v212; // [rsp+E8h] [rbp-8E0h] BYREF
  struct _EX_RUNDOWN_REF *v213; // [rsp+F0h] [rbp-8D8h] BYREF
  struct DXGDEVICE *v214; // [rsp+F8h] [rbp-8D0h] BYREF
  _QWORD v215[2]; // [rsp+100h] [rbp-8C8h] BYREF
  _BYTE v216[8]; // [rsp+110h] [rbp-8B8h] BYREF
  ADAPTER_DISPLAY **v217; // [rsp+118h] [rbp-8B0h]
  char v218; // [rsp+120h] [rbp-8A8h]
  struct DXGDEVICE *v219; // [rsp+128h] [rbp-8A0h] BYREF
  struct DXGDEVICE *v220; // [rsp+130h] [rbp-898h] BYREF
  __int64 v221; // [rsp+138h] [rbp-890h]
  ULONG_PTR v222; // [rsp+140h] [rbp-888h]
  PVOID Object; // [rsp+148h] [rbp-880h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+150h] [rbp-878h] BYREF
  struct _FILE_OBJECT *v225; // [rsp+158h] [rbp-870h] BYREF
  _BYTE v226[8]; // [rsp+160h] [rbp-868h] BYREF
  ADAPTER_DISPLAY **v227; // [rsp+168h] [rbp-860h]
  char v228; // [rsp+170h] [rbp-858h]
  _BYTE v229[16]; // [rsp+178h] [rbp-850h] BYREF
  _QWORD v230[2]; // [rsp+188h] [rbp-840h] BYREF
  _BYTE v231[8]; // [rsp+198h] [rbp-830h] BYREF
  __int64 v232; // [rsp+1A0h] [rbp-828h]
  char v233; // [rsp+1A8h] [rbp-820h]
  struct _EX_RUNDOWN_REF *v234; // [rsp+1B0h] [rbp-818h] BYREF
  struct _EX_RUNDOWN_REF *v235; // [rsp+1B8h] [rbp-810h] BYREF
  _DWORD v236[2]; // [rsp+1C0h] [rbp-808h] BYREF
  __int64 *v237; // [rsp+1C8h] [rbp-800h]
  DXGADAPTER *v238[2]; // [rsp+1D0h] [rbp-7F8h] BYREF
  struct DXGADAPTER *v239[2]; // [rsp+1E0h] [rbp-7E8h] BYREF
  __int64 v240; // [rsp+1F0h] [rbp-7D8h] BYREF
  struct _EX_RUNDOWN_REF *v241; // [rsp+1F8h] [rbp-7D0h] BYREF
  struct _EX_RUNDOWN_REF *v242; // [rsp+200h] [rbp-7C8h] BYREF
  _BYTE v243[8]; // [rsp+208h] [rbp-7C0h] BYREF
  ADAPTER_DISPLAY **v244; // [rsp+210h] [rbp-7B8h]
  char v245; // [rsp+218h] [rbp-7B0h]
  _QWORD v246[2]; // [rsp+220h] [rbp-7A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+230h] [rbp-798h] BYREF
  struct _KEVENT Event; // [rsp+240h] [rbp-788h] BYREF
  unsigned __int8 v249[24]; // [rsp+258h] [rbp-770h] BYREF
  unsigned __int8 v250[16]; // [rsp+270h] [rbp-758h] BYREF
  __int128 v251; // [rsp+280h] [rbp-748h]
  __int128 v252; // [rsp+290h] [rbp-738h]
  __int128 v253; // [rsp+2A0h] [rbp-728h]
  __int128 v254; // [rsp+2B0h] [rbp-718h]
  __int128 v255; // [rsp+2C0h] [rbp-708h]
  PVOID P; // [rsp+2D0h] [rbp-6F8h] BYREF
  _BYTE v257[256]; // [rsp+2D8h] [rbp-6F0h] BYREF
  int v258; // [rsp+3D8h] [rbp-5F0h]
  _QWORD v259[54]; // [rsp+3E0h] [rbp-5E8h] BYREF
  struct _D3DKMT_RENDER v260; // [rsp+590h] [rbp-438h] BYREF
  __int64 v261[10]; // [rsp+700h] [rbp-2C8h] BYREF
  _QWORD v262[10]; // [rsp+750h] [rbp-278h] BYREF
  _BYTE v263[160]; // [rsp+7A0h] [rbp-228h] BYREF
  _BYTE v264[160]; // [rsp+840h] [rbp-188h] BYREF
  _BYTE v265[160]; // [rsp+8E0h] [rbp-E8h] BYREF

  memset(v261, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v261[1]);
  v261[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v261[3]) = 45;
  LOBYTE(v261[6]) = -1;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v191 = 0;
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v14 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v14 + 24) = *((unsigned int *)a2 + 1);
      WdLogEvent5_WdWarning(v14);
      LODWORD(v10) = -1073741789;
    }
    else
    {
      v11 = *((_DWORD *)a2 + 3);
      Current = DXGPROCESS::GetCurrent(v7, v6);
      if ( Current )
      {
        v13 = v11 && (unsigned __int8)DxgkpIsDrtEnabled();
        *((_BYTE *)Current + 348) = v13 | *((_BYTE *)Current + 348) & 0xFE;
      }
      LODWORD(v10) = 0;
    }
    return (unsigned int)v10;
  }
  if ( !g_OSTestSigningEnabled && !(unsigned __int8)DxgkpIsDrtEnabled() )
  {
    v16 = WdLogNewEntry5_WdWarning(v7, v6, v15);
    *(_QWORD *)(v16 + 24) = 1412LL;
LABEL_299:
    WdLogEvent5_WdWarning(v16);
    goto LABEL_300;
  }
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v7, v6) + 347) & 0x20) != 0 )
  {
    v20 = *((_DWORD *)a2 + 2);
    if ( v20 != 16 && v20 != 29 )
    {
      v21 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v21 + 24) = 239LL;
      WdLogEvent5_WdEvent(v21);
      return 3221225485LL;
    }
  }
  v23 = *((unsigned int *)a2 + 2);
  if ( (int)v23 > 21 )
  {
    if ( (int)v23 <= 29 )
    {
      if ( (_DWORD)v23 == 29 )
      {
        updated = DrtTestSignalEventCb((struct DXGADAPTER *)a1, a2);
        goto LABEL_79;
      }
      v153 = (unsigned int)(v23 - 22);
      if ( !(_DWORD)v153 )
      {
        v166 = DXGPROCESS::GetCurrent(v153, v17);
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v249, v166);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v249, 0LL);
        v169 = CCD_BTL::Global(v168, v167);
        CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v169 + 8));
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v249);
        return (unsigned int)v10;
      }
      v154 = (unsigned int)(v153 - 1);
      if ( !(_DWORD)v154 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x30u )
        {
          v16 = WdLogNewEntry5_WdWarning(v154, v17, v19);
          *(_QWORD *)(v16 + 24) = 304LL;
          goto LABEL_299;
        }
        updated = DxgkpSendTestVmBusCommand((struct DXGADAPTER *)a1, a2);
        goto LABEL_79;
      }
      v155 = v154 - 1;
      if ( !v155 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
          return 3221225485LL;
        g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
        return (unsigned int)v10;
      }
      v156 = v155 - 1;
      if ( v156 )
      {
        v157 = v156 - 1;
        if ( v157 )
        {
          v30 = (unsigned int)(v157 - 1);
          if ( !(_DWORD)v30 )
          {
            updated = VailDRTTest((struct DXGADAPTER *const)a1, a2);
            goto LABEL_79;
          }
          if ( (_DWORD)v30 != 1 )
            goto LABEL_298;
          if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
            return 3221225485LL;
          v158 = DXGPROCESS::GetCurrent(v30, v17);
          if ( v158 )
          {
            *((_BYTE *)v158 + 348) ^= (*((_BYTE *)v158 + 348) ^ (2 * *((_BYTE *)a2 + 12))) & 2;
            return (unsigned int)v10;
          }
          return 3221225506LL;
        }
        if ( !g_OSTestSigningEnabled )
          return 3221225506LL;
        if ( *((_DWORD *)a2 + 1) < 0x14u )
          return 3221225485LL;
        v159 = 0LL;
        v227 = a1;
        v228 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v226);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v160 = *((_DWORD *)a2 + 3);
          if ( v160 != -1 )
          {
            v192[0] = 0;
            LODWORD(v10) = DmmIsTargetInClientVidPnTopology(a1, v160, v192);
            if ( (int)v10 < 0 )
            {
              if ( !v228 )
                return (unsigned int)v10;
              v161 = (DXGADAPTERSTOPRESETLOCKSHARED *)v226;
              goto LABEL_353;
            }
            if ( !v192[0] )
            {
              if ( v228 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v226);
              return 3221225485LL;
            }
          }
          v159 = (struct _FILE_OBJECT *)a1[27];
          ObfReferenceObject(v159);
        }
        if ( v228 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v226);
        if ( !v159 )
          goto LABEL_230;
        memset(v262, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v262[1]);
        v262[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v262[3]) = 45;
        LOBYTE(v262[6]) = -1;
        v210 = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
        LODWORD(v10) = DxgkPowerOnOffMonitor(
                         (__int64)v159,
                         1u,
                         (_DWORD *)a2 + 3,
                         &v210,
                         1,
                         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v262);
        v162 = v159;
      }
      else
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
          return 3221225485LL;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        DeviceObject = 0LL;
        v225 = 0LL;
        result = DxgkGetMonitorDeviceObject(
                   (const struct _LUID *)((char *)a2 + 12),
                   *((_DWORD *)a2 + 5),
                   &v225,
                   &DeviceObject);
        if ( (int)result < 0 )
          return result;
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        IoStatusBlock = 0LL;
        v164 = IoBuildDeviceIoControlRequest(
                 0x232433u,
                 AttachedDeviceReference,
                 (char *)a2 + 24,
                 4u,
                 0LL,
                 0,
                 1u,
                 &Event,
                 &IoStatusBlock);
        if ( v164 )
        {
          Status = IofCallDriver(AttachedDeviceReference, v164);
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
        v162 = v225;
      }
      ObfDereferenceObject(v162);
      return (unsigned int)v10;
    }
    v170 = v23 - 30;
    if ( v170 )
    {
      v171 = (unsigned int)(v170 - 1);
      if ( !(_DWORD)v171 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          v16 = WdLogNewEntry5_WdWarning(v171, v17, v19);
          *(_QWORD *)(v16 + 24) = 1216LL;
          goto LABEL_299;
        }
        updated = DrtTestUpdateRegistryForNewOverride(
                    *(struct _LUID *)((char *)a2 + 12),
                    *((_DWORD *)a2 + 5),
                    *((_DWORD *)a2 + 6));
        goto LABEL_79;
      }
      v172 = (unsigned int)(v171 - 3);
      if ( !(_DWORD)v172 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          v184 = *((unsigned int *)a2 + 3);
          if ( (unsigned int)(v184 - 1) <= 2 )
          {
            if ( *((int *)a1 + 649) >= 2600 && a1[337] && a1[338] )
            {
              DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(v184);
              v187 = DiagnosticInfoArgs;
              if ( DiagnosticInfoArgs )
              {
                LODWORD(v10) = DXGADAPTER::DdiCollectDiagnosticInfo((DXGADAPTER *)a1, DiagnosticInfoArgs, v186);
                DxgFreeDiagnosticInfoArgs(v187);
              }
              else
              {
                LODWORD(v10) = -1073741801;
              }
            }
            return (unsigned int)v10;
          }
          v16 = WdLogNewEntry5_WdWarning(v184, v17, v19);
          *(_QWORD *)(v16 + 24) = 1245LL;
        }
        else
        {
          v16 = WdLogNewEntry5_WdWarning(v172, v17, v19);
          *(_QWORD *)(v16 + 24) = 1230LL;
        }
        goto LABEL_299;
      }
      v173 = (unsigned int)(v172 - 1);
      if ( (_DWORD)v173 )
      {
        v174 = v173 - 1;
        if ( v174 )
        {
          v30 = (unsigned int)(v174 - 1);
          if ( !(_DWORD)v30 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x14u )
            {
              v182 = *((_QWORD *)a1[337] + 49);
              if ( v182 )
                v183 = *(_DWORD *)(2904LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v182 + 8) + 136);
              else
                v183 = -1;
              *((_DWORD *)a2 + 4) = v183;
              return (unsigned int)v10;
            }
            v16 = WdLogNewEntry5_WdWarning(v30, v17, v19);
            *(_QWORD *)(v16 + 24) = 1388LL;
            goto LABEL_299;
          }
          if ( (_DWORD)v30 == 1 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x30u )
            {
              if ( *((int *)a1 + 649) < 2700 || !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
              {
                v176 = WdLogNewEntry5_WdError(v30, v17);
                *(_QWORD *)(v176 + 24) = 1283LL;
                WdLogEvent5_WdError(v176);
              }
              if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
              {
                v177 = WdLogNewEntry5_WdError(v30, v17);
                *(_QWORD *)(v177 + 24) = 1291LL;
                WdLogEvent5_WdError(v177);
              }
              v178 = *((unsigned int *)a2 + 3);
              if ( !(_DWORD)v178 )
              {
                *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(a1[337])
                                     ? 0xC00000BB
                                     : 0;
                return (unsigned int)v10;
              }
              if ( (_DWORD)v178 == 1 )
              {
                v193 = *((_QWORD *)a2 + 4);
                v236[0] = 1;
                v236[1] = 264;
                v237 = &v193;
                LODWORD(v10) = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                                 a1[337],
                                 (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v236,
                                 v175);
                *((_DWORD *)a2 + 11) = v10;
                if ( (int)v10 < 0 )
                {
                  v181 = WdLogNewEntry5_WdError(v180, v179);
                  *(_QWORD *)(v181 + 24) = 1317LL;
                  WdLogEvent5_WdError(v181);
                }
                return (unsigned int)v10;
              }
              v16 = WdLogNewEntry5_WdWarning(v178, v17, v175);
              *(_QWORD *)(v16 + 24) = 1324LL;
            }
            else
            {
              v16 = WdLogNewEntry5_WdWarning(v30, v17, v19);
              *(_QWORD *)(v16 + 24) = 1272LL;
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
          v239[0] = 0LL;
          DXGADAPTER_REFERENCE::AssignByHandle(v239, *((unsigned int *)a2 + 3));
          if ( v239[0] )
          {
            v238[0] = 0LL;
            ADAPTER_DISPLAY::GetPairedRenderAdapter(*((ADAPTER_DISPLAY **)v239[0] + 337), v238, 0LL);
            if ( v238[0] )
              v9 = *(_QWORD *)((char *)v238[0] + 316);
            *((_QWORD *)a2 + 2) = v9;
            DXGADAPTER_REFERENCE::Assign(v238, 0LL);
          }
          DXGADAPTER_REFERENCE::Assign(v239, 0LL);
          return (unsigned int)v10;
        }
        v16 = WdLogNewEntry5_WdWarning(v173, v17, v19);
        *(_QWORD *)(v16 + 24) = 1346LL;
        goto LABEL_299;
      }
      return 3221225506LL;
    }
    if ( (*((_DWORD *)a1 + 515) & 0x800) == 0 )
      return (unsigned int)v10;
    v244 = a1;
    v245 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v243);
    if ( a1[338] )
    {
      if ( *((_DWORD *)a1 + 50) == 1 )
        LODWORD(v10) = ADAPTER_RENDER::EnableIoMmuIsolation(a1[338], v188, v189);
      else
        LODWORD(v10) = 0;
    }
    if ( !v245 )
      return (unsigned int)v10;
    v161 = (DXGADAPTERSTOPRESETLOCKSHARED *)v243;
LABEL_353:
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v161);
    return (unsigned int)v10;
  }
  if ( (_DWORD)v23 == 21 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x18u )
    {
      v16 = WdLogNewEntry5_WdWarning(v23, v17, v19);
      *(_QWORD *)(v16 + 24) = 717LL;
      goto LABEL_299;
    }
    v142 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v23, v17);
    if ( !v142 )
    {
      v42 = WdLogNewEntry5_WdError(v144, v143);
      *(_QWORD *)(v42 + 24) = 725LL;
      goto LABEL_46;
    }
    v214 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v198, *((unsigned int *)a2 + 3), v142, &v214);
    if ( v214 )
    {
      v148 = (void *)*((_QWORD *)a2 + 2);
      Object = 0LL;
      v149 = ObReferenceObjectByHandle(v148, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v10 = v149;
      v191 = v149;
      if ( v149 >= 0 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v246, v214);
        KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
        if ( v246[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v246);
      }
      else
      {
        v152 = WdLogNewEntry5_WdError(v151, v150);
        *(_QWORD *)(v152 + 24) = v10;
        WdLogEvent5_WdError(v152);
      }
      if ( !v198 )
        return (unsigned int)v10;
    }
    else
    {
      v147 = WdLogNewEntry5_WdError(v146, v145);
      *(_QWORD *)(v147 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v147);
      LODWORD(v10) = -1073741811;
      v191 = -1073741811;
      if ( !v198 )
        return (unsigned int)v10;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v198 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_64;
    v67 = (ADAPTER_RENDER **)v198;
    goto LABEL_178;
  }
  if ( (int)v23 <= 12 )
  {
    if ( (_DWORD)v23 == 12 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        v53 = a1[338];
        if ( v53 )
          *((_BYTE *)v53 + 888) = *((_BYTE *)a2 + 12);
        return (unsigned int)v10;
      }
      v16 = WdLogNewEntry5_WdWarning(v23, v17, v19);
      *(_QWORD *)(v16 + 24) = 393LL;
      goto LABEL_299;
    }
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( !v26 )
        {
          if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive((__int64)this, 1LL);
          if ( (int)v10 >= 0 )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          return (unsigned int)v10;
        }
        v27 = (unsigned int)(v26 - 1);
        if ( !(_DWORD)v27 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            v16 = WdLogNewEntry5_WdWarning(v27, v17, v19);
            *(_QWORD *)(v16 + 24) = 315LL;
            goto LABEL_299;
          }
          v51 = *((unsigned int *)a2 + 3);
          if ( (unsigned int)(v51 - 1) > 0x3FF )
          {
            v16 = WdLogNewEntry5_WdWarning(v51, v17, v19);
            *(_QWORD *)(v16 + 24) = 324LL;
            goto LABEL_299;
          }
          g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
          return (unsigned int)v10;
        }
        v28 = (unsigned int)(v27 - 1);
        if ( !(_DWORD)v28 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x14u )
          {
            v16 = WdLogNewEntry5_WdWarning(v28, v17, v19);
            *(_QWORD *)(v16 + 24) = 338LL;
            goto LABEL_299;
          }
          g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
          return (unsigned int)v10;
        }
        v29 = (unsigned int)(v28 - 1);
        if ( (_DWORD)v29 )
        {
          v30 = (unsigned int)(v29 - 4);
          if ( (_DWORD)v30 )
          {
            if ( (_DWORD)v30 == 1 )
            {
              v31 = *((unsigned int *)a1 + 736);
              if ( (_DWORD)v31 )
              {
                v30 = (unsigned int)(v31 - 1);
                v17 = 344 * v30 + 360;
                if ( *((unsigned int *)a2 + 1) >= v17 )
                {
                  v32 = (char *)a2 + 352;
                  v33 = (unsigned int)v31;
                  do
                  {
                    v34 = a1[350];
                    v35 = v32 - 336;
                    v36 = (_OWORD *)((char *)v34 + v9 + 8);
                    v37 = 2LL;
                    do
                    {
                      *(_OWORD *)v35 = *v36;
                      *((_OWORD *)v35 + 1) = v36[1];
                      *((_OWORD *)v35 + 2) = v36[2];
                      *((_OWORD *)v35 + 3) = v36[3];
                      *((_OWORD *)v35 + 4) = v36[4];
                      *((_OWORD *)v35 + 5) = v36[5];
                      *((_OWORD *)v35 + 6) = v36[6];
                      v35 += 128;
                      *((_OWORD *)v35 - 1) = v36[7];
                      v36 += 8;
                      --v37;
                    }
                    while ( v37 );
                    *(_OWORD *)v35 = *v36;
                    *((_OWORD *)v35 + 1) = v36[1];
                    *((_OWORD *)v35 + 2) = v36[2];
                    *((_OWORD *)v35 + 3) = v36[3];
                    *((_OWORD *)v35 + 4) = v36[4];
                    *(_DWORD *)v32 = *(_DWORD *)((char *)v34 + v9 + 344);
                    v32[4] = *((_BYTE *)v34 + v9 + 356);
                    v9 += 520LL;
                    v32 += 344;
                    --v33;
                  }
                  while ( v33 );
                  return (unsigned int)v10;
                }
              }
              v16 = WdLogNewEntry5_WdWarning(v30, v17, v31);
              *(_QWORD *)(v16 + 24) = 374LL;
              goto LABEL_299;
            }
            goto LABEL_298;
          }
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            v16 = WdLogNewEntry5_WdWarning(v30, v17, v19);
            *(_QWORD *)(v16 + 24) = 355LL;
            goto LABEL_299;
          }
          *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 736);
          return (unsigned int)v10;
        }
        if ( *((_DWORD *)a2 + 1) < 0x114u )
        {
          v16 = WdLogNewEntry5_WdWarning(v29, v17, v19);
          *(_QWORD *)(v16 + 24) = 412LL;
          goto LABEL_299;
        }
        v38 = DXGPROCESS::GetCurrent(v29, v17);
        v41 = v38;
        if ( !v38 )
        {
          v42 = WdLogNewEntry5_WdError(v40, v39);
          *(_QWORD *)(v42 + 24) = 420LL;
LABEL_46:
          WdLogEvent5_WdError(v42);
LABEL_300:
          LODWORD(v10) = -1073741811;
          return (unsigned int)v10;
        }
        v43 = (char *)v38 + 176;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v43, 0LL);
        *((_QWORD *)v43 + 1) = KeGetCurrentThread();
        v202 = 0LL;
        v44 = *((unsigned int *)a2 + 3);
        if ( (_DWORD)v44 )
        {
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v204, v44, (struct _KTHREAD **)v41, &v202);
          if ( !v202 )
          {
            v46 = WdLogNewEntry5_WdError(v45, v44);
            *(_QWORD *)(v46 + 24) = *((unsigned int *)a2 + 3);
            WdLogEvent5_WdError(v46);
            LODWORD(v10) = -1073741811;
            if ( v204 )
            {
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v204 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v204 + 2), v204);
              LODWORD(v10) = -1073741811;
            }
            goto LABEL_53;
          }
          if ( v204 && _InterlockedExchangeAdd64((volatile signed __int64 *)v204 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v204 + 2), v204);
        }
        if ( !v202 )
        {
          v47 = *((_QWORD *)v41 + 35);
          v48 = v47 ? (DXGDEVICE *)(v47 - 24) : 0LL;
          v202 = v48;
          if ( !v48 )
          {
            v49 = WdLogNewEntry5_WdError(0LL, v44);
            *(_QWORD *)(v49 + 24) = 447LL;
            WdLogEvent5_WdError(v49);
            LODWORD(v10) = -1073741811;
LABEL_53:
            *((_QWORD *)v43 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v43, 0LL);
            KeLeaveCriticalRegion();
            return (unsigned int)v10;
          }
        }
        DXGDEVICE::GetContexts(v202, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
        *((_DWORD *)a2 + 3) = *(_DWORD *)(v50 + 436);
        *((_QWORD *)v43 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v43, 0LL);
        KeLeaveCriticalRegion();
LABEL_64:
        LODWORD(v10) = v191;
        return (unsigned int)v10;
      }
LABEL_77:
      LODWORD(v10) = -1073741637;
      return (unsigned int)v10;
    }
    updated = MonitorDRTTest((DXGADAPTER *)a1, a2, (__int64)v261);
LABEL_79:
    LODWORD(v10) = updated;
    return (unsigned int)v10;
  }
  v54 = (unsigned int)(v23 - 14);
  if ( !(_DWORD)v54 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x14u )
    {
      v16 = WdLogNewEntry5_WdWarning(v54, v17, v19);
      *(_QWORD *)(v16 + 24) = 909LL;
      goto LABEL_299;
    }
    v141 = a1[27];
    if ( v141 )
    {
      updated = DxgkHandleThermalCoolingDrtEscape(v141, a2);
      goto LABEL_79;
    }
LABEL_230:
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  v55 = v54 - 1;
  if ( !v55 )
  {
    if ( *((_DWORD *)a2 + 1) < 0xA8u )
      return 3221225485LL;
    v139 = *((_DWORD *)a2 + 4);
    if ( v139 >= *((_DWORD *)a1 + 736) )
      return 3221225485LL;
    v140 = *((_DWORD *)a2 + 3);
    if ( v140 )
    {
      if ( v140 <= 0 )
        return 3221225485LL;
      if ( v140 <= 3 )
      {
        DXGADAPTER::ForcePState((__int64)a1, v140, v139, *((_DWORD *)a2 + 6));
      }
      else if ( v140 == 4 )
      {
        *((_DWORD *)a2 + 7) = *((_DWORD *)a1 + 1002);
      }
      else
      {
        if ( v140 != 5 )
          return 3221225485LL;
        DXGADAPTER::QueryPStateEngineData(
          (DXGADAPTER *)a1,
          *((_DWORD *)a2 + 5),
          (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
          (unsigned int *)a2 + 4);
      }
    }
    else
    {
      DXGADAPTER::ForcePStateAcrossNodes((DXGADAPTER *)a1, *((_DWORD *)a2 + 6));
    }
    return (unsigned int)v10;
  }
  v56 = (unsigned int)(v55 - 1);
  if ( !(_DWORD)v56 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x60u )
    {
      v16 = WdLogNewEntry5_WdWarning(v56, v17, v19);
      *(_QWORD *)(v16 + 24) = 462LL;
      goto LABEL_299;
    }
    v109 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v56, v17);
    v112 = v109;
    if ( !v109 )
    {
      v42 = WdLogNewEntry5_WdError(v111, v110);
      *(_QWORD *)(v42 + 24) = 470LL;
      goto LABEL_46;
    }
    v220 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v196, *((unsigned int *)a2 + 3), v109, &v220);
    v115 = v220;
    if ( !v220 )
    {
      v116 = WdLogNewEntry5_WdError(v114, v113);
      *(_QWORD *)(v116 + 24) = *((unsigned int *)a2 + 3);
LABEL_174:
      WdLogEvent5_WdError(v116);
      LODWORD(v10) = -1073741811;
      v191 = -1073741811;
LABEL_175:
      if ( !v196 )
        return (unsigned int)v10;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v196 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_64;
      v67 = (ADAPTER_RENDER **)v196;
      goto LABEL_178;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
    v117 = 0;
    v201 = 0;
    v222 = 0LL;
    v118 = *(_QWORD *)(*((_QWORD *)v115 + 2) + 16LL);
    v221 = v118;
    if ( *(_BYTE *)(v118 + 209) )
    {
      *(_OWORD *)v250 = *(_OWORD *)a2;
      v251 = *((_OWORD *)a2 + 1);
      v252 = *((_OWORD *)a2 + 2);
      v253 = *((_OWORD *)a2 + 3);
      v254 = *((_OWORD *)a2 + 4);
      v255 = *((_OWORD *)a2 + 5);
      *(_DWORD *)&v250[12] = *((_DWORD *)v115 + 110);
      v119 = *(_DWORD *)&v250[12];
      v120 = *(_DWORD *)(v118 + 4312);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v112);
      LODWORD(v190) = 96;
      if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v221 + 4240),
                  HostProcess,
                  v120,
                  v119,
                  0,
                  D3DKMT_ESCAPE_DRT_TEST,
                  0,
                  (size_t)v190,
                  v250) < 0 )
      {
        v116 = WdLogNewEntry5_WdError(v123, v122);
        *(_QWORD *)(v116 + 24) = 512LL;
        goto LABEL_174;
      }
      v117 = HIDWORD(v252);
      v201 = v253;
      v222 = v255;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v230, v115);
    v232 = *(_QWORD *)(*((_QWORD *)v115 + 2) + 16LL);
    v233 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v231);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v265, (__int64)v115, 0, v124, 0);
    LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v265, 0LL);
    v191 = v10;
    if ( (int)v10 >= 0 )
    {
      memset(v259, 0, 0x1A8uLL);
      HIDWORD(v259[0]) = *((_DWORD *)a2 + 3);
      LODWORD(v259[2]) = 4;
      v259[3] = (char *)a2 + 16;
      v125 = LODWORD(v259[0]) | 0x200;
      LODWORD(v259[0]) |= 0x200u;
      if ( *((_BYTE *)a2 + 60) )
      {
        v125 |= 1u;
        LODWORD(v259[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 65) )
      {
        v125 |= 0x20u;
        LODWORD(v259[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 61) )
      {
        v125 |= 0x400u;
        LODWORD(v259[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 62) )
      {
        v125 |= 0x1000u;
        LODWORD(v259[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 63) )
      {
        v125 |= 0x2000u;
        LODWORD(v259[0]) = v125;
      }
      if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
        LODWORD(v259[0]) = v125 | 0x8000;
      LOBYTE(v259[51]) = *((_BYTE *)a2 + 64);
      LODWORD(v259[48]) = *((_DWORD *)a2 + 14);
      HIDWORD(v259[48]) = *((_DWORD *)a2 + 17);
      HIDWORD(v259[47]) = *((_DWORD *)a2 + 10);
      LODWORD(v259[49]) = *((_DWORD *)a2 + 18);
      v259[50] = *((_QWORD *)a2 + 10);
      LODWORD(v10) = DXGDEVICE::CreateStandardAllocation(
                       v115,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v259,
                       (struct COREDEVICEACCESS *)v265);
      v191 = v10;
      if ( (int)v10 >= 0 )
      {
        v126 = HIDWORD(v259[6]);
        *((_DWORD *)a2 + 11) = HIDWORD(v259[6]);
        *((_QWORD *)a2 + 6) = v259[1];
        if ( (*((_BYTE *)v112 + 347) & 0x20) != 0 )
        {
          v211 = 0LL;
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v112,
                                                        (DXGALLOCATIONREFERENCE *)&v235,
                                                        v126);
          DXGALLOCATIONREFERENCE::MoveAssign(&v211, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v235, v128);
          if ( v211
            && (v130 = (_QWORD *)*((_QWORD *)v115 + 2),
                v129 = *(_QWORD *)(v211[1].Count + 16),
                *(_QWORD *)(v129 + 16) == v130[2]) )
          {
            v131 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v130[80] + 8LL) + 632LL))(
                     v130[81],
                     v211[3].Count,
                     0LL);
          }
          else
          {
            v131 = 0LL;
          }
          *((_QWORD *)a2 + 10) = v131;
          v132 = &v211;
        }
        else
        {
          if ( !*(_BYTE *)(v221 + 209) )
            goto LABEL_184;
          v213 = 0LL;
          v133 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                              (__int64)v112,
                                              (DXGALLOCATIONREFERENCE *)&v242,
                                              v126);
          DXGALLOCATIONREFERENCE::MoveAssign(&v213, v133);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v242, v134);
          v135 = v213;
          if ( v213 )
          {
            LODWORD(v213[12].Count) = v117;
            HIDWORD(v135[12].Ptr) = v117;
            v135[15].Count = v222;
          }
          v212 = 0LL;
          ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                      (__int64)v112,
                                                      (DXGRESOURCEREFERENCE *)&v234,
                                                      *((_DWORD *)a2 + 12));
          DXGRESOURCEREFERENCE::MoveAssign(&v212, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v234, v137);
          if ( v212 )
            HIDWORD(v212[2].Ptr) = v201;
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v212, v138);
          v132 = &v213;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v132, v129);
        goto LABEL_184;
      }
      LODWORD(v10) = -1073741811;
      v191 = -1073741811;
    }
LABEL_184:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v265);
    if ( v233 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v231);
    if ( v230[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v230);
    goto LABEL_175;
  }
  v57 = (unsigned int)(v56 - 1);
  if ( (_DWORD)v57 )
  {
    v58 = (unsigned int)(v57 - 1);
    if ( (_DWORD)v58 )
    {
      v30 = (unsigned int)(v58 - 1);
      if ( !(_DWORD)v30 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
          return 3221225485LL;
        if ( g_OSTestSigningEnabled )
        {
          v78 = *((_DWORD *)a2 + 3) != 0;
          *((_BYTE *)DXGGLOBAL::GetGlobal(v30, v17) + 1488) = v78;
          return (unsigned int)v10;
        }
        goto LABEL_77;
      }
      if ( (_DWORD)v30 == 1 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v16 = WdLogNewEntry5_WdWarning(v30, v17, v19);
          *(_QWORD *)(v16 + 24) = 625LL;
          goto LABEL_299;
        }
        v59 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v30, v17);
        v62 = (__int64)v59;
        if ( !v59 )
        {
          v42 = WdLogNewEntry5_WdError(v61, v60);
          *(_QWORD *)(v42 + 24) = 633LL;
          goto LABEL_46;
        }
        v219 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v194, *((unsigned int *)a2 + 3), v59, &v219);
        v65 = v219;
        if ( !v219 )
        {
          v66 = WdLogNewEntry5_WdError(v64, v63);
          *(_QWORD *)(v66 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v66);
          LODWORD(v10) = -1073741811;
          v191 = -1073741811;
LABEL_97:
          if ( !v194 )
            return (unsigned int)v10;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v194 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
            goto LABEL_64;
          v67 = (ADAPTER_RENDER **)v194;
          goto LABEL_178;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v199, v65);
        v207 = *(_QWORD *)(*((_QWORD *)v65 + 2) + 16LL);
        v208 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v206);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v263, (__int64)v65, 0, v68, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v263, 0LL);
        v191 = v10;
        if ( (int)v10 < 0 )
        {
LABEL_101:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v263);
          if ( v208 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v206);
          if ( v199[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v199);
          goto LABEL_97;
        }
        v197 = 0LL;
        v69 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                           v62,
                                           (DXGALLOCATIONREFERENCE *)&v241,
                                           *((_DWORD *)a2 + 4));
        DXGALLOCATIONREFERENCE::MoveAssign(&v197, v69);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v241, v70);
        v73 = v197;
        if ( v197 )
        {
          v76 = (_QWORD *)*((_QWORD *)v65 + 2);
          v77 = *(_QWORD *)(v197[1].Count + 16);
          if ( *(_QWORD *)(v77 + 16) == v76[2] )
          {
            if ( *((_BYTE *)a2 + 20) )
            {
              if ( (v197[9].Count & 0x800) == 0 )
              {
                v209 = 0;
                v240 = 0LL;
                LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v76[80] + 8LL) + 232LL))(
                                 v76[81],
                                 v197[3].Count,
                                 0LL,
                                 &v209,
                                 &v240,
                                 0LL);
                v191 = v10;
                if ( (int)v10 >= 0 )
                  LODWORD(v73[9].Count) |= 0x800u;
                goto LABEL_108;
              }
              v74 = (_QWORD *)WdLogNewEntry5_WdError(v77, v71);
              v74[3] = 681LL;
            }
            else
            {
              if ( (v197[9].Count & 0x800) != 0 )
              {
                (*(void (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(v76[80] + 8LL) + 240LL))(v76[81], v197[3].Count);
                LODWORD(v73[9].Count) &= ~0x800u;
                goto LABEL_108;
              }
              v74 = (_QWORD *)WdLogNewEntry5_WdError(v77, v71);
              v74[3] = 702LL;
            }
          }
          else
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdError(v77, v71);
            v74[3] = v65;
            v74[4] = v73;
            v74[5] = -1073741811LL;
          }
        }
        else
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
          v74[3] = *((unsigned int *)a2 + 4);
        }
        WdLogEvent5_WdError(v74);
        LODWORD(v10) = -1073741811;
        v191 = -1073741811;
LABEL_108:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v197, v75);
        goto LABEL_101;
      }
LABEL_298:
      v16 = WdLogNewEntry5_WdWarning(v30, v17, v19);
      *(_QWORD *)(v16 + 24) = *((int *)a2 + 2);
      goto LABEL_299;
    }
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v16 = WdLogNewEntry5_WdWarning(v58, v17, v19);
      *(_QWORD *)(v16 + 24) = 878LL;
      goto LABEL_299;
    }
    v79 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v58, v17);
    if ( !v79 )
    {
      v42 = WdLogNewEntry5_WdError(v81, v80);
      *(_QWORD *)(v42 + 24) = 886LL;
      goto LABEL_46;
    }
    v203 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v205, *((unsigned int *)a2 + 3), v79, &v203);
    v84 = v203;
    if ( v203 )
    {
      *((_BYTE *)v203 + 1871) = 1;
      *(_BYTE *)(*((_QWORD *)v84 + 5) + 297LL) = 1;
      if ( !v205 )
        return (unsigned int)v10;
    }
    else
    {
      v85 = WdLogNewEntry5_WdError(v83, v82);
      *(_QWORD *)(v85 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v85);
      LODWORD(v10) = -1073741811;
      v191 = -1073741811;
      if ( !v205 )
        return (unsigned int)v10;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v205 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_64;
    v67 = (ADAPTER_RENDER **)v205;
LABEL_178:
    ADAPTER_RENDER::DestroyDeviceNoLocks(v67[2], (struct DXGDEVICE *)v67);
    goto LABEL_64;
  }
  if ( *((_DWORD *)a2 + 1) < 0xA8u )
  {
    v16 = WdLogNewEntry5_WdWarning(v57, v17, v19);
    *(_QWORD *)(v16 + 24) = 764LL;
    goto LABEL_299;
  }
  v86 = DXGPROCESS::GetCurrent(v57, v17);
  if ( !v86 )
  {
    v42 = WdLogNewEntry5_WdError(v88, v87);
    *(_QWORD *)(v42 + 24) = 772LL;
    goto LABEL_46;
  }
  v195 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v229, *((_DWORD *)a2 + 3), v86, &v195, 0);
  if ( !v195 )
  {
    v91 = WdLogNewEntry5_WdError(v90, v89);
    *(_QWORD *)(v91 + 24) = 782LL;
    WdLogEvent5_WdError(v91);
    LODWORD(v10) = -1073741811;
LABEL_138:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v229);
    return (unsigned int)v10;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
  v92 = (struct DXGDEVICE *)*((_QWORD *)v195 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v215, v92);
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v195 + 464));
  v217 = a1;
  v218 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v264, (__int64)v92, 0, v93, 0);
  LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v264, 0LL);
  if ( (int)v10 < 0 )
  {
    v96 = (char *)v195 + 464;
    *((_QWORD *)v195 + 59) = 0LL;
    ExReleasePushLockExclusiveEx(v96, 0LL);
    KeLeaveCriticalRegion();
LABEL_141:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v264);
    if ( v218 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
    if ( v215[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v215);
    goto LABEL_138;
  }
  if ( *((_DWORD *)a2 + 8) > 0x10u )
  {
    v97 = WdLogNewEntry5_WdError(v95, v94);
    *(_QWORD *)(v97 + 24) = 803LL;
    WdLogEvent5_WdError(v97);
    LODWORD(v10) = -1073741811;
  }
  v98 = *((_DWORD *)a2 + 4);
  if ( !v98 )
  {
    v99 = WdLogNewEntry5_WdError(v95, v94);
    *(_QWORD *)(v99 + 24) = 808LL;
    WdLogEvent5_WdError(v99);
    LODWORD(v10) = -1073741811;
    v98 = *((_DWORD *)a2 + 4);
  }
  memset(&v260, 0, sizeof(v260));
  v260.hDevice = *((_DWORD *)a2 + 3);
  v260.AllocationCount = *((_DWORD *)a2 + 8);
  v260.CommandLength = v98;
  v260.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
  v100 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
  v260.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
  *(_DWORD *)&v260.Flags |= 0x20u;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v195 + 2) + 16LL) + 16LL));
  v192[0] = IsDxgmms2;
  v200 = v101;
  P = 0LL;
  v258 = 0;
  v103 = 0LL;
  v203 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_160:
    if ( (int)v10 >= 0 )
      LODWORD(v10) = DXGCONTEXT::Render(
                       v195,
                       &v260,
                       (struct COREDEVICEACCESS *)v264,
                       (struct DXGADAPTERSTOPRESETLOCKSHARED *)v216,
                       &v195,
                       v103,
                       0LL);
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(v200, (struct _EX_RUNDOWN_REF **)v103);
    v108 = (char *)v195 + 464;
    *((_QWORD *)v195 + 59) = 0LL;
    ExReleasePushLockExclusiveEx(v108, 0LL);
    KeLeaveCriticalRegion();
    if ( P != v257 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v258 = 0;
    goto LABEL_141;
  }
  v103 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, v101);
  v203 = (struct DXGDEVICE *)v103;
  if ( v103 )
  {
    LODWORD(v10) = DxgkReferenceAllocationList(&v200, v100, v103, *((struct DXGDEVICE **)v195 + 2));
    goto LABEL_160;
  }
  v107 = WdLogNewEntry5_WdWarning(v105, v104, v106);
  *(_QWORD *)(v107 + 24) = 837LL;
  WdLogEvent5_WdWarning(v107);
  if ( P != v257 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v258 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v264);
  if ( v218 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
  if ( v215[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v215);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v229);
  return 3221225495LL;
}
