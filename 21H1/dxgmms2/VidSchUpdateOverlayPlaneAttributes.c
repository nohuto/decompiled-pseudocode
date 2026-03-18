/*
 * XREFs of VidSchUpdateOverlayPlaneAttributes @ 0x1C00359E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchUpdateOverlayPlaneAttributes(__int64 a1, unsigned int a2, __int128 *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __m128i v6; // xmm1
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __m128i v12; // [rsp+58h] [rbp-20h]

  v4 = a2;
  v6 = (__m128i)a3[1];
  v11 = *a3;
  v7 = a4;
  v8 = *((_DWORD *)a3 + 8);
  v12 = v6;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
  v9 = 216 * v7;
  *(_OWORD *)(*(_QWORD *)(a1 + 8 * v4 + 3104) + v9 + 136) = v11;
  *(_QWORD *)(*(_QWORD *)(a1 + 8 * v4 + 3104) + v9 + 152) = v12.m128i_i64[0];
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 3104) + v9 + 164) = v12.m128i_i32[3];
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 3104) + v9 + 160) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 3104) + v9 + 168) = v8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
