/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C003DF38
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C003970C (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003C2D4 (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0072FB0 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0002AFC (_tlgKeywordOn.c)
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C0011D4C (RaidGetStorPoFxComponent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0019AA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RaidGetStorPoFxFState @ 0x1C0036D20 (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r13d
  unsigned int v6; // r10d
  unsigned int v9; // r9d
  char v10; // r15
  char *StorPoFxComponent; // rax
  int v12; // r10d
  char *v13; // r11
  unsigned int v14; // ebx
  unsigned int i; // edx
  char *StorPoFxFState; // rax
  int v17; // edx
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  size_t v20; // r14
  _QWORD *Pool; // rax
  _QWORD *v22; // rbx
  __int64 v24; // rcx
  unsigned int v25; // r10d
  __int64 v26; // rsi
  char *v27; // rax
  int v28; // r10d
  __int64 v29; // r11
  char *v30; // r13
  unsigned int v31; // edx
  __int128 v32; // xmm0
  char v33; // cl
  unsigned int v34; // r14d
  char *v35; // rax
  __int64 v36; // r9
  __int64 v37; // r11
  __int64 v38; // rcx
  __int64 v39; // r14
  bool v40; // zf
  _QWORD *v41; // rax
  KSPIN_LOCK *v42; // rcx
  char v43; // r15
  int v44; // esi
  __int64 v45; // rcx
  int v46; // eax
  int v47; // ebx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r10d
  int v51; // r11d
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // r10d
  char v57; // [rsp+30h] [rbp-D0h] BYREF
  char v58; // [rsp+31h] [rbp-CFh] BYREF
  char v59; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v60; // [rsp+34h] [rbp-CCh] BYREF
  int v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+3Ch] [rbp-C4h] BYREF
  int v63; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h] BYREF
  int v66; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD InputBuffer[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 *v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  unsigned int *v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C8h] [rbp-38h]
  char *v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  int *v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  int *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  int *v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  int *v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  int *v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  int *v87; // [rsp+130h] [rbp+30h]
  __int64 v88; // [rsp+138h] [rbp+38h]
  __int64 *v89; // [rsp+140h] [rbp+40h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  __int64 *v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]

  v4 = a2[2];
  v5 = 0;
  v6 = 0;
  v64 = a4;
  v65 = a3;
  v57 = 0;
  v60 = 0;
  v9 = 104;
  v10 = 1;
  if ( v4 )
  {
    do
    {
      StorPoFxComponent = RaidGetStorPoFxComponent(a2, v6);
      v13 = StorPoFxComponent;
      if ( StorPoFxComponent )
      {
        v9 += 56;
        if ( *((_DWORD *)StorPoFxComponent + 2) > v5 )
          v5 = *((_DWORD *)StorPoFxComponent + 2);
      }
      v14 = *((_DWORD *)StorPoFxComponent + 2);
      for ( i = 0; i < v14; v9 = v19 )
      {
        StorPoFxFState = RaidGetStorPoFxFState(v13, i);
        v19 = v18 + 24;
        if ( !StorPoFxFState )
          v19 = v18;
        i = v17 + 1;
      }
      v6 = v12 + 1;
    }
    while ( v6 < v4 );
    v60 = v5;
  }
  v20 = v9;
  Pool = RaidAllocatePool(NonPagedPoolNx, v9, 0x4F506152u, a1);
  v22 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v20);
  v22[11] = v65;
  *(_DWORD *)v22 = 3;
  *((_DWORD *)v22 + 24) = v4;
  v24 = *(_QWORD *)(a1 + 64);
  if ( !*(_DWORD *)v24 && ((a2[3] & 2) != 0 || (*(_BYTE *)(v24 + 108) & 0x40) != 0 && *(_DWORD *)(v24 + 5104) == -1) )
    v22[1] |= 0xFFEE000000000000uLL;
  v25 = 0;
  if ( v4 )
  {
    do
    {
      v26 = 7LL * v25;
      v27 = RaidGetStorPoFxComponent(a2, v25);
      v22[v26 + 17] = v29;
      v30 = v27;
      v31 = *((_DWORD *)v27 + 2);
      HIDWORD(v22[v26 + 16]) = v31;
      LODWORD(v22[v26 + 16]) = *((_DWORD *)v27 + 3);
      v32 = *((_OWORD *)v27 + 1);
      v22[v26 + 15] = 1LL;
      *(_OWORD *)&v22[v26 + 13] = v32;
      if ( (a2[3] & 0x100) != 0 )
        v22[v26 + 15] = 3LL;
      v33 = 0;
      if ( v31 <= 1 )
        v33 = v10;
      v34 = 0;
      v10 = v33;
      if ( v31 )
      {
        do
        {
          v35 = RaidGetStorPoFxFState(v30, v34++);
          *(_DWORD *)(v37 + 8 * v36 + 16) = *((_DWORD *)v35 + 6);
          *(_QWORD *)(v37 + 8 * v36 + 8) = *((_QWORD *)v35 + 2);
          *(_QWORD *)(v37 + 8 * v36) = *((_QWORD *)v35 + 1);
        }
        while ( v34 < HIDWORD(v22[v26 + 16]) );
      }
      v25 = v28 + 1;
    }
    while ( v25 < *((_DWORD *)v22 + 24) );
    v5 = v60;
  }
  v38 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v38 != 1 )
  {
    v39 = *(_QWORD *)(v38 + 32);
    if ( !v10 )
      v22[4] = StorPortAdapterIdleState;
    v40 = DFxEnabled == 0;
    v22[2] = StorPortAdapterActiveCondition;
    v22[3] = StorPortAdapterIdleCondition;
    v22[6] = StorPortAdapterPowerNotRequiredStep1;
    v22[5] = StorPortAdapterPowerRequiredStep1;
    v22[7] = StorPortAdapterPowerControl;
    if ( !v40 && (a2[3] & 3) == 0 )
    {
      v22[8] = StorPortAdapterDirectedPowerUp;
      v22[9] = StorPortAdapterDirectedPowerDown;
      if ( (a2[3] & 0x40) != 0 )
        v22[1] |= 6uLL;
      v41 = (_QWORD *)(v38 + 5872);
      v42 = (KSPIN_LOCK *)(v38 + 5896);
      goto LABEL_40;
    }
LABEL_41:
    v43 = 1;
    goto LABEL_42;
  }
  v39 = *(_QWORD *)(v38 + 8);
  if ( !v10 )
    v22[4] = StorPortUnitIdleState;
  v40 = DFxEnabled == 0;
  v22[2] = StorPortUnitActiveConditionStep1;
  v22[3] = StorPortUnitIdleCondition;
  v22[6] = StorPortUnitPowerNotRequiredStep1;
  v22[5] = StorPortUnitPowerRequiredStep1;
  v22[7] = StorPortUnitPowerControl;
  if ( v40 || (a2[3] & 3) != 0 )
    goto LABEL_41;
  v22[1] |= 6uLL;
  v22[8] = StorPortUnitDirectedPowerUp;
  v22[9] = StorPortUnitDirectedPowerDown;
  v41 = (_QWORD *)(v38 + 3320);
  v42 = (KSPIN_LOCK *)(v38 + 3344);
LABEL_40:
  v41[1] = v41;
  *v41 = v41;
  KeInitializeSpinLock(v42);
  v43 = v57;
LABEL_42:
  v44 = PoFxRegisterDevice(a1, v22, v64);
  ExFreePoolWithTag(v22, 0x4F506152u);
  if ( v44 >= 0 )
  {
    if ( v43 )
    {
      InputBuffer[0] = 58LL;
      InputBuffer[2] = 2LL;
      InputBuffer[1] = v39;
      ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x18u, 0LL, 0);
    }
    v46 = **(_DWORD **)(a1 + 64);
    if ( v46 == 1 )
    {
      v47 = 0;
      if ( (unsigned int)*a2 >= 2 )
        v47 = a2[4];
      if ( (unsigned int)dword_1C0068058 > 5 )
      {
        if ( tlgKeywordOn(v45, 0x400000000000LL) )
        {
          v52 = *(_QWORD *)(v49 + 24);
          v70 = 16LL;
          v72 = 16LL;
          v69 = v52 + 5192;
          v71 = (__int64 *)(v49 + 1976);
          v60 = *(_DWORD *)(v52 + 56);
          v73 = &v60;
          v57 = *(_BYTE *)(v49 + 96);
          v75 = &v57;
          v58 = *(_BYTE *)(v49 + 97);
          v77 = (int *)&v58;
          v59 = *(_BYTE *)(v49 + 98);
          v79 = (int *)&v59;
          v81 = &v66;
          v61 = a2[2];
          v83 = &v61;
          v85 = &v62;
          v63 = a2[3];
          v87 = &v63;
          v89 = &v64;
          v91 = &v65;
          v74 = 4LL;
          v76 = 1LL;
          v78 = 1LL;
          v80 = 1LL;
          v66 = v50;
          v82 = 4LL;
          v84 = 4LL;
          v62 = v5;
          v86 = 4LL;
          v88 = 4LL;
          LODWORD(v64) = v47;
          v90 = 4LL;
          LODWORD(v65) = v51;
          v92 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(v52, byte_1C005C16E, v48, v49, 0xEu, &v68);
        }
      }
    }
    else if ( !v46 && (unsigned int)dword_1C0068058 > 5 && tlgKeywordOn((unsigned int)*a2, 0x400000000000LL) )
    {
      v70 = 16LL;
      v69 = v55 + 5192;
      LODWORD(v65) = v53;
      v71 = &v65;
      LODWORD(v64) = a2[2];
      v73 = (unsigned int *)&v64;
      v75 = (char *)&v63;
      v62 = a2[3];
      v77 = &v62;
      v79 = &v61;
      v72 = 4LL;
      v74 = 4LL;
      v63 = v5;
      v76 = 4LL;
      v78 = 4LL;
      v61 = v56;
      v80 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v53, (unsigned __int8 *)dword_1C005C235, v54, v55, 8u, &v68);
    }
  }
  return (unsigned int)v44;
}
