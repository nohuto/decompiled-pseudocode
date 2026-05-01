/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801D6684
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x18009AA1C (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18030C0F0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsCredentialReset@@YA_NXZ @ 0x1801D653C (-IsCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1801D65E0 (-IsUserOOBE@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
