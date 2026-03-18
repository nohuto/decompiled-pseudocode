/*
 * XREFs of HMInitHandleTable @ 0x1C0294A94
 * Callers:
 *     Win32UserInitialize @ 0x1C0293AF8 (Win32UserInitialize.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C002F4F0 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  struct _HANDLEENTRY *v0; // rdi
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v0 = (struct _HANDLEENTRY *)gpvSharedBase;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v4);
  v1 = 0;
  v2 = gpKernelHandleTable;
  gHandlePages = 0LL;
  qword_1C024ACD0 = 0LL;
  qword_1C024ACC8 = 0LL;
  qword_1C024AD48 = v0;
  dword_1C024AD50 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v2 = 0LL;
    *((_BYTE *)v0 + 24) = 0;
    v1 = 1;
    *((_WORD *)v0 + 13) = 1;
    qword_1C024ACC8 = 2LL;
  }
  else
  {
    qword_1C024AD48 = 0LL;
  }
  return v1;
}
