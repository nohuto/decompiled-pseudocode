/*
 * XREFs of ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180241A10
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180241AF4 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1802AB140 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CSharedCircularQueue::PopAll(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 result; // rax
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  unsigned int v10; // r12d
  unsigned int v11; // r11d
  unsigned int v12; // edi
  __int64 v13; // rbp
  unsigned int v14; // ebx

  result = *(_QWORD *)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  v9 = 0;
  *a4 = 0;
  *a5 = v8;
  if ( v8 > a3 )
  {
    result = (unsigned int)(*(_DWORD *)a2 / a1[2]);
    v10 = a1[3];
    v11 = v8 - a3;
    v12 = v10;
    if ( v10 >= (unsigned int)result )
      v12 = *(_DWORD *)a2 / a1[2];
    if ( v11 < v12 )
      v12 = v11;
    if ( v12 )
    {
      v13 = *(_QWORD *)(a2 + 8);
      do
      {
        v14 = *a5 - v9 - 1;
        memcpy_0(
          (void *)(v13 + v9 * a1[2]),
          (const void *)(a1[2] * (v14 % v10) + *(_QWORD *)a1 + 8LL),
          (unsigned int)a1[2]);
        v10 = a1[3];
        result = v10 + v14;
        if ( **(_DWORD **)a1 > (unsigned int)result )
          break;
        v9 = *a4 + 1;
        *a4 = v9;
      }
      while ( v9 < v12 );
    }
  }
  return result;
}
