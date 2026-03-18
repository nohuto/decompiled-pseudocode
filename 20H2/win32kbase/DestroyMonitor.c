/*
 * XREFs of DestroyMonitor @ 0x1C00B4360
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 * Callees:
 *     ApiSetEditionUpdateCursorSizes @ 0x1C00207C8 (ApiSetEditionUpdateCursorSizes.c)
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0021884 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1C00B44BC (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C00B4570 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0153AE0 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *a1)
{
  __int64 v2; // rax
  struct tagMONITOR *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rdx
  struct HOBJ__ *v16; // rcx
  unsigned int v17; // esi
  struct HOBJ__ **v18; // rdi
  void **i; // rcx
  struct tagMONITOR *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r8
  signed __int32 v23[8]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (int)CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle) >= 0 )
  {
    rimOnCheckPointerDeviceMonitors(Handle, a1);
    ZwClose(Handle);
  }
  if ( a1 == (struct tagMONITOR *)gpMonitorMouse )
    gpMonitorMouse = 0LL;
  v2 = gpDispInfo;
  v3 = *(struct tagMONITOR **)(gpDispInfo + 104);
  if ( v3 )
  {
    if ( v3 == a1 )
    {
      v4 = *((_QWORD *)a1 + 7);
      if ( v4 )
        v5 = *(_QWORD *)(v4 + 48);
      else
        v5 = 0LL;
      *(_QWORD *)(*(_QWORD *)gpDispInfo + 16LL) = v5;
      *(_QWORD *)(v2 + 104) = v4;
    }
    else
    {
      for ( i = (void **)((char *)v3 + 56); ; i = (void **)((char *)v20 + 56) )
      {
        v20 = (struct tagMONITOR *)*i;
        if ( !*i )
          break;
        if ( v20 == a1 )
        {
          v21 = (_QWORD *)*((_QWORD *)a1 + 7);
          if ( v21 )
            v22 = v21[6];
          else
            v22 = 0LL;
          *((_QWORD *)*(i - 2) + 2) = v22;
          *i = v21;
          break;
        }
      }
    }
  }
  v6 = gpDispInfo;
  if ( a1 == *(struct tagMONITOR **)(gpDispInfo + 96) )
  {
    v7 = *(_QWORD *)(gpDispInfo + 104);
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 48);
    else
      v8 = 0LL;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = v8;
    *(_QWORD *)(v6 + 96) = v7;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  v9 = (_DWORD *)*((_QWORD *)a1 + 39);
  if ( v9 )
  {
    --*v9;
    v10 = (_DWORD *)*((_QWORD *)a1 + 39);
    if ( !*v10 )
      Win32FreePool((__int64)v10);
    *((_QWORD *)a1 + 39) = 0LL;
  }
  ApiSetEditionUpdateCursorSizes();
  _InterlockedOr(v23, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(a1);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v24,
    v11,
    v12,
    v13);
  result = HMMarkObjectDestroyWorker(a1);
  if ( (_DWORD)result )
  {
    v16 = (struct HOBJ__ *)*((_QWORD *)a1 + 9);
    if ( v16 )
    {
      GreDeleteObject(v16, v15);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    v17 = 0;
    v18 = (struct HOBJ__ **)((char *)a1 + 80);
    do
    {
      if ( *v18 )
      {
        GreDeleteObject(*v18, v15);
        *v18 = 0LL;
      }
      ++v17;
      ++v18;
    }
    while ( v17 < 0x12 );
    return HMFreeObject(a1);
  }
  return result;
}
