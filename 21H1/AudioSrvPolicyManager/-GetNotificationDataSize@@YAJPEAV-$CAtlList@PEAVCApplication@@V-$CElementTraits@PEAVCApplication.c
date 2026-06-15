/*
 * XREFs of ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x18002BE64
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18002C20C (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180018250 (-GetSmtcProcesses@CApplication@@QEAAJAEAV-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18001D884 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetNotificationDataSize(_QWORD *a1, unsigned __int64 *a2)
{
  signed int SmtcProcesses; // ebx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // r13
  _QWORD *v7; // rsi
  _WORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  volatile signed __int32 *v14; // rbx
  unsigned __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h]
  int v20; // [rsp+48h] [rbp-8h]

  SmtcProcesses = 0;
  v4 = 0LL;
  v5 = (_QWORD *)*a1;
LABEL_2:
  if ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 10;
    SmtcProcesses = CApplication::GetSmtcProcesses(v6, (__int64)&v17);
    if ( SmtcProcesses >= 0 )
    {
      v7 = (_QWORD *)v17;
      while ( 1 )
      {
        if ( !v7 )
        {
          ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v17);
          goto LABEL_2;
        }
        v8 = *(_WORD **)(v6 + 24);
        v9 = 0LL;
        if ( v8 )
        {
          v10 = 1024LL;
          do
          {
            if ( !*v8 )
              break;
            ++v8;
            --v10;
          }
          while ( v10 );
          SmtcProcesses = v10 == 0 ? 0x80070057 : 0;
          if ( v10 )
            v9 = 1024 - v10;
          else
            v9 = 0LL;
        }
        else
        {
          SmtcProcesses = -2147024809;
        }
        if ( SmtcProcesses < 0 )
          v11 = 0LL;
        else
          v11 = 2 * v9;
        if ( SmtcProcesses < 0 )
          goto LABEL_29;
        v12 = v4 + v11 + 2;
        if ( v12 < v4 )
          break;
        v13 = v12 + 4;
        if ( v12 + 4 < v12 )
          break;
        v14 = (volatile signed __int32 *)v7[2];
        v7 = (_QWORD *)*v7;
        if ( v14 && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, _WORD *))(*(_QWORD *)v14 + 32LL))(v14, v8);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
        }
        v15 = v13 + 4;
        if ( v13 + 4 < v13 )
          break;
        if ( v13 + 8 < v13 + 4 )
          break;
        v4 = v13 + 12;
        if ( v15 + 8 < v15 + 4 )
          break;
        SmtcProcesses = 0;
      }
      SmtcProcesses = -2147024362;
    }
LABEL_29:
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v17);
  }
  else
  {
    *a2 = v4;
  }
  return (unsigned int)SmtcProcesses;
}
