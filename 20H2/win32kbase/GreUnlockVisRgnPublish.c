/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C00962F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreUnlockVisRgnPublish(int a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, (__int64)ghsemVisRgnPublish);
  if ( ghsemVisRgnPublish )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemVisRgnPublish);
    return PsLeavePriorityRegion(v3);
  }
  return result;
}
