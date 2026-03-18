/*
 * XREFs of ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C00B81C0
 * Callers:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C00B814C (--0COPM@@QEAA@PEAJ@Z.c)
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00C6C30 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     <none>
 */

OPM::CMutex *__fastcall OPM::CMutex::CMutex(OPM::CMutex *this, int *a2)
{
  struct _KMUTANT *PoolWithTag; // rax

  *(_QWORD *)this = 0LL;
  if ( *a2 >= 0 )
  {
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x4D504F47u);
    *(_QWORD *)this = PoolWithTag;
    if ( PoolWithTag )
      KeInitializeMutex(PoolWithTag, 0);
    else
      *a2 = -1073741801;
  }
  return this;
}
