/*
 * XREFs of ??1InteractiveControlManager@@AAE@XZ @ 0xD3D50
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     ?RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE5A8 (-RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z.c)
 */

void __fastcall InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager *this, int a2)
{
  int v3; // ebx
  struct InteractiveControlDevice **v4; // esi
  int v5; // edx
  int v6; // ecx
  REGHANDLE v7; // [esp-18h] [ebp-24h]
  REGHANDLE v8; // [esp-18h] [ebp-24h]

  v3 = 5;
  v4 = (struct InteractiveControlDevice **)((char *)this + 24);
  do
  {
    if ( *v4 )
      InteractiveControlManager::RemoveDevice(this, *v4);
    ++v4;
    --v3;
  }
  while ( v3 );
  HMAssignmentLock(this, a2);
  HMAssignmentLock(v6, v5);
  v7 = qword_266310;
  dword_2662F8 = 0;
  qword_266310 = 0LL;
  EtwUnregister(v7);
  v8 = qword_2662E8;
  dword_2662D0 = 0;
  qword_2662E8 = 0LL;
  EtwUnregister(v8);
}
