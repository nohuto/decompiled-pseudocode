/*
 * XREFs of ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14004EB94
 * Callers:
 *     ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14004ED60 (-GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProt.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400477C0 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::GetOta(
        CStreamInstance *this,
        int a2,
        struct IAudioProtectedOutputController *a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  char *v10; // rdi
  struct IAudioVirtualProtectedOutput *v11; // rbx
  bool v12; // zf
  int v13; // eax
  CPipeInstance *v14; // rcx
  int PlaybackProtectionApo; // eax
  struct IAudioVirtualProtectedOutput *v16; // rcx
  int v17; // eax
  struct IAudioProcessingObject *v19; // [rsp+20h] [rbp-18h] BYREF
  struct IAudioVirtualProtectedOutput *v20; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v20 = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 != 3 )
    {
      v7 = -2147467263;
      v8 = 2147500033LL;
      v9 = 198LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v8);
      goto LABEL_26;
    }
    v10 = (char *)this + 32;
    v11 = (struct IAudioVirtualProtectedOutput *)*((_QWORD *)this + 4);
    v12 = v11 == 0LL;
    if ( !v11 )
    {
      *(_QWORD *)v10 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, char *))(*(_QWORD *)a3 + 24LL))(
              a3,
              0LL,
              (char *)this + 32);
      v7 = v13;
      if ( v13 < 0 )
      {
        v8 = (unsigned int)v13;
        v9 = 192LL;
        goto LABEL_4;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v10 = (char *)this + 24;
    v11 = (struct IAudioVirtualProtectedOutput *)*((_QWORD *)this + 3);
    v12 = v11 == 0LL;
    if ( !v11 )
    {
      v19 = 0LL;
      v14 = *(CPipeInstance **)this;
      if ( v14 )
      {
        v19 = 0LL;
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v14, &v19);
      }
      else
      {
        PlaybackProtectionApo = 0;
      }
      if ( PlaybackProtectionApo < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xAu,
          (__int64)&WPP_d9cb5739874235858bca74b3bf42f8f7_Traceguids,
          PlaybackProtectionApo);
      }
      v16 = *(struct IAudioVirtualProtectedOutput **)v10;
      *(_QWORD *)v10 = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v16 + 16LL))(v16);
      v17 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, char *))(*(_QWORD *)a3 + 24LL))(
              a3,
              v19,
              v10);
      v7 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v17);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v19);
        goto LABEL_26;
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v19);
LABEL_22:
      v11 = *(struct IAudioVirtualProtectedOutput **)v10;
      v12 = *(_QWORD *)v10 == 0LL;
    }
  }
  v20 = v11;
  if ( !v12 )
    (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v11 + 8LL))(v11);
  v20 = 0LL;
  *a4 = v11;
  v7 = 0;
LABEL_26:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v20);
  return v7;
}
