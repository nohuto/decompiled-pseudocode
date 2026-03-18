/*
 * XREFs of _zzzSetDesktop@12 @ 0x6EDEC
 * Callers:
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _GetJournallingQueue@4 @ 0x6F3E4 (_GetJournallingQueue@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _CheckHandleFlag@16 @ 0x6F9E4 (_CheckHandleFlag@16.c)
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall zzzSetDesktop(_DWORD *Object, int a2, _DWORD *Handle)
{
  int v3; // esi
  _DWORD *v4; // ebx
  HANDLE v5; // ecx
  PVOID *v6; // esi
  _DWORD *v7; // esi
  int i; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // edx
  _DWORD *Heap; // edx
  int DesktopView; // eax
  int v15; // edx
  _DWORD *v16; // edi
  int v17; // edx
  int JournallingQueue; // eax
  int v20; // esi
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // edx
  _BYTE v24[12]; // [esp+10h] [ebp-4Ch] BYREF
  _OBJECT_HANDLE_INFORMATION HandleInformation; // [esp+1Ch] [ebp-40h] BYREF
  PVOID *v26; // [esp+3Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  memset(v24, 0, sizeof(v24));
  v3 = a2;
  if ( a2 && (*(_BYTE *)(a2 + 24) & 6) != 0 )
  {
    v4 = Object;
    if ( a2 != Object[62] && Object != (_DWORD *)_gTermIO[2] )
      return -1073741790;
  }
  else
  {
    v4 = Object;
  }
  v4[66] &= ~0x400000u;
  v5 = Handle;
  v4[79] = Handle;
  if ( v5
    && (HandleInformation.HandleAttributes = 0,
        HandleInformation.GrantedAccess = 0,
        Object = 0,
        ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, &HandleInformation) >= 0) )
  {
    ObfDereferenceObject(Object);
    v4[124] = HandleInformation.GrantedAccess;
    if ( CheckHandleFlag(Handle, 0) )
      v4[66] |= 0x400000u;
    if ( !SetHandleFlag(Handle, 1, 1) )
      return -1073741801;
  }
  else
  {
    v4[124] = 0;
  }
  if ( v3 && v3 == v4[62] )
    return 0;
  v6 = (PVOID *)v4[62];
  v26 = v6;
  PushW32ThreadLock(v6, v24, UserDereferenceObject);
  if ( v6 )
    ObfReferenceObject(v6);
  Handle = (_DWORD *)v4[61];
  if ( v4[62] )
  {
    v20 = v4[101];
    v21 = (_DWORD *)v4[102];
    if ( *(_DWORD **)(v20 + 4) != v4 + 101 || (_DWORD *)*v21 != v4 + 101 )
      goto LABEL_46;
    *v21 = v20;
    *(_DWORD *)(v20 + 4) = v21;
  }
  v7 = v4 + 54;
  for ( i = 3; i; --i )
    ++v7;
  v9 = a2;
  LockObjectAssignment(v4 + 62, a2);
  if ( !v9 )
  {
    v4[63] = _gpkdiStatic;
    goto LABEL_40;
  }
  v4[63] = *(_DWORD *)(v9 + 4);
  v10 = v4 + 101;
  v11 = (_DWORD *)(v9 + 92);
  v12 = *(_DWORD *)(v9 + 92);
  if ( *(_DWORD *)(v12 + 4) != v9 + 92 )
LABEL_46:
    __fastfail(3u);
  *v10 = v12;
  v4[102] = v11;
  *(_DWORD *)(v12 + 4) = v10;
  *v11 = v10;
  Heap = RtlAllocateHeap(*(PVOID *)(v9 + 64), 0, 0x18u);
  v4[61] = Heap;
  if ( !Heap )
  {
LABEL_40:
    Heap = v4 + 144;
    v4[61] = v4 + 144;
  }
  if ( Handle )
  {
    if ( Handle != Heap )
    {
      qmemcpy(Heap, Handle, 0x18u);
      v9 = a2;
    }
    if ( Handle != v4 + 144 )
      RtlFreeHeap(v26[16], 0, Handle);
  }
  else
  {
    memset(Heap, 0, 0x18u);
  }
  if ( v9 && (DesktopView = GetDesktopView(v4[58], v9)) != 0 )
  {
    v15 = *(_DWORD *)(v9 + 8) - *(_DWORD *)(DesktopView + 8);
    v4[64] = v15;
    ms_exc.registration.TryLevel = 0;
    *(_DWORD *)(v4[65] + 24) = *(_DWORD *)v4[63] - v15;
    *(_DWORD *)(v4[65] + 28) = *(_DWORD *)(DesktopView + 8);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v4[64] = 0;
    ms_exc.registration.TryLevel = 1;
    *(_DWORD *)(v4[65] + 24) = 0;
    *(_DWORD *)(v4[65] + 28) = 0;
    ms_exc.registration.TryLevel = -2;
    v22 = (_gdwGTERMFlags & 1) - 1;
    v4[103] = v22;
    v23 = v4[59];
    if ( v23 )
      *(_DWORD *)(v23 + 280) = v22;
  }
  ms_exc.registration.TryLevel = 2;
  v16 = (_DWORD *)v4[61];
  v17 = v4[65];
  if ( v16 == v4 + 144 )
    *(_DWORD *)(v17 + 60) = 0;
  else
    *(_DWORD *)(v17 + 60) = (char *)v16 - v4[64];
  ms_exc.registration.TryLevel = -2;
  if ( v4[59] )
  {
    JournallingQueue = GetJournallingQueue(v4);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 288);
      zzzAttachToQueue(v4, JournallingQueue, 0, 0);
    }
  }
  PopAndFreeW32ThreadLock((int)v24);
  return 0;
}
