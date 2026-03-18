/*
 * XREFs of ProtectHandle @ 0x1C0036EB4
 * Callers:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00060C8 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0022550 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0036DD4 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0036F58 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00B2AA0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00BB158 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     NtMITInitMinuserThread @ 0x1C012D0E0 (NtMITInitMinuserThread.c)
 *     NtMITUninitMinuserThread @ 0x1C012EBF0 (NtMITUninitMinuserThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProtectHandle(void *a1, int a2, struct _OBJECT_TYPE *a3, char a4)
{
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  struct _OBJECT_HANDLE_INFORMATION v9; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v9 = 0LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 0x1F0003u, a3, 1, &Object, &v9);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = 1;
    BYTE1(v11) = a4;
    LOBYTE(v11) = (v9.HandleAttributes & 2) != 0;
    v6 = ObSetHandleAttributes(a1, &v11, v7);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
