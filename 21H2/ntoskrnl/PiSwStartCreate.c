/*
 * XREFs of PiSwStartCreate @ 0x140953B9C
 * Callers:
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140563B98 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x140563CAC (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PnpGetMultiSzLength @ 0x1407648E4 (PnpGetMultiSzLength.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 */

__int64 __fastcall PiSwStartCreate(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13)
{
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rcx
  int MultiSzLength; // ebx
  __int64 v21; // r8
  _QWORD v23[16]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+27h] BYREF

  memset(v23, 0, 0x78uLL);
  v24 = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      v16,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelCreate_Start,
      v17,
      L"DRIVERENUM",
      a3,
      a2);
  v18 = a5;
  v23[7] = a6;
  LODWORD(v23[8]) = a7;
  v23[9] = a8;
  v23[10] = a9;
  LODWORD(v23[11]) = a11;
  v23[12] = a10;
  LODWORD(v23[13]) = a13;
  v23[14] = a12;
  v23[0] = L"DRIVERENUM";
  v23[1] = a2;
  v23[2] = a3;
  v23[4] = a4;
  v23[6] = a5;
  if ( a4 )
  {
    MultiSzLength = PnpGetMultiSzLength(a4, 1024LL, &v24);
    if ( MultiSzLength < 0 )
      goto LABEL_10;
    LODWORD(v23[3]) = v24;
  }
  if ( v18 )
  {
    MultiSzLength = PnpGetMultiSzLength(v18, 1024LL, &v24);
    if ( MultiSzLength < 0 )
      goto LABEL_10;
    LODWORD(v23[5]) = v24;
  }
  MultiSzLength = PiSwIrpStartCreateWorker((__int64)v23, 0LL);
LABEL_10:
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v19,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelCreate_Stop,
      v21,
      L"DRIVERENUM",
      a3,
      a2,
      MultiSzLength);
  return (unsigned int)MultiSzLength;
}
