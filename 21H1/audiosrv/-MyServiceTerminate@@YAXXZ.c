/*
 * XREFs of ?MyServiceTerminate@@YAXXZ @ 0x1801162B4
 * Callers:
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180115D00 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Terminate@CAudioThreadPool@@QEAAJXZ @ 0x180105C30 (-Terminate@CAudioThreadPool@@QEAAJXZ.c)
 *     McGenEventUnregister_EtwEventUnregister @ 0x180116644 (McGenEventUnregister_EtwEventUnregister.c)
 */

void MyServiceTerminate(void)
{
  bool v0; // bl
  unsigned __int64 v1; // rcx
  HANDLE v2; // rax
  CAudioThreadPool *v3; // rcx

  v0 = CoInitializeEx(0LL, 0) >= 0;
  (*(void (**)(void))(*(_QWORD *)g_AudioService + 24LL))();
  v1 = g_AudioService;
  if ( *(_QWORD *)(g_AudioService + 8) )
  {
    CM_Unregister_Notification(*(_QWORD *)(g_AudioService + 8));
    v1 = g_AudioService;
    *(_QWORD *)(g_AudioService + 8) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 16) )
  {
    CM_Unregister_Notification(*(_QWORD *)(v1 + 16));
    v1 = g_AudioService;
    *(_QWORD *)(g_AudioService + 16) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 24) )
  {
    CM_Unregister_Notification(*(_QWORD *)(v1 + 24));
    v1 = g_AudioService;
    *(_QWORD *)(g_AudioService + 24) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 40) )
  {
    PowerSettingUnregisterNotification(*(HPOWERNOTIFY *)(v1 + 40));
    v1 = g_AudioService;
    *(_QWORD *)(g_AudioService + 40) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 32) )
  {
    PowerSettingUnregisterNotification(*(HPOWERNOTIFY *)(v1 + 32));
    v1 = g_AudioService;
    *(_QWORD *)(g_AudioService + 32) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 48) )
  {
    PowerSettingUnregisterNotification(*(HPOWERNOTIFY *)(v1 + 48));
    v1 = g_AudioService;
    *(_QWORD *)(g_AudioService + 48) = 0LL;
  }
  v2 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v2 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v2, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
    v1 = g_AudioService;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v1 + 32LL))(v1);
  if ( *(_QWORD *)&g_DeviceEnumerator )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    *(_QWORD *)&g_DeviceEnumerator = 0LL;
  }
  CleanupDeviceAPI();
  if ( ThreadPool )
  {
    CAudioThreadPool::Terminate(v3);
    if ( ThreadPool )
      (**(void (__fastcall ***)(struct CAudioThreadPool *, __int64))ThreadPool)(ThreadPool, 1LL);
  }
  ThreadPool = 0LL;
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  if ( g_AudioService )
    (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService, 1LL);
  g_AudioService = 0LL;
  McGenEventUnregister_EtwEventUnregister();
  if ( v0 )
    CoUninitialize();
}
