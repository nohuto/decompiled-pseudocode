/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C0093B20
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C009249C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0093DA0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0093E28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // edx
  bool v5; // bl
  int v6; // r8d
  int v7; // ecx
  int v8; // ecx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1;
  if ( !a2 )
  {
    v11 = a1;
    if ( (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v11) )
      goto LABEL_10;
    v5 = 0;
LABEL_9:
    if ( !v5 )
    {
      GreLockVisRgn(v2);
      return 1LL;
    }
LABEL_10:
    v7 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v7, (unsigned int)&LockAcquireShared, v6, (__int64)ghsemDynamicModeChange);
    v8 = (int)ghsemGreLock;
    if ( ghsemGreLock )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v8, (unsigned int)&LockAcquireShared, v6, (__int64)ghsemGreLock);
    if ( ghsemDCVisRgn )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
    if ( gbLockEtw )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          (unsigned int)L"ghsemDCVisRgn",
          (unsigned int)&LockAcquireShared,
          v6,
          (__int64)ghsemDCVisRgn);
    }
    return 1LL;
  }
  DCOBJA::DCOBJA((DCOBJA *)v10, a2);
  v3 = v10[0];
  if ( v10[0] )
  {
    v2 = *(_QWORD *)(v10[0] + 48LL);
    v11 = v2;
    v5 = 0;
    if ( (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v11) )
    {
      v4 = *(_DWORD *)(v3 + 36);
      if ( (v4 & 0x200) == 0 || (**(_DWORD **)(v3 + 976) & 1) != 0 || (v4 & 0x8000) != 0 )
        v5 = 1;
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v10);
    goto LABEL_9;
  }
  return 0LL;
}
