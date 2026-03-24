/*
 * XREFs of ?CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z @ 0x1C0064AD0
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0064840 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C0293484 (DxgkCreateSynchronizationObjectInternal.c)
 */

__int64 __fastcall CAdapter::CreateSyncObject(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax
  _DWORD v8[24]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = *(_DWORD *)(a1 + 36);
  v8[3] |= 3u;
  v8[0] = v6;
  v8[2] = 3;
  result = DxgkCreateSynchronizationObjectInternal(a2, v8);
  *a3 = v8[22];
  return result;
}
