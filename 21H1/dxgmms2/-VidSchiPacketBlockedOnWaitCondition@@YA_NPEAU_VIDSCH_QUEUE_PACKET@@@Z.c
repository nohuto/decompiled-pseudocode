/*
 * XREFs of ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0038090
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035B8C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037C98 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?CheckPrimaryAllocationReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_PRIMARIES_REFERENCES@@_N@Z @ 0x1C002352C (-CheckPrimaryAllocationReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_PRIMARIES_REFERENCES@@_N@Z.c)
 *     ?VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0037C1C (-VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

bool __fastcall VidSchiPacketBlockedOnWaitCondition(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // rbx
  struct _VIDSCH_QUEUE_PACKET *v2; // r11
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // eax
  char v7; // r8
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 **v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v2 = a1;
  v3 = *(_QWORD *)(v1[5] + 8LL);
  v4 = *(_QWORD *)(v3 + 32);
  if ( *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0)
    || *(_DWORD *)(v4 + 2916) )
  {
    v14 = v1 + 3;
    v15 = v1[3];
    if ( !v15 )
      return 0;
    if ( *(_QWORD **)(v15 + 8) == v14 )
    {
      v16 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v16 == v14 )
      {
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *v14 = 0LL;
        v1[4] = 0LL;
        return 0;
      }
    }
    goto LABEL_28;
  }
  v5 = *((_DWORD *)v2 + 12);
  if ( v5 )
  {
    if ( v5 == 4 )
      return (*((_BYTE *)v2 + 272) & 1) == 0;
    if ( v5 != 8 )
      return 0;
    return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)v2 + 12));
  }
  if ( (*((_DWORD *)v2 + 16) & 8) != 0 )
    return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)v2 + 12));
  if ( *(_DWORD *)(v3 + 1576) || (v7 = 1, *(_BYTE *)(v4 + 51)) )
    v7 = 0;
  if ( (unsigned int)VIDMM_GLOBAL::CheckPrimaryAllocationReferences(
                       (VIDMM_GLOBAL *)v3,
                       (struct _VIDSCH_QUEUE_PACKET *)((char *)v2 + 464),
                       v7) != -1071775486 )
  {
    v11 = v1 + 3;
    v12 = v1[3];
    if ( v12 )
    {
      if ( *(_QWORD **)(v12 + 8) != v11 )
        goto LABEL_28;
      v13 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v13 != v11 )
        goto LABEL_28;
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = 0LL;
      v1[4] = 0LL;
    }
    *((_DWORD *)v2 + 16) |= 8u;
    return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)v2 + 12));
  }
  if ( !v1[4] )
  {
    v8 = v1 + 3;
    v9 = *(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3432LL;
    v10 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3440LL);
    if ( *v10 == (__int64 *)v9 )
    {
      *v8 = v9;
      v1[4] = v10;
      *v10 = v8;
      *(_QWORD *)(v9 + 8) = v8;
      return 1;
    }
LABEL_28:
    __fastfail(3u);
  }
  return 1;
}
