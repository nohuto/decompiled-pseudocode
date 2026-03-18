/*
 * XREFs of _FreeDesktop@4 @ 0x821E8
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     ?FreeView@@YGXPAU_EPROCESS@@PAUtagDESKTOP@@@Z @ 0x8237C (-FreeView@@YGXPAU_EPROCESS@@PAUtagDESKTOP@@@Z.c)
 *     _CleanupIAMAccess@4 @ 0xAC54A (_CleanupIAMAccess@4.c)
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 */

NTSTATUS __stdcall FreeDesktop(int *a1)
{
  int v1; // edi
  NTSTATUS v2; // esi
  int v3; // ebx
  void *v4; // ebx
  struct _EPROCESS *v6; // [esp+0h] [ebp-38h]
  struct _EPROCESS *v7; // [esp+0h] [ebp-38h]
  struct tagDESKTOP *v8; // [esp+4h] [ebp-34h]
  struct tagDESKTOP *v9; // [esp+4h] [ebp-34h]
  int v10; // [esp+10h] [ebp-28h] BYREF
  _DWORD v11[9]; // [esp+14h] [ebp-24h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  if ( *(_DWORD *)(v1 + 128) )
  {
    memset(v11, 0, 32);
    v11[8] = 3;
    _SetMagnificationInputTransform(v11);
  }
  CleanupIAMAccess(v1);
  *(_DWORD *)(v1 + 24) |= 4u;
  FreeView(v6, v8);
  v3 = ReferenceDwmProcess();
  if ( v3 )
  {
    FreeView(v7, v9);
    DereferenceDwmProcess(v3);
  }
  v4 = *(void **)(v1 + 64);
  if ( v4 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 64));
    v2 = MmUnmapViewInSessionSpace(v4);
    ObfDereferenceObject(*(PVOID *)(v1 + 60));
  }
  if ( *(_DWORD *)(v1 + 4) )
    Win32FreePool(*(_DWORD *)(v1 + 4));
  UnlockObjectAssignment(v1 + 20);
  if ( !v10 )
    UserSessionSwitchLeaveCrit();
  return v2;
}
