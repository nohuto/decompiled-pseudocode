/*
 * XREFs of ??1service_description@immersive_shell_component@winrt@@QEAA@XZ @ 0x180462610
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18042F94C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::immersive_shell_component::service_description::~service_description(
        winrt::immersive_shell_component::service_description *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(v1);
}
