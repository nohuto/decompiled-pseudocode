/*
 * XREFs of ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x18013BF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z @ 0x180136228 (--0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18013CF70 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x18013D318 (-_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveMode::CompleteInitialization(
        CImmersiveMode *this,
        struct IFallbackWindow *a2,
        __int64 (__fastcall ***a3)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  CImmersiveMode *v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v8; // r13d
  struct IFallbackWindow *v9; // rcx
  __int64 (__fastcall *v10)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  int v11; // ebx
  CMonitorNotificationHelper *v12; // rax
  CMonitorNotificationHelper *v13; // rax
  CMonitorNotificationHelper *v14; // rdi
  __int64 (__fastcall *v15)(struct IImmersiveMonitorManager *, __int64 *); // rbx
  unsigned int v16; // r14d
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **); // rdi
  LSTATUS ValueW; // eax
  signed int v20; // ecx
  bool v21; // zf
  char v22; // al
  __int64 v24; // [rsp+40h] [rbp-28h] BYREF
  __int64 v25[2]; // [rsp+48h] [rbp-20h] BYREF
  int v26; // [rsp+58h] [rbp-10h]
  struct IFallbackWindow *pvData; // [rsp+B0h] [rbp+48h] BYREF
  DWORD pdwType; // [rsp+B8h] [rbp+50h] BYREF
  struct IImmersiveMonitor *pcbData; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+60h] BYREF

  v6 = (CImmersiveMode *)((char *)this - 88);
  v7 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CImmersiveMode *)88));
  v25[1] = (__int64)v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v26 = v8;
  v9 = (struct IFallbackWindow *)*((_QWORD *)this + 32);
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IFallbackWindow *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = (struct IFallbackWindow *)*((_QWORD *)this + 32);
    }
    pvData = v9;
    *((_QWORD *)this + 32) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pvData);
  }
  v25[0] = 0LL;
  v10 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
  v11 = v10((struct IImmersiveMonitorManager *)a3, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v25);
  if ( v11 >= 0 )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v24 = 0LL;
    v12 = (CMonitorNotificationHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12
      && (v13 = CMonitorNotificationHelper::CMonitorNotificationHelper(
                  v12,
                  (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 48) & -(__int64)(v6 != 0LL))),
          (v14 = v13) != 0LL) )
    {
      v11 = (**(__int64 (__fastcall ***)(CMonitorNotificationHelper *, GUID *, __int64 *))v13)(
              v13,
              &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270,
              &v24);
      (*(void (__fastcall **)(CMonitorNotificationHelper *))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v25[0] + 24LL))(
                v25[0],
                v24,
                (char *)this + 272);
        if ( v11 >= 0 )
        {
          v11 = CImmersiveMode::_RegisterForLauncherVisibilityNotifications(v6);
          if ( v11 >= 0 )
          {
            v30 = 0LL;
            v15 = (__int64 (__fastcall *)(struct IImmersiveMonitorManager *, __int64 *))(*a3)[14];
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
            v11 = v15((struct IImmersiveMonitorManager *)a3, &v30);
            if ( v11 >= 0 )
            {
              v11 = (*(__int64 (__fastcall **)(__int64, struct IFallbackWindow **))(*(_QWORD *)v30 + 24LL))(
                      v30,
                      &pvData);
              if ( v11 >= 0 )
              {
                v16 = 0;
                do
                {
                  if ( v16 >= (unsigned int)pvData )
                    break;
                  pcbData = 0LL;
                  v17 = v30;
                  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v30 + 32LL);
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pcbData);
                  v11 = v18(v17, v16, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &pcbData);
                  if ( v11 >= 0 )
                  {
                    v11 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, DWORD *))(*(_QWORD *)pcbData + 48LL))(
                            pcbData,
                            &pdwType);
                    if ( v11 >= 0 )
                    {
                      if ( pdwType )
                        CImmersiveMode::_RegisterDesktopVisibilitySource(v6, pcbData);
                    }
                  }
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pcbData);
                  ++v16;
                }
                while ( v11 >= 0 );
              }
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          }
        }
      }
    }
    else
    {
      v11 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    if ( v11 >= 0 )
    {
      *((_BYTE *)this + 144) = 1;
      pdwType = 0;
      LODWORD(pcbData) = 4;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DAMVisibility",
                 L"Enabled",
                 0x10000012u,
                 &pdwType,
                 &pvData,
                 (LPDWORD)&pcbData);
      LOWORD(v20) = 13;
      if ( ValueW )
      {
        if ( ValueW == 234 )
          ValueW = 13;
        v20 = ValueW;
        if ( ValueW <= 0 )
          goto LABEL_35;
      }
      else if ( pdwType == 4 )
      {
        if ( (unsigned int)pvData <= 1 )
        {
          v20 = 0;
          v21 = (_DWORD)pvData == 1;
LABEL_27:
          v22 = v21;
          goto LABEL_36;
        }
      }
      else if ( (_DWORD)pcbData == 4 && (unsigned __int16)((_WORD)pvData - 48) <= 1u )
      {
        v20 = 0;
        v21 = (_WORD)pvData == 49;
        goto LABEL_27;
      }
      v20 = (unsigned __int16)v20 | 0x80070000;
LABEL_35:
      v22 = (char)pvData;
LABEL_36:
      if ( v20 >= 0 )
        *((_BYTE *)this + 144) = v22;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v11;
}
