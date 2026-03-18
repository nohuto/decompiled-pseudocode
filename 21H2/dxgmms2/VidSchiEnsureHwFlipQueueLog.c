/*
 * XREFs of VidSchiEnsureHwFlipQueueLog @ 0x1C00F60EC
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x1C0041CD0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1C0096A70 (VidSchSubmitCommand.c)
 *     VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x1C00F54F0 (VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3.c)
 * Callees:
 *     ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x1C002CB68 (-DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z @ 0x1C0045F30 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z.c)
 */

__int64 __fastcall VidSchiEnsureHwFlipQueueLog(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 Pool2; // rax
  __int64 v11; // rcx
  int v12; // eax
  ADAPTER_RENDER *v13; // rcx
  _DWORD v14[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v6 = *((_QWORD *)a1 + a2 + 400);
  if ( !v6 )
    return 0LL;
  v8 = 280LL * a3;
  v9 = 0;
  if ( !*(_QWORD *)(v8 + v6 + 416) )
  {
    *(_DWORD *)(v8 + v6 + 368) = 0;
    *(_DWORD *)(v8 + v6 + 364) = 64;
    Pool2 = ExAllocatePool2(64LL, 1024LL, 845310294LL);
    *(_QWORD *)(v8 + v6 + 416) = Pool2;
    v11 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225495LL;
    }
    v12 = *(_DWORD *)(v8 + v6 + 364);
    v14[3] = 0;
    v15 = v11;
    v13 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 1);
    v14[0] = a2;
    v14[1] = a3;
    v14[2] = v12;
    v9 = ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(v13, (const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *)v14);
    if ( v9 >= 0 )
      return (unsigned int)VidSchiSetInterruptTargetPresentId(a1, a2, a3, 0LL, 1);
  }
  return (unsigned int)v9;
}
