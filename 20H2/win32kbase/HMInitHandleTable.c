/*
 * XREFs of HMInitHandleTable @ 0x1C02929AC
 * Callers:
 *     Win32UserInitialize @ 0x1C0291A10 (Win32UserInitialize.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C008F7B0 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMInitHandleTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _HANDLEENTRY *v4; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct _HANDLEENTRY *)gpvSharedBase;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v8,
    a2,
    a3,
    a4);
  v5 = 0;
  v6 = gpKernelHandleTable;
  gHandlePages = 0LL;
  qword_1C0248CD0 = 0LL;
  qword_1C0248CC8 = 0LL;
  qword_1C0248D48 = v4;
  dword_1C0248D50 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v6 = 0LL;
    *((_BYTE *)v4 + 24) = 0;
    v5 = 1;
    *((_WORD *)v4 + 13) = 1;
    qword_1C0248CC8 = 2LL;
  }
  else
  {
    qword_1C0248D48 = 0LL;
  }
  return v5;
}
