/*
 * XREFs of NtGdiStartPage @ 0x1C0141E00
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C009E20C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0141F4C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0141F8C (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0141FB4 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015D634 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0287DA0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v11; // [rsp+58h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v10)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
LABEL_16:
    v5 = v10[0];
    goto LABEL_17;
  }
  v5 = v10[0];
  v6 = *(_QWORD *)(v10[0] + 496LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v10[0] + 48LL);
    if ( *(_QWORD *)(v7 + 2560) )
    {
      if ( (*(_DWORD *)(v7 + 40) & 0x8000) != 0 )
      {
        v11 = (XDCOBJ *)v10;
        if ( (*(_DWORD *)(v10[0] + 44LL) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v10);
          *(_DWORD *)(v10[0] + 44LL) &= ~2u;
        }
        if ( (gUMPDSecurityLevel == 2
           || gUMPDSecurityLevel
           && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3, v4),
               (unsigned int)bIsProcessLocalSystem(CurrentProcess))
           || *(_QWORD *)(v7 + 2952))
          && (v2 = (*(__int64 (__fastcall **)(__int64))(v7 + 2952))(v6 + 24)) != 0 )
        {
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v11);
          *(_DWORD *)(v10[0] + 36LL) |= 0x100u;
          *(_DWORD *)(v10[0] + 2088LL) = 0;
          *(_DWORD *)(v10[0] + 2092LL) = 0;
        }
        else
        {
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v11);
          bEndDocInternal(a1, 1u, 2u);
        }
        if ( v11 )
          XDCOBJ::vSaveAttributesAlways(v11);
        goto LABEL_16;
      }
    }
  }
LABEL_17:
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v2;
}
