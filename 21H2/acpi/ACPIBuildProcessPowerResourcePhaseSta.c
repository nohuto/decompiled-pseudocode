/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002F7E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A6D0 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSta(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  signed __int32 v7; // edx
  _QWORD *v9; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 0;
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) == 0 )
  {
    BugCheckParameter4 = *(unsigned __int16 *)(v3 + 2);
    if ( (_WORD)BugCheckParameter4 != 1 )
      KeBugCheckEx(0xA5u, 8uLL, *(_QWORD *)(v1 + 32), *(_QWORD *)(a1 + 56), BugCheckParameter4);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 1uLL);
    dword_1C0082908 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1u);
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 2uLL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v5 = AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList == &AcpiPowerNodeList )
    goto LABEL_10;
  while ( *(_BYTE *)(v5 + 40) < *(_BYTE *)(v1 + 40) )
  {
    v5 = *(_QWORD *)v5;
    if ( (__int64 *)v5 == &AcpiPowerNodeList )
      goto LABEL_8;
  }
  v6 = *(_QWORD **)(v5 + 8);
  if ( *v6 != v5 )
    goto LABEL_12;
  *(_QWORD *)v1 = v5;
  *(_QWORD *)(v1 + 8) = v6;
  *v6 = v1;
  *(_QWORD *)(v5 + 8) = v1;
LABEL_8:
  if ( (__int64 *)v5 == &AcpiPowerNodeList )
  {
LABEL_10:
    v9 = *(_QWORD **)(v5 + 8);
    if ( *v9 == v5 )
    {
      *(_QWORD *)v1 = v5;
      *(_QWORD *)(v1 + 8) = v9;
      *v9 = v1;
      *(_QWORD *)(v5 + 8) = v1;
      goto LABEL_9;
    }
LABEL_12:
    __fastfail(3u);
  }
LABEL_9:
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
  return 0LL;
}
