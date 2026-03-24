/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0005310
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0003E70 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000EB20 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F5D0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00055D0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0033238 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  struct HwQueueStagingList *v6; // r11
  unsigned int v7; // r9d
  unsigned int v8; // eax
  bool v9; // zf
  unsigned int v10; // r9d
  int v11; // r14d
  int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // edx
  __int64 result; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r15
  _WORD *v18; // r13
  __int16 v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r12
  struct _VIDSCH_SYNC_OBJECT **v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-78h] BYREF
  unsigned int *v32; // [rsp+38h] [rbp-70h]
  unsigned int v33; // [rsp+40h] [rbp-68h]
  unsigned int v34; // [rsp+44h] [rbp-64h]
  int v35; // [rsp+48h] [rbp-60h]
  unsigned int v36; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v37; // [rsp+50h] [rbp-58h]
  unsigned __int64 v39; // [rsp+C8h] [rbp+20h] BYREF

  v32 = *(unsigned int **)(a4 + 1176);
  v6 = a1;
  v31 = a2;
  v7 = *v32;
  v8 = *v32 & 0x3FF;
  v9 = *(_BYTE *)(a2 + 148) == 0;
  v33 = v8;
  if ( v9 )
    v10 = 0;
  else
    v10 = (v7 >> 10) & 0x3FF;
  v11 = 0;
  v34 = v10;
  v9 = !_BitScanForward((unsigned int *)&v12, v8);
  v35 = 0;
  if ( v9 )
    LOBYTE(v12) = -1;
  v13 = (char)v12;
  v9 = !_BitScanForward((unsigned int *)&v12, v10);
  v36 = v13;
  if ( v9 )
    LOBYTE(v12) = -1;
  v14 = (char)v12;
  v37 = (char)v12;
  while ( v8 || v10 )
  {
    if ( v13 < v14 )
    {
      v16 = 0LL;
      if ( *(_DWORD *)(a4 + 1096) )
      {
        v17 = (unsigned __int64)v13 << 6;
        do
        {
          *(_QWORD *)&a3[24 * (unsigned int)v16 + 1224 + 24 * v17] = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(unsigned int)(v11 + v16 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                                                                           + *(_QWORD *)(a4 + 1176)
                                                                                           + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                                                                           * ((8
                                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL)
                                                                                             + 199) & 0xFFFFFFF8)
                                                                                           + 48)
                                                                               + 96LL);
          v18 = &a3[24 * v17 + 24 * v16];
          *((_QWORD *)v18 + 305) = *(_QWORD *)(((unsigned __int64)(unsigned int)(v11
                                                                               + v16
                                                                               * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                             + *(_QWORD *)(a4 + 1176)
                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                             + 24);
          v19 = a3[16582];
          if ( *(_QWORD *)(((unsigned __int64)(unsigned int)(v11 + v16 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                         + *(_QWORD *)(a4 + 1176)
                         + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                         + 56) )
          {
            a3[16582] = v19 | (1 << v13);
            *((_QWORD *)v18 + 307) = *(_QWORD *)(((unsigned __int64)(unsigned int)(v11
                                                                                 + v16
                                                                                 * *(_DWORD *)(*(_QWORD *)(a4 + 1176)
                                                                                             + 4LL)) << 6)
                                               + *(_QWORD *)(a4 + 1176)
                                               + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                               * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                               + 56);
          }
          else
          {
            a3[16582] = v19 & ~(1 << v13);
          }
          v18[1236] = *(_WORD *)(((unsigned __int64)(unsigned int)(v11 + v16 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                               + *(_QWORD *)(a4 + 1176)
                               + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                               * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                               + 32);
          *((_QWORD *)v18 + 308) = *(_QWORD *)(((unsigned __int64)(unsigned int)(v11
                                                                               + v16
                                                                               * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                             + *(_QWORD *)(a4 + 1176)
                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                             + 40);
          v20 = *(_QWORD *)(a4 + 1176);
          v21 = ((unsigned __int64)(unsigned int)(v11 + v16 * *(_DWORD *)(v20 + 4)) << 6)
              + *(_DWORD *)(v20 + 4) * ((8 * *(_DWORD *)(v20 + 8) + 199) & 0xFFFFFFF8);
          v22 = *((_QWORD *)v18 + 306);
          v23 = *(_QWORD *)(v20 + v21 + 64);
          v24 = *(_QWORD *)(v21 + v20 + 72);
          v39 = v23;
          v25 = *(struct _VIDSCH_SYNC_OBJECT ***)(v22 + 24);
          if ( v25 )
          {
            if ( v23 )
            {
              if ( (int)VidSchiSignalSyncObjectsFromCpu(v6, 1u, v25, 0, &v39, 0LL) < 0 )
              {
                v27 = WdLogNewEntry5_WdAssertion();
                *(_QWORD *)(v27 + 24) = **(_QWORD **)(*((_QWORD *)v18 + 306) + 24LL);
                *(_QWORD *)(v27 + 32) = v39;
                WdLogEvent5_WdAssertion(v27);
              }
              v6 = a1;
            }
            v28 = *((_QWORD *)v18 + 306);
            *((_QWORD *)v18 + 310) = v24;
            v29 = *(_QWORD *)(v28 + 24);
            v30 = 2LL * *(unsigned int *)(v29 + 32);
            *(_OWORD *)(v29 + 8 * v30 + 40) = 0LL;
            *(_DWORD *)(v29 + 32) = ((unsigned __int8)*(_DWORD *)(v29 + 32) + 1) & 7;
            *(_DWORD *)(v29 + 8 * v30 + 40) = 1;
            *(_QWORD *)(v29 + 8 * v30 + 48) = v24;
          }
          else
          {
            v26 = *(_QWORD *)(v22 + 16);
            if ( v26 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
              LOBYTE(v13) = v36;
              v11 = v35;
            }
          }
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < *(_DWORD *)(a4 + 1096) );
      }
      a3[16580] |= 1 << v13;
    }
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v31);
    v14 = v37;
    v8 = v33;
    v13 = v36;
    v11 = v35;
    v10 = v34;
  }
  result = *(unsigned __int16 *)(a4 + 1096);
  a3[16581] = result;
  return result;
}
