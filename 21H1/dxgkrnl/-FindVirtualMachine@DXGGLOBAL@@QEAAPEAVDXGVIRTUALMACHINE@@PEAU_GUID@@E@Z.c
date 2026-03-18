/*
 * XREFs of ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C026550C
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B13D0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGVIRTUALMACHINE *__fastcall DXGGLOBAL::FindVirtualMachine(DXGGLOBAL *this, struct _GUID *a2)
{
  char *v2; // rsi
  DXGGLOBAL *i; // r8
  char *v6; // rbx
  __int64 v7; // rcx

  v2 = (char *)this + 320;
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 320));
  for ( i = (DXGGLOBAL *)*((_QWORD *)this + 184); i != (DXGGLOBAL *)((char *)this + 1472); i = *(DXGGLOBAL **)i )
  {
    v6 = (char *)i - 8;
    v7 = *(_QWORD *)&a2->Data1 - *((_QWORD *)i + 30);
    if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)i + 30) )
      v7 = *(_QWORD *)a2->Data4 - *((_QWORD *)v6 + 32);
    if ( !v7 || *((_DWORD *)this + 372) == 1 )
      goto LABEL_9;
  }
  v6 = 0LL;
LABEL_9:
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXGVIRTUALMACHINE *)v6;
}
