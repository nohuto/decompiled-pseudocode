/*
 * XREFs of ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0337008
 * Callers:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0335138 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0336F70 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00465B8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0336CD0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0337780 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0362480 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     UnmapGpadl @ 0x1C0384100 (UnmapGpadl.c)
 */

void __fastcall DXGVIRTUALMACHINE::ResetVirtualMachine(DXGVIRTUALMACHINE *this, char a2, __int64 a3)
{
  __int64 v5; // rcx
  char *v6; // rsi
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  if ( !*((_BYTE *)this + 337) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventResetVirtualMachine, a3, this);
    DXGVIRTUALMACHINE::PauseVmBusChannels(this);
    v5 = *((_QWORD *)this + 7);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v5 + 56), &ApcState);
    if ( a2 )
      DXGVIRTUALMACHINE::SetVailObject(this, 0LL);
    v6 = (char *)this + 24;
    while ( 1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 128));
      v7 = *(char **)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD *)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
        __fastfail(3u);
      *(_QWORD *)v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      *((_QWORD *)this + 17) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 128, 0LL);
      KeLeaveCriticalRegion();
      if ( v7 == v6 )
        break;
      *((_QWORD *)v7 + 1) = 0LL;
      *(_QWORD *)v7 = 0LL;
      CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
        (CEnsureCurrentDxgProcess *)&v10,
        (struct DXGPROCESS *)(v7 - 624));
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)(v7 - 624));
      if ( v11 )
        *(_QWORD *)(v11 + 24) = v10;
    }
    KeUnstackDetachProcess(&ApcState);
    v9 = *((unsigned int *)this + 76);
    if ( (_DWORD)v9 )
    {
      UnmapGpadl(*((_QWORD *)this + 7), v9, 2056LL);
      *((_DWORD *)this + 76) = 0;
      *((_QWORD *)this + 40) = 0LL;
      *((_QWORD *)this + 39) = 0LL;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGVIRTUALMACHINE *)((char *)this + 160));
    *(_WORD *)((char *)this + 337) = 257;
  }
}
