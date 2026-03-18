/*
 * XREFs of IopWriteCapsuleTriageDumpToFirmware @ 0x1405554B0
 * Callers:
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoFillDumpHeader @ 0x140551F78 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x14055225C (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x1405550FC (IopUpdateMinidumpContext.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405557FC (IopWriteTriageDumpToFirmware.c)
 *     MmSnapTriageDumpInformation @ 0x140593778 (MmSnapTriageDumpInformation.c)
 *     VfDisableHalVerifier @ 0x1405FE548 (VfDisableHalVerifier.c)
 */

bool __fastcall IopWriteCapsuleTriageDumpToFirmware(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        void *a7)
{
  char *v7; // rsi
  char v8; // r14
  _KTHREAD *v13; // r9
  int v14; // r10d
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // [rsp+38h] [rbp-81h]
  int v19; // [rsp+74h] [rbp-45h] BYREF
  void *v20; // [rsp+78h] [rbp-41h]
  _DWORD v21[2]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD *v22; // [rsp+88h] [rbp-31h]
  _QWORD *v23; // [rsp+90h] [rbp-29h]
  _QWORD v24[4]; // [rsp+98h] [rbp-21h] BYREF

  v7 = (char *)CapsuleTriageDumpBlock;
  v8 = 0;
  v20 = a7;
  v23 = a6;
  v19 = 0;
  if ( !CapsuleTriageDumpBlock )
    return 0;
  VfDisableHalVerifier();
  v24[0] = a2;
  v24[1] = a3;
  v24[2] = a4;
  v24[3] = a5;
  IopUpdateMinidumpContext(v14, a2, a3, a4, a5, a6, v13, v17, 1);
  MmSnapTriageDumpInformation(a6, v24);
  IoFillDumpHeader((_DWORD *)v7 + 1031, 4, a1, a2, (__int64)a3, a4, a5, (__int64)v20);
  v21[0] = IopNumTriageDumpDataBlocks;
  v21[1] = 256;
  v22 = IopTriageDumpDataBlocks;
  v15 = IoFillTriageDumpBuffer(
          0x3E000u,
          (__int64 *)(v7 + 12316),
          1,
          3583,
          0LL,
          (__int64)v23,
          v20,
          CmNtCSDVersion,
          65,
          1u,
          (__int64)v21,
          (__int64)v21,
          &v19);
  *(_OWORD *)(v7 + 4220) = 0LL;
  *(_OWORD *)(v7 + 4236) = 0LL;
  *((_DWORD *)v7 + 2070) = 0;
  v16 = *((unsigned int *)v7 + 3080);
  *((_DWORD *)v7 + 2075) |= 0x88u;
  *(_QWORD *)(v7 + 8124) = v16;
  *((_DWORD *)v7 + 2069) = 3583;
  if ( v15 >= 0 )
    return (int)IopWriteTriageDumpToFirmware(CapsuleTriageDumpBlock) >= 0;
  return v8;
}
