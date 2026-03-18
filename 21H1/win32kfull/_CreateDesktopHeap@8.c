/*
 * XREFs of _CreateDesktopHeap@8 @ 0xA9E00
 * Callers:
 *     ?xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z @ 0xA9B34 (-xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _Win32CreateSection@36 @ 0xA9E8E (_Win32CreateSection@36.c)
 */

PVOID __fastcall CreateDesktopHeap(_DWORD *a1, unsigned int a2)
{
  NTSTATUS v4; // eax
  int v5; // eax
  int Heap; // eax
  struct _NT_TIB *v8; // eax
  struct _NT_TIB *v9; // eax
  int v10; // [esp-Ch] [ebp-2Ch]
  int v11; // [esp-8h] [ebp-28h]
  int v12; // [esp-4h] [ebp-24h]
  __int64 v13; // [esp+Ch] [ebp-14h] BYREF
  ULONG_PTR ViewSize; // [esp+14h] [ebp-Ch] BYREF
  PVOID MappedBase; // [esp+18h] [ebp-8h] BYREF
  PVOID Section; // [esp+1Ch] [ebp-4h]

  Section = 0;
  v13 = a2 + 4096LL;
  v4 = Win32CreateSection(a1, &v13, a1, 0x4000000, v10, v11, v12);
  if ( v4 < 0 )
  {
    v8 = (struct _NT_TIB *)RtlNtStatusToDosError(v4);
    UserSetLastError(v8);
  }
  else
  {
    ViewSize = a2 + 4096;
    MappedBase = 0;
    v5 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v5 < 0 )
    {
      v9 = (struct _NT_TIB *)RtlNtStatusToDosError(v5);
      UserSetLastError(v9);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0, MappedBase, a2, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError((struct _NT_TIB *)8);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0;
  }
  return 0;
}
