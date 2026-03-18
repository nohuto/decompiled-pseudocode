/*
 * XREFs of DestroyMonitor @ 0x1C0057330
 * Callers:
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C00A9FC8 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C00571D0 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1C0057284 (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMFreeObject @ 0x1C0070730 (HMFreeObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ApiSetEditionUpdateCursorSizes @ 0x1C00AABA8 (ApiSetEditionUpdateCursorSizes.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C015C390 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
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
  __int64 result; // rax
  HBRUSH v12; // rcx
  unsigned int v13; // esi
  HBRUSH *v14; // rdi
  struct tagMONITOR **i; // rcx
  struct tagMONITOR *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  signed __int32 v19[8]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF
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
      for ( i = (struct tagMONITOR **)((char *)v3 + 56); ; i = (struct tagMONITOR **)((char *)v16 + 56) )
      {
        v16 = *i;
        if ( !*i )
          break;
        if ( v16 == a1 )
        {
          v17 = *((_QWORD *)a1 + 7);
          if ( v17 )
            v18 = *(_QWORD *)(v17 + 48);
          else
            v18 = 0LL;
          *((_QWORD *)*(i - 2) + 2) = v18;
          *i = (struct tagMONITOR *)v17;
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
      Win32FreePool(v10);
    *((_QWORD *)a1 + 39) = 0LL;
  }
  ApiSetEditionUpdateCursorSizes();
  _InterlockedOr(v19, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor((__int64)a1);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v20);
  result = HMMarkObjectDestroyWorker(a1);
  if ( (_DWORD)result )
  {
    v12 = (HBRUSH)*((_QWORD *)a1 + 9);
    if ( v12 )
    {
      GreDeleteObject(v12);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    v13 = 0;
    v14 = (HBRUSH *)((char *)a1 + 80);
    do
    {
      if ( *v14 )
      {
        GreDeleteObject(*v14);
        *v14 = 0LL;
      }
      ++v13;
      ++v14;
    }
    while ( v13 < 0x12 );
    return HMFreeObject(a1);
  }
  return result;
}
