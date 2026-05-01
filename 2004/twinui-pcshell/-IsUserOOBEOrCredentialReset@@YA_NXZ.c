/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801FA280
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800A28CC (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032DC90 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsCredentialReset@@YA_NXZ @ 0x1801FA138 (-IsCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1801FA1DC (-IsUserOOBE@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
