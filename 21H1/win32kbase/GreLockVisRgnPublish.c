/*
 * XREFs of GreLockVisRgnPublish @ 0x1C001BA30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

PVOID __fastcall GreLockVisRgnPublish(int a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  PVOID result; // rax

  v3 = ghsemVisRgnPublish;
  if ( ghsemVisRgnPublish )
  {
    PsEnterPriorityRegion();
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return (PVOID)McTemplateK0pqz_EtwWriteTransfer(
                      a1,
                      a2,
                      a3,
                      (_DWORD)ghsemVisRgnPublish,
                      9,
                      (__int64)L"ghsemVisRgnPublish");
  }
  return result;
}
