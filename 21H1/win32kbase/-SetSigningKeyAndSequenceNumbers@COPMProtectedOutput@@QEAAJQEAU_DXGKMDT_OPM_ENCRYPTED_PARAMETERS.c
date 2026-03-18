/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00C6314
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00C627C (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C002A970 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C004C920 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     CallMonitor @ 0x1C00C7780 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  void **v2; // rdi
  _QWORD *PoolWithTag; // rax
  void *v6; // rbx
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  unsigned int v10; // esi
  void *v11; // rdx

  v2 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v10 = -1071774438;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x4D504F47u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = 2LL;
      *PoolWithTag = *((_QWORD *)this + 9);
      v8 = PoolWithTag + 1;
      do
      {
        *v8 = *(_OWORD *)a2->abEncryptedParameters;
        v8[1] = *(_OWORD *)&a2->abEncryptedParameters[16];
        v8[2] = *(_OWORD *)&a2->abEncryptedParameters[32];
        v8[3] = *(_OWORD *)&a2->abEncryptedParameters[48];
        v8[4] = *(_OWORD *)&a2->abEncryptedParameters[64];
        v8[5] = *(_OWORD *)&a2->abEncryptedParameters[80];
        v8[6] = *(_OWORD *)&a2->abEncryptedParameters[96];
        v8 += 8;
        v9 = *(_OWORD *)&a2->abEncryptedParameters[112];
        a2 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const)((char *)a2 + 128);
        *(v8 - 1) = v9;
        --v7;
      }
      while ( v7 );
      v10 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232493u, v6, 0x108u, 0LL, 0);
      OPM::OPMFreeMemory((OPM *)v6, v11);
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( *v2 )
    KeReleaseMutex((PRKMUTEX)*v2, 0);
  return v10;
}
