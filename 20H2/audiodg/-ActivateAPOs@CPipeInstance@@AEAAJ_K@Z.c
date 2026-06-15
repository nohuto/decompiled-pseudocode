/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140008750
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400083E0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E30 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x14000B080 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140044638 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x140047B54 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  __int64 v4; // rdi
  HRESULT v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD); // rax
  int v10; // r12d
  unsigned int v11; // esi
  __int64 v13; // r14
  int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  int ppv; // [rsp+20h] [rbp-C8h]
  int ppva; // [rsp+20h] [rbp-C8h]
  char *v22; // [rsp+28h] [rbp-C0h]
  int v23; // [rsp+30h] [rbp-B8h]
  int v24; // [rsp+38h] [rbp-B0h]
  int v25; // [rsp+40h] [rbp-A8h]
  int v26; // [rsp+48h] [rbp-A0h]
  int v27; // [rsp+50h] [rbp-98h]
  int v28; // [rsp+58h] [rbp-90h]
  int v29; // [rsp+60h] [rbp-88h]
  int v30; // [rsp+68h] [rbp-80h]
  int v31; // [rsp+70h] [rbp-78h]
  int v32; // [rsp+78h] [rbp-70h]
  __int64 v33; // [rsp+80h] [rbp-68h] BYREF
  __int64 *v34; // [rsp+88h] [rbp-60h]
  CPipeInstance *v35; // [rsp+90h] [rbp-58h]
  __int64 v36; // [rsp+98h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v38; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v39; // [rsp+100h] [rbp+18h] BYREF
  LPVOID v40; // [rsp+108h] [rbp+20h] BYREF

  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_DWORD *)(v6 + 40) == 2 )
      break;
LABEL_11:
    if ( !v4 )
      return 0LL;
  }
  v38 = *(_QWORD *)(v6 + 32);
  v34 = &v38;
  v35 = this;
  LOBYTE(v36) = 1;
  v7 = *(_QWORD *)(v38 + 40);
  v33 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_QWORD *)this + 19);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 56LL);
  if ( *((_DWORD *)this + 3) == 1 )
  {
    ppv = 1;
    v10 = v9(v8, a2, v7, 0LL);
    if ( v10 < 0 )
    {
      v16 = v38;
      v32 = *(unsigned __int8 *)(v38 + 23);
      v31 = *(unsigned __int8 *)(v38 + 22);
      v17 = 3041LL;
      goto LABEL_27;
    }
    goto LABEL_8;
  }
  ppv = 0;
  v10 = v9(v8, a2, v7, 0LL);
  if ( v10 >= 0 )
  {
LABEL_8:
    v11 = *(_DWORD *)(v38 + 4);
    if ( v11 )
    {
      v13 = *((_QWORD *)this + 24);
      v14 = v38 + 8;
      v40 = 0LL;
      v39 = 0LL;
      if ( (unsigned int)GetClassFromEndpointId(v13) != 3 )
      {
        v5 = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &v40);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v40 + 40LL))(v40, v13, &v39);
          if ( v5 >= 0 )
          {
            ppv = v14;
            LOBYTE(v15) = 1;
            v5 = TrackSystemEffectBehavior(v39, v11, v15, 0LL);
          }
        }
      }
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      if ( v40 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v40 + 16LL))(v40);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBED,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v5,
          ppv);
      v5 = 0;
    }
    LOBYTE(v36) = 0;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_11;
  }
  v16 = v38;
  v32 = *(unsigned __int8 *)(v38 + 23);
  v31 = *(unsigned __int8 *)(v38 + 22);
  v17 = 3046LL;
LABEL_27:
  v30 = *(unsigned __int8 *)(v16 + 21);
  v29 = *(unsigned __int8 *)(v16 + 20);
  v28 = *(unsigned __int8 *)(v16 + 19);
  v27 = *(unsigned __int8 *)(v16 + 18);
  v26 = *(unsigned __int8 *)(v16 + 17);
  v25 = *(unsigned __int8 *)(v16 + 16);
  v24 = *(unsigned __int16 *)(v16 + 14);
  v23 = *(unsigned __int16 *)(v16 + 12);
  LODWORD(v22) = *(_DWORD *)(v16 + 8);
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)v17,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v10,
    (int)"Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v33);
  v18 = *(unsigned int *)(v38 + 4);
  if ( (_DWORD)v18 )
  {
    v19 = TrackSystemEffectBehavior(*((_QWORD *)this + 24), v18, 0LL, 0LL, v38 + 8, LODWORD(FLOAT_1_0));
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBD7,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v19,
        ppva);
  }
  return (unsigned int)v10;
}
