/*
 * XREFs of ?TrackedWindowMoveSizeIntercept@NotifyShell@@YGXPAUtagWND@@IK@Z @ 0xF4EDE
 * Callers:
 *     ?DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z @ 0x185481 (-DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _WPP_RECORDER_SF_qd@28 @ 0x176592 (_WPP_RECORDER_SF_qd@28.c)
 */

void __userpurge NotifyShell::TrackedWindowMoveSizeIntercept(
        int a1@<edx>,
        int *a2@<ecx>,
        NotifyShell *this,
        struct tagWND *a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(a2, 12, &WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, (char)a2, a1);
  anonymous_namespace_::NotifyShellSimplePayload(*a2, 4, a1, (int)this);
}
