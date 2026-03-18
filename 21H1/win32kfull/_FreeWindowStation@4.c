/*
 * XREFs of _FreeWindowStation@4 @ 0xAC9DA
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _ForceEmptyClipboard@4 @ 0xACADE (_ForceEmptyClipboard@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall FreeWindowStation(int *a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v4; // edi
  int v5; // esi
  _DWORD *v6; // ebx
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  _DWORD *v13; // [esp+14h] [ebp-4h]

  v1 = *a1;
  a1 = 0;
  v11 = v1;
  *(_DWORD *)(v1 + 32) |= 0x10u;
  v2 = *(_DWORD *)(v1 + 32);
  if ( *(_DWORD *)(v1 + 116) )
  {
    Win32FreePool(*(_DWORD *)(v1 + 116));
    *(_DWORD *)(v1 + 116) = 0;
    *(_DWORD *)(v1 + 112) = 0;
    v2 = *(_DWORD *)(v1 + 32);
  }
  if ( (v2 & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  if ( *(_DWORD *)(v1 + 88) )
    RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v1 + 88));
  ForceEmptyClipboard((PVOID)v1);
  while ( *(_DWORD *)(v1 + 80) )
  {
    a1 = *(int **)(v1 + 80);
    *(_DWORD *)(v1 + 80) = a1[35];
    a1[35] = 0;
    *(_DWORD *)(a1[5] + 144) &= ~1u;
    HMAssignmentUnlock(&a1);
  }
  if ( (*(_BYTE *)(v1 + 32) & 4) == 0 )
  {
    v4 = (_DWORD *)(v1 + 36);
    v5 = *(_DWORD *)(v1 + 36);
    v13 = (_DWORD *)(v1 + 36);
    if ( v5 )
    {
      v12 = *(_DWORD *)(v5 + 12);
      if ( v5 != v12 )
      {
        v6 = v13;
        do
        {
          v7 = *v6;
          HMMarkObjectDestroy(*v6);
          *(_DWORD *)(v7 + 16) |= 0x20000000u;
          HMAssignmentLock(v9, v8);
          v5 = *v6;
        }
        while ( *v6 != v12 );
        v1 = v11;
        v4 = v13;
      }
      HMMarkObjectDestroy(v5);
      *(_DWORD *)(v5 + 16) |= 0x20000000u;
      HMAssignmentUnlock(v4);
      _gdwHydraHint |= 0x10000u;
    }
  }
  if ( *(_DWORD *)(v1 + 108) )
  {
    Win32FreePool(*(_DWORD *)(v1 + 108));
    *(_DWORD *)(v1 + 108) = 0;
  }
  ExReleaseRundownProtection(_gWinstaRunRef);
  if ( !v10 )
    UserSessionSwitchLeaveCrit();
  return 0;
}
