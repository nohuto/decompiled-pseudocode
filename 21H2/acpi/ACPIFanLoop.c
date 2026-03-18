/*
 * XREFs of ACPIFanLoop @ 0x1C0003664
 * Callers:
 *     ACPIFanPowerCallback @ 0x1C0003020 (ACPIFanPowerCallback.c)
 *     ACPIFanDeviceControl @ 0x1C0003160 (ACPIFanDeviceControl.c)
 *     ACPIFanEvent @ 0x1C0054A00 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C0054AC0 (ACPIFanFSTCallback.c)
 *     ACPIFanStopDevice @ 0x1C00550FC (ACPIFanStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 * Callees:
 *     ACPIFanCompletePendingIrps @ 0x1C0003834 (ACPIFanCompletePendingIrps.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     ACPIFanFSTCallback @ 0x1C0054AC0 (ACPIFanFSTCallback.c)
 */

void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r15
  int v6; // edi
  KIRQL v7; // bp
  bool v8; // sf
  int v9; // ecx
  char v10; // r14
  int v11; // ecx
  int v12; // eax
  KIRQL v13; // al
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  bool v16; // zf
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // r8

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v6 = ~a2;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v8 = (v6 & (a3 | *(_DWORD *)(a1 + 192))) < 0;
  v9 = v6 & (a3 | *(_DWORD *)(a1 + 192));
  v10 = 1;
  *(_DWORD *)(a1 + 192) = v9;
  if ( v8 )
    goto LABEL_30;
  *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
  while ( 1 )
  {
    if ( !v10 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v3);
      v10 = 1;
    }
    v11 = *(_DWORD *)(a1 + 192);
    if ( (v11 & 0x40000000) != 0 )
      break;
    v12 = *(_DWORD *)(a1 + 192);
    if ( (v11 & 0x20000000) == 0 )
    {
      v12 = v11 | 0x10000000;
      *(_DWORD *)(a1 + 192) = v11 | 0x10000000;
      if ( (v11 & 0x10000000) == 0 )
      {
        v18 = *(_QWORD *)(a1 + 248);
        if ( v18 )
        {
          AMLIDereferenceHandleEx(v18);
          *(_QWORD *)(a1 + 248) = 0LL;
        }
        ACPISetDeviceWorker(a1, 512LL);
        KeReleaseSpinLock(v3, v7);
        v10 = 0;
        if ( (*(_DWORD *)(a1 + 192) & 4) != 0 )
        {
          v7 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
          v20 = *(_QWORD *)(a1 + 200);
          if ( *(_QWORD *)(v20 + 8) != a1 + 200 || (v21 = *(_QWORD **)(a1 + 208), *v21 != a1 + 200) )
LABEL_29:
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          KeReleaseSpinLock(&AcpiFanLock, v7);
        }
        LOBYTE(v19) = 1;
        ACPIFanCompletePendingIrps(a1, v19);
        break;
      }
    }
    if ( (v12 & 4) != 0 )
    {
      if ( (v12 & 1) != 0 || (v12 |= 1u, v16 = *(_QWORD *)(a1 + 248) == 0LL, *(_DWORD *)(a1 + 192) = v12, v16) )
      {
        if ( (v12 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 308);
          *(_DWORD *)(a1 + 192) = v12 | 2;
        }
        KeReleaseSpinLock(v3, v7);
        v10 = 0;
        if ( !(unsigned __int8)ACPIFanCompletePendingIrps(a1, 0LL) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 192) = v12 | 0x40000000;
        KeReleaseSpinLock(v3, v7);
        *(_OWORD *)(a1 + 256) = 0LL;
        *(_OWORD *)(a1 + 272) = 0LL;
        *(_QWORD *)(a1 + 288) = 0LL;
        v10 = 0;
        v17 = AMLIAsyncEvalObject(*(_QWORD *)(a1 + 248), (int)a1 + 256, 0, 0, (__int64)ACPIFanFSTCallback, a1);
        if ( v17 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 248), v17, a1 + 256, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 192) = v12 | 4;
      KeReleaseSpinLock(v3, v7);
      v10 = 0;
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v14 = (_QWORD *)qword_1C00811C8;
      v7 = v13;
      v15 = (_QWORD *)(a1 + 200);
      if ( *(__int64 **)qword_1C00811C8 != &AcpiFanList )
        goto LABEL_29;
      *(_QWORD *)(a1 + 208) = qword_1C00811C8;
      *v15 = &AcpiFanList;
      *v14 = v15;
      qword_1C00811C8 = a1 + 200;
      KeReleaseSpinLock(&AcpiFanLock, v7);
    }
  }
  *(_DWORD *)(a1 + 192) &= ~0x80000000;
  if ( v10 )
LABEL_30:
    KeReleaseSpinLock(v3, v7);
}
