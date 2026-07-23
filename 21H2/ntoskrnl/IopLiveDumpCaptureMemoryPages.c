/*
 * XREFs of IopLiveDumpCaptureMemoryPages @ 0x1409AC894
 * Callers:
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 * Callees:
 *     VslIsSecureKernelRunning @ 0x14025217C (VslIsSecureKernelRunning.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FC1D8 (VslFinalizeLiveDumpInSk.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14050940C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140509EC4 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409AE518 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpCaptureMemoryPages(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  char v4; // al
  bool v5; // cf
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // edi
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+BCh] [rbp-44h]
  __int64 *v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  int v26; // [rsp+CCh] [rbp-34h]
  __int64 *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  __int64 *v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]
  __int64 *v36; // [rsp+100h] [rbp+0h]
  int v37; // [rsp+108h] [rbp+8h]
  int v38; // [rsp+10Ch] [rbp+Ch]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+11Ch] [rbp+1Ch]

  v2 = a1 + 304;
  v19 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  v18[0] = IopLiveDumpStartMirroringCallback;
  v18[1] = IopLiveDumpEndMirroringCallback;
  v18[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v4 = *(_BYTE *)(a1 + 40) & 4;
  SaveSupervisorState = 1;
  v5 = v4 != 0;
  v6 = *(_DWORD *)(a1 + 80);
  DWORD2(v19) = v5 ? 657 : 593;
  if ( (v6 & 0x20) != 0 )
    DWORD2(v19) = (v5 ? 657 : 593) | 0x100;
  v8 = MmDuplicateMemory((__int64)v18);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v7 = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 504)) % PerformanceFrequency.QuadPart;
    *(_QWORD *)(a1 + 512) = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 504)) / PerformanceFrequency.QuadPart;
  }
  if ( v8 < 0 || v8 == 258 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 1) != 0 )
    {
      LOBYTE(v7) = 1;
      IopLiveDumpUncorralProcessors(v2, v7);
    }
    IopLiveDumpTraceMmDuplicateMemoryFailure(a1, v8);
    if ( v8 == 258 )
    {
      *(_DWORD *)(a1 + 80) |= 0x40u;
      v8 = -1073740682;
    }
  }
  else
  {
    if ( VslIsSecureKernelRunning() && (*(_QWORD *)(a1 + 696) || *(_QWORD *)(a1 + 704)) )
      VslFinalizeLiveDumpInSk((_QWORD *)(a1 + 192), (_QWORD *)(a1 + 200), a1 + 144);
    *(_QWORD *)(a1 + 480) = (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    IopLiveDumpTraceCaptureMemoryPages();
  }
  SaveSupervisorState = 0;
  if ( (unsigned int)dword_140C044D8 > 5 && tlgKeywordOn((__int64)&dword_140C044D8, 0x200000000000LL) )
  {
    v9 = *(_QWORD *)(a1 + 480);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v11 = v9;
    v21 = &v11;
    v12 = *(_QWORD *)(a1 + 488);
    v24 = &v12;
    v13 = *(_QWORD *)(a1 + 496);
    v27 = &v13;
    v14 = *(_QWORD *)(a1 + 512);
    v30 = &v14;
    v15 = *(_QWORD *)(a1 + 520);
    v33 = &v15;
    v16 = *(_QWORD *)(a1 + 528);
    v36 = &v16;
    v17 = *(_QWORD *)(a1 + 536);
    v39 = &v17;
    v22 = 8;
    v25 = 8;
    v28 = 8;
    v31 = 8;
    v34 = 8;
    v37 = 8;
    v40 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C044D8,
      (unsigned __int8 *)word_1400249BA,
      (const GUID *)(a1 + 864),
      (const GUID *)(a1 + 848),
      9u,
      &v20);
  }
  return (unsigned int)v8;
}
