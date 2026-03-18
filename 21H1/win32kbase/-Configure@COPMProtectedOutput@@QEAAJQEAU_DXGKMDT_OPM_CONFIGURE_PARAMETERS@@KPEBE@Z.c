/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C0149B0C
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C0149C28 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C002A970 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C004C920 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     CallMonitor @ 0x1C00C7780 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        unsigned int a3,
        const unsigned __int8 *a4)
{
  void **v4; // rdi
  size_t v6; // r14
  unsigned int v9; // esi
  _DWORD *PoolWithTag; // rbx
  void *v11; // rdx

  v4 = (void **)*((_QWORD *)this + 1);
  v6 = a3;
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 4112), 0x4D504F47u);
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = *((_QWORD *)this + 9);
      memmove(PoolWithTag + 2, a2, 0x1000uLL);
      PoolWithTag[1026] = v6;
      memmove(PoolWithTag + 1027, a4, v6);
      v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Fu, PoolWithTag, v6 + 4112, 0LL, 0);
      OPM::OPMFreeMemory((OPM *)PoolWithTag, v11);
    }
    else
    {
      v9 = -1073741801;
    }
  }
  if ( *v4 )
    KeReleaseMutex((PRKMUTEX)*v4, 0);
  return v9;
}
