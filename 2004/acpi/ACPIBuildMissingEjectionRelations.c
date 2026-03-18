/*
 * XREFs of ACPIBuildMissingEjectionRelations @ 0x1C004B9D4
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C004F470 (ACPIDetectEjectDevices.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C000AC5C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017CE0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     ACPIInternalMoveList @ 0x1C0031668 (ACPIInternalMoveList.c)
 */

__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rcx
  ULONG_PTR v2; // rdi
  _QWORD *v3; // rdx
  __int64 *v4; // r14
  int v5; // ebx
  KIRQL v6; // al
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-30h] BYREF
  void *Src; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF

  Src = 0LL;
  v15[1] = v15;
  v15[0] = v15;
  memset(v16, 0, sizeof(v16));
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, (__int64)v15);
    while ( 1 )
    {
      do
      {
        if ( (_QWORD *)v15[0] == v15 )
          goto LABEL_25;
        v1 = *(_QWORD *)v15[0];
        v2 = v15[0] - 808LL;
        v18 = 0LL;
        if ( *(_QWORD *)(v1 + 8) != v15[0] || (v3 = *(_QWORD **)(v15[0] + 8LL), *v3 != v15[0]) )
LABEL_24:
          __fastfail(3u);
        *v3 = v1;
        *(_QWORD *)(v1 + 8) = v3;
        v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 720), 1145718111);
      }
      while ( !v4 );
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 692));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
      v5 = AMLIEvalNameSpaceObject((unsigned __int64 *)v4, (__int64)v16, 0, 0LL);
      if ( ACPIInitDereferenceDeviceExtensionUnlocked(v2) )
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v7 = v18;
        v0 = v6;
      }
      else
      {
        v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        if ( v5 < 0 )
        {
          v8 = (_QWORD *)qword_1C00823A8;
          v9 = (_QWORD *)(v2 + 808);
          if ( *(__int64 **)qword_1C00823A8 != &AcpiUnresolvedEjectList )
            goto LABEL_24;
          v7 = v18;
LABEL_20:
          *v9 = &AcpiUnresolvedEjectList;
          v9[1] = v8;
          *v8 = v9;
          qword_1C00823A8 = (__int64)v9;
          goto LABEL_21;
        }
        if ( WORD1(v16[0]) != 2 )
          KeBugCheckEx(0xA5u, 0xAuLL, v2, (ULONG_PTR)v4, WORD1(v16[0]));
        v10 = AMLIGetNameSpaceObject(Src, 0LL, (unsigned __int64 *)&v18, 0);
        v7 = v18;
        if ( v10 < 0
          || (dword_1C0082908 = 0, pszDest = 0, FreeDataBuffs((__int64)v16, 1u), !v7)
          || (v11 = *(_QWORD *)(*(_QWORD *)v7 + 104LL)) == 0 )
        {
          v8 = (_QWORD *)qword_1C00823A8;
          v9 = (_QWORD *)(v2 + 808);
          if ( *(__int64 **)qword_1C00823A8 != &AcpiUnresolvedEjectList )
            goto LABEL_24;
          goto LABEL_20;
        }
        v12 = (_QWORD *)(v2 + 808);
        v13 = *(_QWORD **)(v11 + 800);
        if ( *v13 != v11 + 792 )
          goto LABEL_24;
        *v12 = v11 + 792;
        v12[1] = v13;
        *v13 = v12;
        *(_QWORD *)(v11 + 800) = v12;
        if ( (*(_DWORD *)(v11 + 8) & 0x208) == 0x200LL )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v11 + 744), EjectionRelations);
      }
LABEL_21:
      AMLIDereferenceHandleEx((__int64)v4);
      if ( v7 )
        AMLIDereferenceHandleEx(v7);
    }
  }
LABEL_25:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
