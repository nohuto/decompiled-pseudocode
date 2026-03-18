/*
 * XREFs of DestroyCacheDC @ 0x1C006C4F0
 * Callers:
 *     DestroyMonitorDCs @ 0x1C0049D20 (DestroyMonitorDCs.c)
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C0073548 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C0076CDC (DelayedDestroyCacheDC.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 * Callees:
 *     HmgMarkDeletable @ 0x1C0029BC0 (HmgMarkDeletable.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C006C4C4 (IsGreSelectRedirectionBitmapSupported.c)
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // r14d
  __int64 *v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  HBRUSH v8; // rcx
  HBRUSH v9; // rcx
  __int64 v10; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = 0;
  v5 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    v3 = 1;
    v5 = (__int64 *)(gpDispInfo + 24);
    v12 = *(__int64 **)(gpDispInfo + 24);
    if ( !v12 )
      goto LABEL_27;
    do
    {
      if ( v12[1] == a2 )
        break;
      v5 = v12;
      v12 = (__int64 *)*v12;
    }
    while ( v12 );
    if ( !v12 || !v5 )
    {
LABEL_27:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 0LL;
    }
  }
  v6 = *v5;
  *(_DWORD *)(v6 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v6 + 64) & 0x40000) == 0 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( v7 > 2 )
    {
      PsGetCurrentProcessId();
      HmgMarkDeletable(v7, 4);
      if ( *(_QWORD *)(v6 + 40) > 2uLL )
        GreDeleteObject(*(HBRUSH *)(v6 + 40));
    }
    *(_QWORD *)(v6 + 40) = 0LL;
  }
  v8 = *(HBRUSH *)(v6 + 48);
  if ( v8 )
  {
    GreDeleteObject(v8);
    *(_QWORD *)(v6 + 48) = 0LL;
  }
  v9 = *(HBRUSH *)(v6 + 56);
  if ( v9 )
  {
    GreDeleteObject(v9);
    *(_QWORD *)(v6 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v6 + 8), 2147483650LL, 1LL, 0LL, v17, v18, v19) )
    goto LABEL_31;
  if ( (*(_DWORD *)(v6 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C0257968 )
      qword_1C0257968(*(_QWORD *)(v6 + 8), 0LL);
    *(_DWORD *)(v6 + 64) &= ~0x4000u;
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  if ( !(unsigned int)bDeleteDCInternalEx(*(HDC *)(v6 + 8)) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v6 + 8), 2147483666LL, 1LL, 0LL, v17, v18, v19);
LABEL_31:
    v13 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 16) = 0LL;
    LOBYTE(v10) = 1;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    v18 = 0LL;
    v14 = HmgShareLockEx(v13, v10);
    v17 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)&v17);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(v6 + 64) & 0x1002) == 2 )
    --gnDCECount;
  *v5 = *(_QWORD *)v6;
  Win32FreePool(v6);
  v2 = 1;
LABEL_19:
  if ( v3 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return v2;
}
