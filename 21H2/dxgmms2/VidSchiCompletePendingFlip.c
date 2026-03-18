/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C001ADBC
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0044610 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C001AF04 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(int a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  int i; // edi
  unsigned int FlipQueue; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]

  v4 = a3;
  v13 = a3;
  v12 = a2;
  for ( i = -1; ; ++i )
  {
    v14 = i;
    if ( i == *(_DWORD *)(a2 + 152) )
      break;
    FlipQueue = (unsigned int)VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v12);
    VidSchiCompletePendingFlipOnPlane(a1, a2, v4, FlipQueue, a4);
  }
  if ( a4 == 9 )
  {
    v11 = *(_QWORD *)(a2 + 8 * v4 + 3200);
    if ( *(_DWORD *)(v11 + 3000) )
    {
      WdLogSingleEntry5(0LL, 281LL, 45056LL, a2, v4, *(unsigned int *)(v11 + 3000));
      __debugbreak();
      JUMPOUT(0x1C002C03BLL);
    }
  }
  return 0LL;
}
