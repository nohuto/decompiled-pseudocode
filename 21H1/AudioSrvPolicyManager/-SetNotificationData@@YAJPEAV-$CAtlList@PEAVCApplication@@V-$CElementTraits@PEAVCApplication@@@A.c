/*
 * XREFs of ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18002C014
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18002C20C (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180017FB8 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180018250 (-GetSmtcProcesses@CApplication@@QEAAJAEAV-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18001D884 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     memcpy_0 @ 0x1800406DB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetNotificationData(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  signed int SmtcProcesses; // ebx
  size_t v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r14
  _WORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  size_t v13; // r8
  __int64 v14; // rax
  size_t v15; // r12
  size_t v16; // rsi
  volatile signed __int32 *v17; // rdi
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h]
  int v22; // [rsp+48h] [rbp-8h]
  const void **v24; // [rsp+A8h] [rbp+58h]

  v3 = a3;
  SmtcProcesses = 0;
  v6 = 0LL;
  v7 = (_QWORD *)*a1;
LABEL_2:
  if ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    v24 = (const void **)v8;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 10;
    SmtcProcesses = CApplication::GetSmtcProcesses(v8, (__int64)&v19);
    if ( SmtcProcesses >= 0 )
    {
      v9 = (_QWORD *)v19;
      while ( 1 )
      {
        if ( !v9 )
        {
          ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v19);
          goto LABEL_2;
        }
        v10 = *(_WORD **)(v8 + 24);
        v11 = 0LL;
        if ( v10 )
        {
          v12 = 1024LL;
          do
          {
            if ( !*v10 )
              break;
            ++v10;
            --v12;
          }
          while ( v12 );
          SmtcProcesses = v12 == 0 ? 0x80070057 : 0;
          if ( v12 )
            v11 = 1024 - v12;
          else
            v11 = 0LL;
        }
        else
        {
          SmtcProcesses = -2147024809;
        }
        if ( SmtcProcesses < 0 )
          goto LABEL_26;
        v13 = 2 * v11 + 2;
        v14 = v6 + 4;
        if ( v6 + 4 > v3 )
          break;
        *(_DWORD *)(v6 + a2) = v13;
        v15 = v13 + v14;
        if ( v13 + v14 > v3 )
          break;
        memcpy_0((void *)(v14 + a2), v24[3], v13);
        v16 = v15 + 4;
        if ( v15 + 4 > a3 )
          break;
        v17 = (volatile signed __int32 *)v9[2];
        v9 = (_QWORD *)*v9;
        if ( !v17 )
        {
          SmtcProcesses = -2147418113;
          goto LABEL_26;
        }
        *(_DWORD *)(v15 + a2) = *((_DWORD *)v17 + 48);
        *(_DWORD *)(v16 + a2) = 0;
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, 0LL);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
        }
        v6 = v15 + 12;
        if ( v15 + 12 > a3 )
          break;
        v8 = (__int64)v24;
        *(_DWORD *)(v16 + a2 + 4) = CApplication::IsBackgroundAudioCapable((CApplication *)v24);
        v3 = a3;
      }
      SmtcProcesses = -2147024774;
    }
LABEL_26:
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v19);
  }
  return (unsigned int)SmtcProcesses;
}
