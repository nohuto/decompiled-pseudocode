/*
 * XREFs of ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400084F0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400083B0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CConnectionInstance::AddRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 *v8; // rbx
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 *v19; // rcx
  _QWORD *v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v30; // [rsp+50h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
  {
    if ( !*((_QWORD *)this + 3) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)0x887C003CLL,
        v28);
      return 2289827900LL;
    }
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(v6 + 40);
  if ( v7 == 2 )
  {
    v8 = *(__int64 **)(*(_QWORD *)(v6 + 32) + 40LL);
    v30 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64 *))(*v8 + 8))(v8);
    v9 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 72LL))(
           a2,
           a3,
           v8,
           *((_QWORD *)this + 1));
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x159,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)(unsigned int)v9,
        v28);
      if ( v8 )
        (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      return v10;
    }
    if ( v8 )
    {
      v11 = *v8;
      v12 = v8;
LABEL_8:
      (*(void (__fastcall **)(__int64 *))(v11 + 16))(v12);
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)0x887C003CLL,
      v28);
    return 2289827900LL;
  }
  v21 = *(_QWORD **)(v6 + 32);
  v30 = 0LL;
  v22 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*v21)(
          *v21,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v30);
  v23 = v22;
  if ( v22 < 0 )
  {
    v26 = 356LL;
    goto LABEL_36;
  }
  v22 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 112LL))(
          a2,
          a3,
          *((_QWORD *)this + 1),
          v30);
  v23 = v22;
  if ( v22 < 0 )
  {
    v26 = 357LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v22,
      v28);
    if ( v30 )
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
    return v23;
  }
  v12 = v30;
  if ( v30 )
  {
    v11 = *v30;
    goto LABEL_8;
  }
LABEL_9:
  v13 = *((_QWORD *)this + 3);
  if ( !v13 )
    return 0LL;
  v14 = *(_DWORD *)(v13 + 40);
  if ( v14 != 2 )
  {
    if ( ((v14 - 1) & 0xFFFFFFFD) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x187,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)0x887C003CLL,
        v28);
      return 2289827900LL;
    }
    v24 = *(_QWORD **)(v13 + 32);
    v30 = 0LL;
    v25 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*v24)(
            *v24,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v30);
    v23 = v25;
    if ( v25 < 0 )
    {
      v27 = 386LL;
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 104LL))(
              a2,
              a3,
              *((_QWORD *)this + 1),
              v30);
      v23 = v25;
      if ( v25 >= 0 )
      {
        v19 = v30;
        if ( !v30 )
          return 0LL;
        v18 = *v30;
        goto LABEL_16;
      }
      v27 = 387LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v25,
      v28);
    if ( v30 )
    {
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
      return v23;
    }
    return v23;
  }
  v15 = *(__int64 **)(*(_QWORD *)(v13 + 32) + 40LL);
  v30 = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64 *))(*v15 + 8))(v15);
  v16 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 88LL))(
          a2,
          a3,
          v15,
          *((_QWORD *)this + 1));
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( v15 )
    {
      v18 = *v15;
      v19 = v15;
LABEL_16:
      (*(void (__fastcall **)(__int64 *))(v18 + 16))(v19);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)(unsigned int)v16,
    v28);
  if ( v15 )
    (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  return v17;
}
