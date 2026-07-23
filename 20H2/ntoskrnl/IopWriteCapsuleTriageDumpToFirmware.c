/*
 * XREFs of IopWriteCapsuleTriageDumpToFirmware @ 0x14050308C
 * Callers:
 *     IoWriteCrashDump @ 0x140501150 (IoWriteCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     IoFillDumpHeader @ 0x1404FFF78 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x140500240 (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x140502C64 (IopUpdateMinidumpContext.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405033D0 (IopWriteTriageDumpToFirmware.c)
 *     MmSnapTriageDumpInformation @ 0x1405371B4 (MmSnapTriageDumpInformation.c)
 *     VfDisableHalVerifier @ 0x14059F568 (VfDisableHalVerifier.c)
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
  int v18; // [rsp+74h] [rbp-45h] BYREF
  void *v19; // [rsp+78h] [rbp-41h]
  _DWORD v20[2]; // [rsp+80h] [rbp-39h] BYREF
  void *v21; // [rsp+88h] [rbp-31h]
  _QWORD *v22; // [rsp+90h] [rbp-29h]
  _QWORD v23[4]; // [rsp+98h] [rbp-21h] BYREF

  v7 = (char *)CapsuleTriageDumpBlock;
  v8 = 0;
  v19 = a7;
  v22 = a6;
  v18 = 0;
  if ( !CapsuleTriageDumpBlock )
    return 0;
  VfDisableHalVerifier();
  v23[3] = a5;
  v23[0] = a2;
  v23[1] = a3;
  v23[2] = a4;
  IopUpdateMinidumpContext(v14, a2, a3, a4, a5, a6, v13);
  MmSnapTriageDumpInformation(a6, v23);
  IoFillDumpHeader((_NT_PRODUCT_TYPE *)v7 + 1031, 4, a1, a2, (__int64)a3, a4, a5, (__int64)v19);
  v20[0] = IopNumTriageDumpDataBlocks;
  v20[1] = 256;
  v21 = &IopTriageDumpDataBlocks;
  v15 = IoFillTriageDumpBuffer(
          0x3E000u,
          (__int64 *)(v7 + 12316),
          1,
          3583,
          0LL,
          (__int64)v22,
          v19,
          CmNtCSDVersion,
          65,
          1u,
          (__int64)v20,
          (__int64)v20,
          &v18);
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
