/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1C0114920
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026E1A8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0277678 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  DYNAMICMODECHANGESHARELOCK *v5; // rcx
  HSURF v7[3]; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)v7 = *(_OWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) || !v7[0] )
    return 3221225485LL;
  v4 = -1073741811;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8, MmUserProbeAddress, a3, a4);
  v8 = 0LL;
  SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&v8, v7[1]);
  if ( (unsigned int)SURFREF::bValid((SURFREF *)&v8) && *(_QWORD *)(v8 + 224) )
    v4 = 0;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
  if ( v4 >= 0 )
  {
    if ( !(unsigned int)bDeleteDCInternal(v7[0], 0LL, 0LL) )
      v4 = -1073741811;
    if ( v4 >= 0 && !(unsigned int)bDeleteSurface(v7[1]) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
