/*
 * XREFs of ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0281438
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C027FE48 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0039E38 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0116F30 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C02347D8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     UnmapGpadl @ 0x1C024D290 (UnmapGpadl.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C028122C (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0281AB8 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::ResetVirtualMachine(DXGVIRTUALMACHINE *this, char a2)
{
  __int64 v4; // rcx
  char *v5; // rsi
  char *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  if ( !*((_BYTE *)this + 297) )
  {
    DXGVIRTUALMACHINE::PauseVmBusChannels((struct _KTHREAD **)this);
    v4 = *((_QWORD *)this + 7);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
    if ( a2 )
      DXGVIRTUALMACHINE::SetVailObject(this, 0LL);
    v5 = (char *)this + 24;
    while ( 1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 96));
      v6 = *(char **)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      *((_QWORD *)this + 13) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
      KeLeaveCriticalRegion();
      if ( v6 == v5 )
        break;
      *((_QWORD *)v6 + 1) = 0LL;
      *(_QWORD *)v6 = 0LL;
      CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
        (CEnsureCurrentDxgProcess *)&v9,
        (struct DXGPROCESS *)(v6 - 512));
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)(v6 - 512));
      if ( v10 )
        *(_QWORD *)(v10 + 8) = v9;
    }
    KeUnstackDetachProcess(&ApcState);
    v8 = *((_DWORD *)this + 66);
    if ( v8 )
    {
      UnmapGpadl(*((_QWORD *)this + 7), v8, 4096LL);
      *((_DWORD *)this + 66) = 0;
      *((_QWORD *)this + 35) = 0LL;
      *((_QWORD *)this + 34) = 0LL;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGVIRTUALMACHINE *)((char *)this + 128));
    *(_WORD *)((char *)this + 297) = 257;
  }
}
