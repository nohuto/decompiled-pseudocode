/*
 * XREFs of ?xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z @ 0xA9B34
 * Callers:
 *     _EditionParseDesktop@40 @ 0xF19B0 (_EditionParseDesktop@40.c)
 * Callees:
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?CalcDesktopId@@YGKPAUtagDESKTOP@@@Z @ 0xA9DD4 (-CalcDesktopId@@YGKPAUtagDESKTOP@@@Z.c)
 *     _CreateDesktopHeap@8 @ 0xA9E00 (_CreateDesktopHeap@8.c)
 *     _GetDesktopHeapSize@4 @ 0xA9ECC (_GetDesktopHeapSize@4.c)
 */

int __userpurge xxxCreateDesktopEx2@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWINDOWSTATION *a3,
        struct _ACCESS_STATE *a4,
        int a5,
        struct _UNICODE_STRING *a6,
        unsigned int a7,
        void **a8)
{
  __int16 v9; // bx
  struct _KPROCESS *CurrentProcess; // eax
  int result; // eax
  PVOID v13; // eax
  unsigned int DesktopHeapSize; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int DesktopHeap; // eax
  PKTHREAD v18; // eax
  int v19; // eax
  PVOID v20; // ebx
  PKTHREAD v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  unsigned int v26; // eax
  DWORD *v27; // esi
  int v28; // eax
  PVOID v29; // ecx
  bool v30; // zf
  __int16 v31; // [esp-4h] [ebp-28h]
  struct tagDESKTOP *v32; // [esp+0h] [ebp-24h]
  int v33; // [esp+Ch] [ebp-18h] BYREF
  int v34; // [esp+10h] [ebp-14h]
  int v35; // [esp+14h] [ebp-10h]
  int v36; // [esp+18h] [ebp-Ch] BYREF
  PVOID Object; // [esp+1Ch] [ebp-8h] BYREF
  char v38; // [esp+23h] [ebp-1h]

  Object = 0;
  v9 = 0;
  v36 = 0;
  v38 = 0;
  v35 = a1;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(a2, 8, a1, a4, 1, a3, &v36) )
    return v36;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
  if ( (*(_BYTE *)(a2 + 32) & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)_gpidLogon )
  {
    v33 = 0;
    v34 = 0;
    GetProcessLuid(0, &v33);
    if ( v33 == *(_DWORD *)(a2 + 92) && v34 == *(_DWORD *)(a2 + 96) )
      return -1073741205;
  }
  result = CreateDesktopObObject(a4, a2, a1, &Object);
  v36 = result;
  if ( result < 0 )
    return result;
  if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
  {
    v31 = 3;
LABEL_16:
    v9 = v31;
    goto LABEL_17;
  }
  v13 = *(PVOID *)(a2 + 8);
  if ( v13 )
  {
    if ( gspdeskDisconnect )
    {
      if ( v13 == gspdeskDisconnect )
        v38 = 1;
      goto LABEL_17;
    }
    v31 = 2;
    goto LABEL_16;
  }
  v9 = 1;
LABEL_17:
  if ( a5 )
    DesktopHeapSize = a5 << 10;
  else
    DesktopHeapSize = GetDesktopHeapSize(v9);
  if ( DesktopHeapSize < 0x1000 )
    DesktopHeapSize = 4096;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  *(_DWORD *)(ThreadWin32Thread + 688) |= 0x40u;
  DesktopHeap = CreateDesktopHeap((char *)Object + 64, DesktopHeapSize);
  *((_DWORD *)Object + 15) = DesktopHeap;
  if ( !*((_DWORD *)Object + 15) )
  {
    if ( (*_gpsi & 0x100) != 0 )
    {
      _InterlockedAnd(_gpsi, 0xFFFFFEFF);
      UserLogError(-2147483404);
    }
    goto LABEL_25;
  }
  *((_DWORD *)Object + 17) = DesktopHeapSize;
  v20 = DesktopAlloc((int)Object, 0x24u, 2);
  if ( !v20 )
  {
LABEL_25:
    v18 = KeGetCurrentThread();
    v19 = W32GetThreadWin32Thread(v18);
    *(_DWORD *)(v19 + 688) &= ~0x40u;
    v36 = -1073741801;
    ObfDereferenceObject(Object);
    return v36;
  }
  v21 = KeGetCurrentThread();
  v22 = W32GetThreadWin32Thread(v21);
  *(_DWORD *)(v22 + 688) &= ~0x40u;
  v23 = (_DWORD *)Win32AllocPoolZInit(128, 1684763477);
  if ( !v23 )
  {
    RtlFreeHeap(*((PVOID *)Object + 16), 0, v20);
    goto LABEL_25;
  }
  *v23 = v20;
  *((_DWORD *)Object + 1) = v23;
  v24 = (char *)Object + 92;
  *((_DWORD *)Object + 24) = (char *)Object + 92;
  *v24 = v24;
  v25 = (char *)Object + 192;
  *((_DWORD *)Object + 49) = (char *)Object + 192;
  *v25 = v25;
  v26 = CalcDesktopId(v32);
  ***((_DWORD ***)Object + 1) = v26;
  *((_DWORD *)Object + 2) = *((_DWORD *)Object + 16);
  *((_DWORD *)Object + 3) = DesktopHeapSize + *((_DWORD *)Object + 2);
  LockObjectAssignment((char *)Object + 20, a2);
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( (*(_BYTE *)(a2 + 32) & 4) == 0 )
      LockObjectAssignment(&grpdeskLogon, Object);
    LockObjectAssignment(*(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) + 12, Object);
  }
  LockObjectAssignment((char *)Object + 16, *(_DWORD *)(a2 + 8));
  LockObjectAssignment(a2 + 8, Object);
  v27 = (DWORD *)(v35 + 16);
  v28 = *(_DWORD *)(v35 + 16);
  if ( (v28 & 0x2000000) != 0 )
    *v27 = v28 & 0xEDFFFFFF | 0x10000000;
  RtlMapGenericMask(v27, _DesktopMapping[0]);
  v29 = Object;
  *v27 &= (unsigned int)_DesktopMapping[3] | 0x1000000;
  v30 = v38 == 0;
  *(_DWORD *)&a6->Length = v29;
  if ( !v30 )
    LockObjectAssignment(_grpdeskIODefault, v29);
  return 0;
}
