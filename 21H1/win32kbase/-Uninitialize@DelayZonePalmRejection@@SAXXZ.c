/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00229BC
 * Callers:
 *     UnInitializeInputComponents @ 0x1C001EB24 (UnInitializeInputComponents.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0022148 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0022A60 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void DelayZonePalmRejection::Uninitialize(void)
{
  DelayZonePalmRejection *v0; // rax
  DelayZoneTelemetry *v1; // rcx
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  if ( DelayZonePalmRejection::s_instance )
  {
    if ( *((_QWORD *)DelayZonePalmRejection::s_instance + 3) )
      HMAssignmentUnlock((char *)DelayZonePalmRejection::s_instance + 24);
    CInpLockGuard::Uninitialize((DelayZonePalmRejection *)((char *)DelayZonePalmRejection::s_instance + 112));
    v0 = DelayZonePalmRejection::s_instance;
    v1 = (DelayZoneTelemetry *)*((_QWORD *)DelayZonePalmRejection::s_instance + 20);
    if ( v1 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v1);
      Win32FreePool(*((_QWORD *)DelayZonePalmRejection::s_instance + 20));
      v0 = DelayZonePalmRejection::s_instance;
      *((_QWORD *)DelayZonePalmRejection::s_instance + 20) = 0LL;
    }
    v2 = (_QWORD *)((char *)v0 + 72);
    v3 = (_QWORD *)*((_QWORD *)v0 + 9);
    while ( v3 != v2 )
    {
      v4 = (_QWORD *)*v3;
      v5 = v3;
      v3 = v4;
      if ( (_QWORD *)v4[1] != v5 || (v6 = (_QWORD *)v5[1], (_QWORD *)*v6 != v5) )
        __fastfail(3u);
      *v6 = v4;
      v4[1] = v6;
      Win32FreePool(v5);
    }
    Win32FreePool(DelayZonePalmRejection::s_instance);
    DelayZonePalmRejection::s_instance = 0LL;
  }
}
