/*
 * XREFs of HMInitHandleTable @ 0x1C029967C
 * Callers:
 *     Win32UserInitialize @ 0x1C0299728 (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C00102BC (-HMGrowHandleTable@@YAHXZ.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
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
  qword_1C0250CD0 = 0LL;
  qword_1C0250CC8 = 0LL;
  qword_1C0250D48 = v0;
  dword_1C0250D50 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v2 = 0LL;
    *((_BYTE *)v0 + 24) = 0;
    v1 = 1;
    *((_WORD *)v0 + 13) = 1;
    qword_1C0250CC8 = 2LL;
  }
  else
  {
    qword_1C0250D48 = 0LL;
  }
  return v1;
}
