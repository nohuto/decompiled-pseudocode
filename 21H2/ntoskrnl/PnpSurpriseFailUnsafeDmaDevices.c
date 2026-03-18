/*
 * XREFs of PnpSurpriseFailUnsafeDmaDevices @ 0x140808CB4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PnpSynchronizeDeviceEventQueue @ 0x1406EA5EC (PnpSynchronizeDeviceEventQueue.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x1409569F4 (PipDmgEnforceEnumerationPolicy.c)
 *     PiCslIsConsoleLocked @ 0x140957DE0 (PiCslIsConsoleLocked.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14095A508 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 */

void PnpSurpriseFailUnsafeDmaDevices()
{
  char v0; // di
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( PipDmaGuardPolicy == 2 && (unsigned __int8)PiCslIsConsoleLocked() )
  {
    PpDevNodeLockTree(1);
    v0 = 0;
    if ( IopRootDeviceNode )
    {
      v1 = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1);
      while ( 1 )
      {
        if ( !v1 )
          goto LABEL_20;
        v2 = v1[90];
        if ( v2 )
        {
          if ( (*(_BYTE *)(v2 + 16) & 2) != 0 && !(unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked() )
            break;
        }
        v3 = (_QWORD *)v1[1];
        if ( v3 )
        {
LABEL_16:
          v1 = v3;
        }
        else
        {
LABEL_10:
          v3 = (_QWORD *)*v1;
          if ( *v1 )
            goto LABEL_16;
          if ( v1 == IopRootDeviceNode )
            goto LABEL_20;
          while ( 1 )
          {
            v1 = (_QWORD *)v1[2];
            if ( *v1 )
              break;
            if ( v1 == IopRootDeviceNode )
              goto LABEL_18;
          }
          v1 = (_QWORD *)*v1;
LABEL_18:
          if ( v1 == IopRootDeviceNode )
            goto LABEL_20;
        }
      }
      PipDmgEnforceEnumerationPolicy((ULONG_PTR)v1);
      v0 = 1;
      goto LABEL_10;
    }
LABEL_20:
    PpDevNodeUnlockTree(1);
    if ( v0 )
      PnpSynchronizeDeviceEventQueue();
  }
}
